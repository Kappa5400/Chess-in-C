#include "stdio.h"
#include "stdlib.h"
#include "defs.h"

int main()  {
    
    AllInit();

    int p1 = rand();
    int p2 = rand();
    int p3 = rand();
    int p4 = rand();

    printf("Piece 1: %X\n", p1);
    printf("Piece 2: %X\n", p2);
    printf("Piece 3: %X\n", p3);
    printf("Piece 4: %X\n", p4);

    int Key = p1 ^ p2 ^ p3 ^ p4;

    printf("Key:%X\n ", Key);

    return 0;
}

