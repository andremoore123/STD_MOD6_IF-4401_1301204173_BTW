#ifndef DLL_FIRST_LAST_H_INCLUDED
#define DLL_FIRST_LAST_H_INCLUDED
using namespace std;
#include<iostream>
/*
Andre Eka Putra Simanjuntak
1301204173
*/
#define info(p) (p)->info
#define next(p) (p)->next
#define previous(p) (p)->previous
#define first(L) ((L).first)
#define last(L) ((L).last)
#define NILL NULL


typedef int infotype;
typedef struct element*adr;

struct element{
    adr previous;
    infotype info;
    adr next;
};

struct List{
    adr first;
    adr last;
};


void createList_1301204173(List &L);
adr createElement_1301204173(infotype x);
void insertFirst_1301204173(List &L, adr p);
void insertLast_1301204173(List &L, adr p);
void insertAfter_1301204173(adr q, adr p);
void insertAscending_1301204173(List &L, infotype dataBaru);
void deleteFirst_1301204173(List &L, adr p);
void deleteLast_1301204173(List &L, adr p);
void deleteAfter_1301204173(adr q, adr p);
void deleteElm_1301204173(List &L, infotype dataHapus);
void printList_1301204173(List L);
bool findElement_1301204173(List L, infotype dataDicari);
int frequencyofElm_1301204173(List L, infotype dataDicari);

#endif // DLL_FIRST_LAST_H_INCLUDED
