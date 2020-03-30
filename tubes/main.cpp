#include "parent.h"
#include "child.h"

int main()
{
    List_p Kota;
    createList(Kota);
    insertKota(Kota);
    insertKota(Kota);
    printInfo(Kota);
    insertKota(Kota);
    printInfo(Kota);
    insertKota(Kota);
    printInfo(Kota);
}
