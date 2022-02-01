#include "DLL_First_Last.h"
#include<iostream>
/*
Andre Eka Putra Simanjuntak
1301204173
*/

void createList_1301204173(List &L){
    first(L) = NILL;
    last(L) = NILL;
}

adr createElement_1301204173(infotype x){
    adr p;
    p = new element;
    info(p) = x;
    previous(p) = NILL;
    next(p) = NILL;
    return p;
}

void insertLast_1301204173(List &L, adr p){
    adr x;
    if (first(L) == NILL){
        first(L) = p;
        last(L) = p;
        previous(first(L)) = NILL;
    } else {
        next(last(L)) = p;
        previous(p) = last(L);
        last(L) = p;
    }
}

void insertAfter_1301204173(adr prec, adr p){
    next(p) = next(prec);
    previous(next(prec)) = p;
    next(prec) = p;
    previous(p) = prec;
}

void deleteFirst_1301204173(List &L, adr p){
    p = first(L);
    if (next(p) == NILL){
        first(L) = NILL;
        last(L) = NILL;
    } else {
        first(L) = next(first(L));
        previous(first(L)) = NILL;
        next(p) = NILL;
    }
}

void deleteAfter_1301204173(adr prec, adr p){
    p = next(prec);
    next(prec) = next(p);
    previous(next(p)) = prec;
    next(p) = NILL;
    previous(p) = NILL;
}


void printList_1301204173(List L){
    adr p;
    p = first(L);
    while (p != NILL){
        cout << info(p) << " ";
        p = next(p);
    } cout << endl;
}


void insertFirst_1301204173(List &L, adr p){
    if (first(L) != NILL){
        next(p) = first(L);
        previous(first(L)) = p;
        previous(p) = NILL;
        first(L) = p;
    } else {
        first(L) = p;
        next(p) = NILL;
        previous(p) = NILL;
        last(L) = first(L);
    }
}

void insertAscending_1301204173(List &L, infotype dataBaru){
    adr p, q;
    p = createElement_1301204173(dataBaru);
    if (first(L) == NILL || info(p) <= info(first(L))){
        insertFirst_1301204173(L, p);
    } else if (info(p) >= info(last(L))){
        insertLast_1301204173(L, p);
    } else {
        q = first(L);
        while (info(next(q)) < info(p)){
            q = next(q);
        }
        insertAfter_1301204173(q, p);
    }
}

void deleteLast_1301204173(List &L, adr p){
    p = previous(last(L));
    next(p) = NILL;
    previous(last(L)) = NILL;
    last(L) = p;
}

void deleteElm_1301204173(List &L, infotype dataHapus){
    adr p, q;
    p = createElement_1301204173(dataHapus);
    if (first(L) == NILL){
        cout << "List Kosong" << endl;
    } else if ((info(first(L)) == info(p))){
        deleteFirst_1301204173(L, p);
    } else if ((info(last(L)) == info(p))){
        deleteLast_1301204173(L, p);
    } else {
        q = first(L);
        while (info(next(q)) != info(p)){
            q = next(q);
        }
        deleteAfter_1301204173(q, p);
    }
}
// Mandiri
bool findElement_1301204173(List L, infotype dataCari){
    adr p = first(L);
    bool found = false;
    while ((p != NILL) && !found){
        if (info(p) == dataCari){
            found = true;
        }
        p = next(p);
    }
    return found;
}

int frequencyofElm_1301204173(List L, infotype dataCari){
    adr p = first(L);
    int found = 0;

    while (p != NILL){
        if (info(p) == dataCari){
            found ++;
        }
        p = next(p);
    }
    return found;
}
