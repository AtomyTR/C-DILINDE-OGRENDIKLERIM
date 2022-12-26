#include <stdio.h>
#include <stdlib.h>

int main()
{
    char dizi[4] = {'a', 'b', 'c', 'd'};
    char *p;

    p = &dizi;

    printf("1. Adres: %u , 1. deger: %c\n", p, *p);
    printf("2. Adres: %u , 2. deger: %c\n", p+1, *(p+1));
    printf("\n---------------------------------------\n");

    for (int i=0; i<4; i++)
    {
        printf("Adres: %u , deger: %c\n", p+i, *(p+i));
    }

}
