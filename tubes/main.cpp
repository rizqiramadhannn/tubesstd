#include "parent.h"
#include "child.h"
#include "relasi.h"
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
        cout << "3. ?" << endl;
        cout << "4. Hapus data kota" << endl;
        cout << "5. Hapus data jalan" << endl;
        cout << "6. Tampilkan semua data" << endl;
        cout << "7. Tampilkan data kota berdasarkan jalan" << endl;
        cout << "8. Tampilkan data jalan berdasarkan kota" << endl;
        cout << "9. Tampilkan data jalan berdasarkan tipe jalan" << endl;
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
            cout << "Belum kelarrr" << endl;
        } else if (input == "4"){
            deleteKota(Kota);
        } else if (input == "5"){
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
        } else if (input == "6"){
            printAll(Kota);
        } else if (input == "7"){
            cout << "Belum kelarrr" << endl;
        } else if (input == "8"){
            printKota(Kota);
            cout << "Masukkan nama kota : ";
            cin >> x;
            P = cariKota(Kota, x);
            printInfo(child(P));
        } else if (input == "9"){
            cout << "Belum kelarrr" << endl;
        } else if (input != "0"){
            cout << "Input salah/menu tidak tersedia" << endl;
        }
        cout << "---------------------------" << endl;
        cout << endl;
    }
}
