#include "parent.h"
#include "child.h"

int main()
{
<<<<<<< HEAD
    List_c Jalan;
    createList(Jalan);
    insertJalan(Jalan);
    insertJalan(Jalan);
    printInfo(Jalan);
    deleteJalan(Jalan);
    printInfo(Jalan);
    deleteJalan(Jalan);
    printInfo(Jalan);
=======
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
            cout << "Belum kelarrr" << endl;
        } else if (input == "3"){
            cout << "Belum kelarrr" << endl;
        } else if (input == "4"){
            deleteKota(Kota);
        } else if (input == "5"){
            cout << "Belum kelarrr" << endl;
        } else if (input == "6"){
            printInfo(Kota);
        } else if (input == "7"){
            cout << "Belum kelarrr" << endl;
        } else if (input == "8"){
            cout << "Belum kelarrr" << endl;
        } else if (input == "9"){
            cout << "Belum kelarrr" << endl;
        } else if (input != "0"){
            cout << "Input salah/menu tidak tersedia" << endl;
        }
        cout << "---------------------------" << endl;
        cout << endl;
    }
>>>>>>> a74439f9dece9a073c4c4d039f336eec052b3b8b
}
