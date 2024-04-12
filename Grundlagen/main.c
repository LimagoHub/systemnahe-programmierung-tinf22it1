#include <stdio.h>

void ausgabe(int * array, size_t size) {
    for (int i = 0; i < size; ++i) {
        printf("%d\n",array[i]);// feld + i * sizeof(int)
    }
}

int main() {

    int feld [] = {10,20,30,40};

    int * ptr;

    ptr = feld;

    printf("%d\n", *feld);
    printf("%d\n", feld[0]);

    printf("%d\n", *ptr);
    printf("%d\n", ptr[0]);

    printf("%d\n", feld[1]);
    printf("%d\n", *(feld + 1));

//    for (int i = 0; i < 4; ++i) {
//       printf("%d\n",feld[i]);// feld + i * sizeof(int)
//    }

    ausgabe(feld, 4);
    printf("%d\n", sizeof(feld));
    printf("%d\n", sizeof(ptr));

    return 0;
}



