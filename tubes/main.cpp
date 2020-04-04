#include "parent.h"
#include "child.h"

int main()
{
    List_c Jalan;
    createList(Jalan);
    insertJalan(Jalan);
    insertJalan(Jalan);
    printInfo(Jalan);
    deleteJalan(Jalan);
    printInfo(Jalan);
    deleteJalan(Jalan);
    printInfo(Jalan);
}
