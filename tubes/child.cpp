#include "child.h"
#include "relasi.h"

void createList(List_c &L){
    first(L) = NULL;
}

void insertJalan(List_c &L, infotype_c x, infotype_c tipe){
    address_c P = new elmList_c;
    tipe(P) = tipe;
    info(P) = x;
    next(P) = NULL;
    if (first(L) == NULL || x < info(first(L))){
        if (first(L) != NULL){
            next(P) = first(L);
        }
        first(L) = P;
    }else if (next(first(L)) == NULL){
        next(first(L)) = P;
    }else {
        address_c Q = first(L);
        while (x > info(next(Q)) && next(next(Q)) != NULL){
            Q = next(Q);
        }
        if (next(Q) != NULL){
            if(next(next(Q)) == NULL && info(next(Q)) < x){
                Q = next(Q);
            }
            next(P) = next(Q);
        }
        next(Q) = P;
    }
}

void deleteJalan(List_c &L, address_c &P){
    if(first(L) == NULL){
        cout << "Tidak ada data jalan" << endl;
    } else {
        printInfo(L);
        string hapus;
        cout << "Masukkan nama jalan yang akan dihapus : ";
        cin >> hapus;
        if (info(first(L)) == hapus){
            P = first(L);
            if(next(first(L)) == NULL){
                first(L) = NULL;
            } else {
                first(L) = next(P);
                next(P) = NULL;
            }
        } else {
            address_c Q = first(L);
            while (Q != NULL && info(next(Q)) != hapus) {
                Q = next(Q);
            }
            if (Q == NULL){
                cout << "Nama jalan tidak ada dalam data" << endl;
                cout << "Kembali ke menu" << endl;
            } else {
                P = next(Q);
                if (next(Q) == NULL){
                    next(Q) = NULL;
                } else {
                    next(Q) = next(P);
                    next(P) = NULL;
                }

            }
        }
    }
}

void printInfo(List_c L){
    address_c p = first(L);
    cout << "Daftar Jalan : " << endl;
    while(p != NULL){
        cout<<info(p)<<", ";
        p = next(p);
    }
    cout<<endl;
}
