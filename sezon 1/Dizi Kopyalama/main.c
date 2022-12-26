#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char kelime[10];
    printf("Kelime gir: ");
    gets(kelime);

    char kelimekopya[10];
    char *p, *q;
    p = &kelime[0];
    q = &kelimekopya[0];

    strcpy(q, p);

    for (int i = 0; i<10; i++)
    {
        printf("%c \n", kelimekopya[i]);
    }
}
