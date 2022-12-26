#include <stdio.h>
#include <stdlib.h>

int main()
{



    //KELIMENIN KAC HARFTEN OLUSTUGUNU HESAPLAR
    char kelime[20];
    printf("Kelime gir: ");

    scanf("%s", &kelime);
    int boyut;
    int i = 0;
    char *p;

    p = &kelime[0];

    while(*(p+i) != '\0')
    {
        i = i+1;
    }

    boyut = i;
    printf("Kelimenin uzunlugu: %d \n", boyut);
    getch();


    //KELIMENIN ICINDEKI BELLI BIR HARFIN KAC TANE OLDUGUNU BULUR
    int sayac = 0;
    for (int j = 0; j<boyut; j++)
    {
        if (*(p+j) == 'a')
        {
            sayac++;
        }
    }

    printf("Kelimenin icinde %d tane A var!", sayac);
    getch();

    printf("\n\nBitti.\n\n");
}
