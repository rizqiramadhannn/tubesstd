#include "parent.h"
#include "child.h"
#include<cstring>
int main()
{
    address_p P;
    address_c Q;
    infotype_c x, y;

    List_p Kota;
    createList(Kota);
    string input;
    while (input != "0"){
        cout << "Menu" << endl;
        cout << "1. Tambah data kota" << endl;
        cout << "2. Tambah data jalan" << endl;
        cout << "3. Hapus data kota" << endl;
        cout << "4. Hapus data jalan" << endl;
        cout << "5. Tampilkan semua data" << endl;
        cout << "6. Tampilkan data kota berdasarkan jalan" << endl;
        cout << "7. Tampilkan data jalan berdasarkan kota" << endl;
        cout << "8. Tampilkan data jalan berdasarkan tipe jalan" << endl;
        cout << "0. End Program" << endl;
        cout << "---------------------------" << endl;
        cout << "Pilih menu : ";
        cin >> input;
        cout << endl;
        if (input == "1"){
            insertKota(Kota);
        } else if (input == "2"){
            do{
                printKota(Kota);
                cout << "Masukkan nama kota : ";
                cin >> x;
                P = cariKota(Kota, x);
                if (P == NULL){
                    cout << "Kota tidak ditemukan" << endl;
                }
            } while (P == NULL);
            cout << "Masukkan nama jalan : ";
            cin >> x;
            cout << "Masukkan tipe jalan : ";
            cin >> y;
            insertJalan(child(P), x, y);
        } else if (input == "3"){
            deleteKota(Kota);
        } else if (input == "4"){
            if(first(Kota) == NULL){
                cout << "Tidak ada data kota" << endl;
            } else {
                do{
                    printKota(Kota);
                    cout << "Masukkan nama kota : ";
                    cin >> x;
                    P = cariKota(Kota, x);
                    if (P == NULL){
                        cout << "Kota tidak ditemukan" << endl;
                    }
                } while (P == NULL);
                printInfo(child(P));
                deleteJalan(child(P), Q);
            }
        } else if (input == "5"){
            printAll(Kota);
        } else if (input == "6"){
            cout << "Belum kelarrr" << endl;
        } else if (input == "7"){
            if(first(Kota) == NULL){
                cout << "Tidak ada data kota" << endl;
            } else {
                do{
                    printKota(Kota);
                    cout << "Masukkan nama kota : ";
                    cin >> x;
                    P = cariKota(Kota, x);
                    if (P == NULL){
                        cout << "Kota tidak ditemukan" << endl;
                    }
                } while (P == NULL);
                printInfo(child(P));
            }
        } else if (input == "8"){
             tipeJalan(Jalan);
        } else if (input != "0"){
            cout << "Input salah/menu tidak tersedia" << endl;
        }
        cout << "---------------------------" << endl;
        cout << endl;
    }
}
