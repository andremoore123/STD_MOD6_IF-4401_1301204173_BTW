#include "DLL_First_Last.h"
#include<iostream>
/*
Andre Eka Putra Simanjuntak
1301204173
*/
using namespace std;

int main()
{
   List L;
   adr p;
    // Mandiri
    createList_1301204173(L); // Membentuk element L
    printList_1301204173(L); // Menampilkan data pada list

    insertAscending_1301204173(L, 25); // Menambahkan 25 secara terurut
    printList_1301204173(L);

    insertAscending_1301204173(L, 10); // Menambahkan 10 secara terurut
    printList_1301204173(L);

    insertAscending_1301204173(L, 10); // Menambahkan 10 secara terurut
    printList_1301204173(L);

    insertAscending_1301204173(L, 25); // Menambahkan 25 secara terurut
    printList_1301204173(L);

    insertAscending_1301204173(L, 25); // Menambahkan 25 secara terurut
    printList_1301204173(L);

    if (findElement_1301204173(L, 10)){ // Memberikan output apakah 10 ada pada list
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    cout << frequencyofElm_1301204173(L, 10) << endl; // Memberikan output frekuensi angka 10 muncul pada list
    cout << frequencyofElm_1301204173(L, 25) << endl;// Memberikan output frekuensi angka 25 muncul pada list
    cout << frequencyofElm_1301204173(L, 2) << endl;// Memberikan output frekuensi angka 2 muncul pada list


    // Terbimbing
/*   insertAscending_1301204173(L, 25); // Menambahkan 25 secara terurut
    printList_1301204173(L);

    insertAscending_1301204173(L, 10); // Menambahkan 10 secara terurut
    printList_1301204173(L);

    insertAscending_1301204173(L, 32); // Menambahkan 32 secara terurut
    printList_1301204173(L);

    insertAscending_1301204173(L, 3); // Menambahkan 3 secara terurut
    printList_1301204173(L);

    deleteElm_1301204173(L, 32); // Menghapus data 32 pada list
    printList_1301204173(L);

    deleteElm_1301204173(L, 3); // Menghapus data 3 pada list
    printList_1301204173(L);

    deleteElm_1301204173(L, 10); // Menghapus data 10 pada list
    printList_1301204173(L);

    deleteElm_1301204173(L, 25); // Menghapus data 25 pada list
    printList_1301204173(L);
*/
}
