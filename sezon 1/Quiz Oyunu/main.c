#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // sleep fonksiyonu icin

// Tuslarin bilgisini alacagimiz degiskeni tanimliyoruz.
char tus;
// Bununla birlikte sorularimizin cevaplarini kontrol edecegiz.

int main() //BASLANGIC
{
     system("cls"); // Konsolu temizleme fonksiyonu.
     system("COLOR 7"); // Konsol rengini beyaz yapiyoruz.

     printf("\n --------------------------HOS GELDINIZ----------------------------------");
     printf("\n |-----------------------------------------------------------------------|");
     printf("\n\t\t     Quiz oyununa hos geldiniz.");
     printf("\n\t    Burada size genel yazilim bilgisi hakkinda");
     printf("\n\t      cesitli sorular sorulacaktir. Bol sans!");
     printf("\n |-----------------------------------------------------------------------|");
     printf("\n\n 1- tusuna basarak oyuna baslayabilirsin.");
     printf("\n 2- tusuna basarak yardim alabilirsin.");
     printf("\n\n -------------------------YIGIT AKIN KAYA---------------------------------");
     printf("\n");

     menu(); // Menu fonksiyonunu cagiriyoruz.
}



void menu()
{
    tus = toupper(getch()); // kucuk harfli alfabeyi buyuk harfli alfabeye donusturur.

    switch (tus)
     {
    case '1':
        soru1();
        break;

    case '2':
        yardim();
        break;

    case '3':
        main();
        break;

    default:
        uyari();
        break;
     }
}


void uyari()
{
    system("cls");
    system("COLOR C"); // Konsol rengini kirmizi yapar.

    printf("\n --------------------------UYARI----------------------------------");
    printf("\n\nLutfen yardim menusunde belirtilen tuslarla hareket ediniz.");
    printf("\n\n\t\t   *-* 2 TUSUNA BASIN *-*");

    menu();
}



void yardim()
{
     system("cls");
     system("COLOR 7");

     printf("\n --------------------------YARDIM MENUSU----------------------------------");
     printf("\n |-----------------------------------------------------------------------|");
     printf("\n\n IPUCULAR:");
     printf("\n 1- 10 tane soru mevcuttur.");
     printf("\n 2- Her soru 5 puandir.");
     printf("\n 3- Lutfen sorulari dogru cevaplamaya calisin.");
     printf("\n 4- A B C D E tuslari ile sorulara cevap verebilirsiniz.");
     printf("\n\n BILGILER:");
     printf("\n a) 1 tusuna basarak oyuna baslayabilirsin.");
     printf("\n b) 2 tusuna basarak yardim alabilirsin.");
     printf("\n c) 3 tusuna basarak ana menuye donebilirsin.");
     printf("\n\n |-----------------------------------------------------------------------|");
     printf("\n ----------------------------------------------------------");
     printf("\n");

     menu();

}



void soru1()
{
    system("cls");
    system("COLOR 7");

    //SORU METNI
    printf("#SORU 1\n");
    printf("\nJava ve Javascript ayni diller midir?\n");
    printf("\nA - EVET");
    printf("\nB - HAYIR");

    tus = toupper(getch());

    //DOGRU CEVAP SECILECEK
    if (tus == 'B')
    {
        printf("\n\nDOGRU CEVAP");
        printf("\nJava, sanal makinede veya tarayicida calisan uygulamalar olusturur, JavaScript kodu sadece tarayicida calistirilir. \nJava kodunun derlenmesi gerekir, JavaScript kodlari metinlerden olusur.");
        printf("\n\nSiradaki soruya geciliyor...");
        sleep(8);
        soru2();
    } else {
        printf("\n\nYANLIS CEVAP");
    }
}



