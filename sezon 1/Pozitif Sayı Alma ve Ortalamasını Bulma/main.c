#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi;
    int sayilarinToplami = 0;

    do {

        printf("Lutfen bir sayi giriniz: ");
        scanf("%d", &sayi);
        sayilarinToplami += sayi;

    } while (sayi > 0);

    sayilarinToplami -= sayi; //son eklenen negatif sayiyi cikar.

    printf("\nGirilen sayilarin toplami: %d", sayilarinToplami);
    printf("\nGirilen sayilarin ortalamasi: %d", sayilarinToplami/2);

    getch();
    return 0;
}
