#include "parent.h"

void createList(List_p &L){
    first(L) = NULL;
    last(L) = NULL;
}

void insertKota(List_p &L){
    infotype_p x;
    cout << "Masukkan nama kota : ";
    cin >> x;
    address_p P = new elmList_p;
    info(P) = x;
    next(P) = NULL;
    prev(P) = NULL;
    if (first(L) == NULL){
        first(L) = P;
        last(L) = P;
        next(P) = P;
        prev(P) = P;
    } else {
        address_p Q = first(L);
        string key = x.substr(0,1);
        if (key < info(first(L)).substr(0,1)){
            next(P) = first(L);
            prev(first(L)) = P;
            first(L) = P;
            next(last(L)) = P;
            prev(P) = last(L);
        } else if (key > info(last(L)).substr(0,1)){
            next(last(L)) = P;
            prev(first(L)) = P;
            prev(P) = last(L);
            next(P) = first(L);
            last(L) = P;
        }else {
            do {
                Q = next(Q);
            } while(info(Q).substr(0,1) <= key);
            next(P) = next(Q);
            prev(P) = Q;
            prev(next(Q)) = P;
            next(Q) = P;
        }
    }
}

void deleteFirst(List_p &L, address_p &P){
    if (first(L) != NULL ){
        P = first(L);
        first(L) = next(P);

        next(P) = NULL;
    }
}
void deleteLast(List_p &L, address_p &P){
    address_p Q;
    if (first(L) == NULL){
        cout<<"Empty"<<endl;
    } else if(next(first(L)) == NULL){
       P =first(L);
       first(L) = NULL;
    } Q = first(L);
    while (next(next(Q)) != NULL){
        Q = next(Q);
    next(Q) = NULL;
    }

}

void deleteAfter(List_p &L, address_p Prec, address_p P){
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
}

void printInfo(List_p L){
    address_p p = first(L);
    do{
        cout<<info(p)<<", ";
        p = next(p);
    }while(p != first(L));
    cout<<endl;
}