void soru2()
{
    system("cls");
    system("COLOR 7");

    //SORU METNI
    printf("#SORU 2\n");
    printf("\nIDE nedir?\n");
    printf("\nA - Programcilarin verimli sekilde yazilim kodu gelistirmesine yardimci olan yazilim uygulamalaridir.");
    printf("\nB - Programcilarin kullandigi iletisim uygulamalaridir.");
    printf("\nC - Web tasarimcilarinin kullandigi site tasarlama uygulamasidir.");

    tus = toupper(getch());

    //DOGRU CEVAP SECILECEK
    if (tus == 'A')
    {
        printf("\n\nDOGRU CEVAP");
        printf("\nIDE (tumlesik gelistirme ortami), bilgisayar programcilarinin hizli ve rahat bir sekilde yazilim \ngelistirebilmesini amaclayan, gelistirme surecini organize edebilen ve bu sureci verimli kullanilmasina katkida bulunan araclarin tamamini iceren bir yazilim turudur.");
        printf("\n\nSiradaki soruya geciliyor...");
        sleep(10);
        soru3();
    } else {
        printf("\n\nYANLIS CEVAP");
    }
}



void soru3()
{
    system("cls");
    system("COLOR 7");

    //SORU METNI
    printf("#SORU 3\n");
    printf("\nIF - ELSE ifadeleri ne icin kullanilir?\n");
    printf("\nA - Toplama cikarma islemleri yapmak icin kullanilir.");
    printf("\nB - Kodlardaki gereksiz satirlari silmek icin kullanilir.");
    printf("\nC - Sartlarin dogru olup olmadigini kontrol etmek icin kullanilir.");

    tus = toupper(getch());

    //DOGRU CEVAP SECILECEK
    if (tus == 'C')
    {
        printf("\n\nDOGRU CEVAP");
        printf("\nIF - ELSE ifadeleri sartlarin dogru olup olmadigini kontrol etmek icin kullanilir. Kosulun saglandigi kodlar \nIF icerisinde yer alirken kosulun saglanmadigi kodlar ise ELSE icerisinde yer alir.");
        printf("\n\nSiradaki soruya geciliyor...");
        sleep(8);
        soru4();
    } else {
        printf("\n\nYANLIS CEVAP");
    }
}



void soru4()
{
    system("cls");
    system("COLOR 7");

    //SORU METNI
    printf("#SORU 4\n");
    printf("\nAsagidaki veri tiplerinden hangisi metin icerir?\n");
    printf("\nA - int");
    printf("\nB - float");
    printf("\nC - string");

    tus = toupper(getch());

    //DOGRU CEVAP SECILECEK
    if (tus == 'C')
    {
        printf("\n\nDOGRU CEVAP");
        printf("\nTek bir karakter yerine bir sozcuk, bir tumce, bir paragraf ya da bir roman yazmak istedigimizde char veri tipi yeterli olmayacaktir. String, karakter dizileri tanimlayabilen bir veri turudur.");
        printf("\n\nSiradaki soruya geciliyor...");
        sleep(8);
        soru5();
    } else {
        printf("\n\nYANLIS CEVAP");
    }
}



void soru5()
{
    system("cls");
    system("COLOR 7");

    //SORU METNI
    printf("#SORU 5\n");
    printf("\nC dilinde ekrana yazi yazdirma fonksiyonu hangisidir?\n");
    printf("\nA - Console.WriteLine()");
    printf("\nB - printf()");
    printf("\nC - System.out.println()");
    printf("\nD - print()");

    tus = toupper(getch());

    //DOGRU CEVAP SECILECEK
    if (tus == 'B')
    {
        printf("\n\nDOGRU CEVAP");
        printf("\nC dilinde ekrana yazi yazdirmak icin printf fonksiyonu kullanilir.");
        printf("\n\nSiradaki soruya geciliyor...");
        sleep(8);
        main();
    } else {
        printf("\n\nYANLIS CEVAP");
    }
}

// BURADAN SONRA ANA MENUYE GERI DONUYOR
// BU QUIZ PROGRAMI YIGIT AKIN KAYA TARAFINDAN NECMETTIN ERBAKAN, FEN FAKULTESI MATEMATIK VE BILGISAYAR BILIMLERI
// BOLUMUNDE, PROGRAM YARATICISI TARAFINDAN DERS ANLATILMAK UZERE HAZIRLANMISTIR
// SINIF ARKADASLARIMIN YAZILIMI DAHA IYI KAVRAMASI ICIN HAZIRLADIM, UMARIM ISINIZE YARAR
