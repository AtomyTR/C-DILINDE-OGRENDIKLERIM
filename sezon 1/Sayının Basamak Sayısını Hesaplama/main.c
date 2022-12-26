#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi = 735;
    int sayac = 0;
    int temp = 0;

    while (sayi > 0)
    {
        temp = sayi;

        sayi = sayi%10;
        sayi = temp - sayi;

        sayi = sayi/10;
        sayac = sayac+1;

        printf("Sayac = %d\n", sayac);
    }
}
