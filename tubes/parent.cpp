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
        if (x < info(first(L))){
            next(P) = first(L);
            prev(first(L)) = P;
            first(L) = P;
            next(last(L)) = P;
            prev(P) = last(L);
        } else if (x > info(last(L))){
            next(last(L)) = P;
            prev(first(L)) = P;
            prev(P) = last(L);
            next(P) = first(L);
            last(L) = P;
        }else {
            Q = first(L);
            while (x > info(Q)){
                Q = next(Q);
            }
            next(P) = Q;
            prev(P) = prev(Q);
            next(prev(Q)) = P;
            prev(Q) = P;
        }
    }
    cout << endl;
}

void deleteKota(List_p &L){
    if(first(L) == NULL){
        cout << "Tidak ada data" << endl;
    } else {
        printInfo(L);
        string hapus;
        cout << "Masukkan nama kota yang akan dihapus : ";
        cin >> hapus;
        address_p P;
        if (info(first(L)) == hapus){
            P = first(L);
            if(first(L) == last(L)){
                first(L) = NULL;
                last(L) = NULL;
            } else {
                first(L) = next(P);
                next(last(L)) = first(L);
                prev(first(L)) = last(L);
                prev(P) = NULL;
                next(P) = NULL;
            }
        } else {
            address_p Q = first(L);
            do {
                Q = next(Q);
            } while (Q != first(L) && info(next(Q)) != hapus);
            if (Q == first(L)){
                cout << "Nama kota tidak ada dalam data" << endl;
                cout << "Kembali ke menu" << endl;
            } else if (Q == last(L)){
                P = last(L);
                last(L) = prev(P);
                next(last(L)) = first(L);
                prev(first(L)) = last(L);
                next(P) = NULL;
                prev(P) = NULL;
            } else {
                P = next(Q);
                next(Q) = next(P);
                prev(next(Q)) = Q;
                next(P) = NULL;
                prev(P) = NULL;
            }
        }
    }
}

void printInfo(List_p L){
    address_p p = first(L);
    if (p == NULL){
        cout << "Daftar kota kosong" << endl;
    } else {
        cout << "Daftar kota : ";
        do{
            cout<<info(p)<<", ";
            p = next(p);
        }while(p != first(L));
        cout << endl;
    }
}
