#include <stdio.h>
#include "fooh.h"



// Declaration einer modul-globalen Variablen
/* private */ static int z;

void foo() {
    static int x = 0;

    if(x >= 10 ) return;
    printf("Hallo");
    x ++;
    foo();
}

int main() {

    foo();
    foo();

    // Declaration einer lokalen Variablen
    int x;
    y =100;

    // Intitialisierung
    x = 0;

    ausgabe();

    //printf("%d", sizeof(long long));
    //printf("%d", sizeof(long long));
    return 0;
}



