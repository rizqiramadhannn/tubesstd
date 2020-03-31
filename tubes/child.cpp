#include "child.h"

address_c allocate(infotype_c x){
    address_c p = new elmList_c;
    info(p) = x;
    next(p) = NULL;

    return p;
}

void createList(List_c &L){
    first(L) = NULL;
}

void insertJalan(List_c &L){
    infotype_c x;
    cout << "Masukkan nama jalan : ";
    cin >> x;
    address_c P = new elmList_c;
    info(P) = x;
    next(P) = NULL;
    if (first(L) == NULL){
        first(L) = P;
        next(P) = P;
    } else if {
        address_c Q = first(L);
        if (x < info(first(L))){
            next(P) = first(L);
            first(L) = P;
        }else {
            Q = first(L);
            while (x > info(Q)){
                Q = next(Q);
            }
            next(P) = Q;
        }
    }
}

void insertFirst(List_c &L, address_c P){
    next(P) = first(L);
    first(L) = P;
}

void insertLast(List_c &L, address_c P){
    address_c Q;
    Q = first(L);
    while(next(Q) != NULL){
        Q = next(Q);
    next(Q) = P;
    }
}

void insertAfter(List_c &L, address_c Prec, address_c P){
    if(Prec != NULL){
        next(P) = next(Prec);
        next(Prec) = P;
    }
}

void deleteFirst(List_c &L, address_c &P){
    if (first(L) != NULL ){
        P = first(L);
        first(L) = next(P);

        next(P) = NULL;
    }
}
void deleteLast(List_c &L, address_c &P){
    address_c Q;
    if (first(L) = NULL){
        cout<<"Empty"<<endl;
    } else if(next(first(L)) = NULL){
       P =first(L);
       first(L) = NULL;
    } Q = first(L);
    while (next(next(Q)) != NULL){
        Q = next(Q);
    next(Q) = NULL;
    }

}

void deleteAfter(List_c &L, address_c Prec, address_c P){
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;
}

void printInfo(List_c L){
    address_c p = first(L);
    while(p != NULL){
        cout<<info(p)<<", ";
        p = next(p);
    }
    cout<<endl;
}
