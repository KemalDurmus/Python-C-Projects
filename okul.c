#include <stdio.h>

/*int main()
{
    int kilo = 100, gram = 1;

    printf("Elma'nin kilo fiyati : %d TL\n", kilo);
    printf("Elma'nin gram fiyati : %d TL\n", gram);


    float boy = 1.85;
    printf("Sinifin boy ortalamsi : %.2f\n", boy);

    return 0;
}*/



/*
int main()
{
    float boy = 1.85;
    printf("Boyum : %.2f\n", boy);

    return 0;
}*/


/*
int = %d = tam sayilar
float = %f = virgüllü sayilar
double = %lf = çift hassasiyetli sayilar
char = %c = karakterler
 */


/*int main( )
{

    int sayi1,sayi2, toplam;
    scanf("%d", &sayi1);
    scanf("%d", &sayi2);
    toplam = sayi1 + sayi2;
    printf("sayi1 = %d, sayi2 = %d\n",sayi1 ,sayi2);
    printf("sayi1 = %d, sayi2 = %d\n",sayi1 ,sayi2);
    printf("toplam = %d", toplam);
    printf("%d %d %d", sayi1, sayi2, toplam);
    printf("%d %d %d",sayi1, sayi2, sayi1 + sayi2);

    return 0;
}*/


/* Toplama işlemi 
int main() 
{
    int x, y;     // Kullanıcıdan alınacak sayılar
    int toplam;   // Toplam

    printf("Iki sayi giriniz: ");
    scanf("%d %d", &x, &y);   // Aynı satırda iki sayı okunabilir

    toplam = x + y;

    // Çıktılar
    printf("x = %d, y = %d, toplam = %d\n", x, y, toplam);
    //printf("%d %d %d\n", x, y, toplam);

    return 0;
}*/
 
/*
int main()
{
    int x, y;
    int cikartma;

    printf("Cikartmak istediginiz iki sayi giriniz: ");

    scanf("%d %d", &x, &y);

    cikartma = x - y;
    printf("x = %d, y = %d, Cikartma isleminin sonucu = %d\n", x, y, cikartma);

    return 0;


    

}*/



/*
int main()
{
    int x, y;
    int carpma;

    printf("Carpmak istediginiz iki sayi giriniz: ");

    scanf("%d %d", &x, &y);

    carpma = x * y;
    printf("x = %d, y = %d, Carpma isleminin sonucu = %d\n", x, y, carpma);

    return 0;
}*/

/*
int main()
{
    int x, y;
    float bolme;

    printf("Bolmek istediginiz iki sayi giriniz: ");

    scanf("%d %d", &x, &y);

    bolme = (float)x / y;  // Tür dönüşümü yaparak doğru sonucu alıyoruz
    printf("x = %d, y = %d, Bolme isleminin sonucu = %.2f\n", x, y, bolme);

    return 0;
}*/


/*
int main()
{
    float x, y;
    float toplama, fark, carpim, bolme;

    printf("Iki ondalikli sayi giriniz: ");
    scanf("%f %f", &x, &y);

    toplama = x + y;
    fark    = x - y;
    carpim  = x * y;
    bolme   = x / y;

    printf("\nToplam  = %.2f", toplama);
    printf("\nFark    = %.2f", fark);
    printf("\nCarpim  = %.2f", carpim);
    printf("\nBolme   = %.2f\n", bolme);

    return 0;
}*/

/*
#include <stdbool.h>
int main()
{
    bool dogru = true;
    bool yanlis = false;

    printf("dogru = %d\n", dogru);   // true 1 olarak yazdırılır
    printf("yanlis = %d\n", yanlis); // false 0 olarak yazdırılır

    return 0;
}
*/


/*int main()
{
    printf("Lutfen bir harf giriniz: ");
    char harf;
    scanf("%c", &harf);
    printf("Girdiginiz harf: %c\n", harf);
    return 0;
}*/





/*int main()
{
    int sayi;

    printf("Lutfen 0 ile 127 arasinda bir sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi >= 0 && sayi <= 127){
        char karakter = (char)sayi; // Tür dönüşümü yaparak karakteri alıyoruz
        printf("Girdiginiz sayinin ASCII karakteri: %c\n", karakter);
    } else {
        printf("Lutfen gecerli bir sayi giriniz (0-127 arasinda).\n");
    }
}*/


/*int main()
{
    char harf;
    printf("Lutfen bir harf giriniz: ");
    scanf("%c", &harf);
    printf("Girdiginiz harfin ASCII degeri: %d\n", harf);
    return 0;
}*/




/*%d → int (tam sayı)

%f → float (ondalıklı sayı)

%lf → double (daha hassas ondalıklı sayı)

%c → char (tek karakter)

%s → string (karakter dizisi / kelime)*/



/*int main()
{
    char karakter;
    int sayi;
    printf("Lütfen bir harf ve sayi giriniz: ");
    scanf(" %c %d", &karakter, &sayi);
    printf("Girdiginiz harf: %c\n", karakter);
    printf("Girdiginiz sayi: %d\n", sayi);
    return 0;
}*/




/*int main()
{
    int sayi1, sayi2;
    printf("Lutfen cevresini hesaplamak istediginiz dikdortgenin iki kenar uzunlugunu giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);
    int cevre = 2 * (sayi1 + sayi2);
    printf("Dikdortgenin cevresi: %d\n", cevre);
    return 0;
}*/



/*int main()
{
    int sayi1, sayi2;
    printf("Lutfen alanini hesaplamak istediginiz dikdortgenin iki kenar uzunlugunu giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);
    int alan = sayi1 * sayi2;
    printf("Dikdortgenin alani: %d\n", alan);
    return 0;
}*/



/*int main()
{
    int sayi1, sayi2;
    printf("Lutfen cevresini ve alanini hesaplamak istediginiz dikdortgenin iki kenar uzunlugunu giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);
    int cevre = 2* (sayi1 + sayi2);
    int alan = sayi1 * sayi2;
    printf("Dikdortgenin cevresi: %d\n", cevre);
    printf("Dikdortgenin alani: %d\n", alan);
    return 0;
}*/

/*int main()
{
    int sicaklik;
    printf("Lutfen derecesini bulmak istediginiz degeri giriniz: ");
    scanf("%d ",&sicaklik);
    int sonuc = (sicaklik-32)*9/5;
    printf("Derecesi : %d" , sonuc);
    return 0;

}*/

/*#include <math.h>
int main(void)
{
double y = 1 / 0.0;
printf(" 1 / 0.0 = %f\n" , y );

y = -1/0.0;
printf(" -1/ 0.0 = %f\n" , y);

y = log( 0 );
printf("log(0) = %f\n" , y);

y =sqrt (-1);
printf("Square root of -1 = %f\n" ,y);
return 0;
}*/




/*#include<inttypes.h>
#include<float.h>

int main(void)
{
    uint16_t biggest = UINT16_MAX; // 16-bit unsigned integer maximum value
    uint16_t overflow = biggest + 1; // This will cause an overflow
    printf("Biggest = %d and overflow = %d\n", biggest, overflow);

    int16_t smallest = INT16_MIN; // 16-bit signed integer minimum value
    int16_t underflow = smallest - 1; // This will cause an underflow
    printf("Biggest = %d and underflow = %d\n", smallest, underflow);

    float fBiggestFloat = FLT_MAX; // Maximum value for float
    float fOverflow = fBiggestFloat * 2.0f; // This will cause an overflow
    printf("FloatBiggest = %g FloatOverflow (FloatBiggest *2) = %g\n", fBiggestFloat , fOverflow );
    
    float fSmallestFloat = FLT_MIN; // Minimum positive value for float
    float fUnderflow = fBiggestFloat / fSmallestFloat; // This will cause an underflow
    printf("FloatSmallest = %g FloatUnderflow (FloatBiggest / FloatSmallest) %g\n", fSmallestFloat, fUnderflow);

    return 0;
}*/



/*int main()
{
    char c = 100; // 1 byte
    int i = 1000; // 4 bytes

    int toplam = c + i; // burada c otamatik olarak int'e dönüştürülür

    printf("Toplam: %d\n", toplam); // 1100 olarak yazdırılır
    return 0;
}*/



/*int main(void)
{
    unsigned char b1 = 254;
    unsigned char b2 = 253;
    long int r1;
    r1 = b1 + b2;
    printf("%d + %d = %ld\n", b1, b2, r1); // 507 olarak yazdırılır
    return 0;
}*/




/*int main(void)
{
    float floatValue = 58.73;
    short int intValue = 13;
    printf("longint %ld\n", floatValue);
    printf("longint %ld\n", intValue);
    printf("double %.2f\n", floatValue);
    printf("double %.2f\n", intValue);
    return 0;
}*/


/*int main(void)
{
    int numerator = 32;
    int denominator = 5;
    double result =0.0;

    result = numerator / denominator;
    printf("Truncation: %d / %d = %.2g\n", numerator, denominator, result);

    result = (double)numerator / denominator; // Tür dönüşümü yaparak doğru sonucu alıyoruz
    printf("No truncation: %.2f / %d = %.2f\n", (double)numerator, denominator, result);

    result = numerator / (double)denominator; // Tür dönüşümü yaparak doğru sonucu alıyoruz
    printf("%d / %.2f = %.2f\n", numerator, (double)denominator, result);

    return 0;

}*/





/*int main(void)
{
    char lowerChar = 'b';
    char upperChar = 'M';

    char anUpper = lowerChar - 32; // Küçük harfi büyük harfe dönüştür
    char aLower = upperChar + 32; // Büyük harfi küçük harfe dönüştür

    printf("Lower case 'c'can be changed to upper case 'C' : %c\n", anUpper);
    printf("Upper case 'C' can be changed to lower case 'c' : %c\n", aLower);
    return 0;
}*/





/*#include <math.h>
int main(void)
{
    double y = 1 / 0.0;
    printf(" 1 / 0.0 = %f\n" , y );

    y = -1/0.0;
    printf(" -1/ 0.0 = %f\n" , y);

    y = log( 0 );
    printf("log(0) = %f\n" , y);

    y =sqrt (-1);
    printf("Square root of -1 = %f\n" ,y);
    return 0;
}*/




/*
int main(void)
{
    char digit5 = '5';
    char digit8 = '8';

    int sumDigits = digit5 + digit8;
    printf("digit5 + digit8 = '5' + '8' =%d (oh, dear!)\n", sumDigits);

    char value5 = digit5 - '0'; // get the numerical value of '5'
    char value8 = digit8 - '0'; // get the numerical value of '8'

    sumDigits = value5 + value8;
    printf("value5 + value8 = 5 + 8 = %d (that's better)\n", sumDigits);
    return 0;
}*/


/*||: İkili mantıksal VEYA operatörü
● &&: İkili mantıksal VE operatörü
● ^: İkili mantıksal XOR operatörü
● !: Tekli mantıksal DEĞİL operatörü
*/

/*● +=: bir değişkene eklemeli atama
● -=: bir değişkene çıkarmalı atama 
● *=: bir değişkene çarpmalı atama
● /=: bir değişkene bölmeli (tam sayı veya gerçek) 
atama 
● %=: bir değişkene tam sayı kalanlı atama
● <<=: bitsel sola kaydırmalı atama
● >>=: bitsel sağa kaydırmalı atama
● &=: bitsel VE ile atama
● ^=: bitsel XOR (özel VEYA) ile atama
● |=: bitsel VEYA ile atama
*/




/*int main(void)
{
    int aValue = 5;

    printf("Initial: %d\n", aValue);
    printf("Prefix: %d\n", ++aValue); // Prefiz incrementation.
    printf("Final: %\n", aValue);

    aValue = 5; // Reset aValue to 5.
    printf("Initial: %d\n", aValue);
    printf("Prefix: %d\n", aValue++); // Postfix incrementation.
    printf("Final: %d\n", aValue);

    aValue = 5;
    ++aValue;
    printf("++aValue (alone) == %d\n", aValue);
    aValue = 5;
    aValue++;
    printf("aValue++ (alone) == %d\n", aValue);
    return 0;
}*/

/*int main()
{
   int a,b,c;
   printf("Uc sayi giriniz: ");
   scanf("%d %d %d ", &a, &b,&c);

   printf("En buyuk sayi: %d\n",(a >b? (a>c ? a:c) : (b > c ? b :c)));

    return 0;
    

}*/






// do Döngüleri
/*int main()
{
    int sayi,N= 10,max;

    do{
        scanf("%d", &sayi);
        max = sayi;
        if(sayi > max){
            max = sayi;
            N--;
        }

    }
    while(N>0);
    printf("En buyuk sayi: %d\n", max);
    return 0;

}*/







/*//1 ile 100 arasi tum cift sayilarin toplami
int main()
{
    int toplam=0,i;
    
    for(int i= 0; i<=100; i++){
        if(i % 2 ==0){
            printf("%d\n", i);
            toplam += i;

            
        }
    }
    printf("1 ile 100 arasi tum cift sayilarin toplami: %d\n", toplam);
    return 0;
    


}
*/



/*//1 ile 10 arsındaki sayilarin carpim tablosunu yazdirma
int main()
{
    int i,j;
    for(i=1; i<=10; i++){
        for(j=1; j<=10; j++){
            printf("%4d", i*j);
        }
        printf("\n");
    }
    return 0;
}*/





/*int main() {
    int toplam = 0, n = 50;
    

    // 1'den n'ye kadar (50) olan sayıları toplamak için bir for döngüsü kullanıyoruz
    for (int i = 1; i <= n; ++i) {
        toplam += i; // Her sayıyı 'toplam' değişkenine ekliyoruz
    }

    // Sonucu ekrana yazdırıyoruz
    printf("1'den %d'ye kadar olan sayilarin toplami: %d\n", n, toplam);

    return 0;
}*/






//Koşullu İfadeler 



/*int main()
{
    int cuzdan=10000;
    if (cuzdan == 15000){
        printf("Yeterli bakiye.");
    }
    else if (cuzdan > 15000){
        printf("Bakiye fazla.");
    }
    else{
        printf("Yetersiz bakiye.");
    }
    return 0;
}*/


/*int main()
{
    int sayi1=10,sayi2=10;
    scanf("%d %d",&sayi1 ,&sayi2);

    if (sayi1 == sayi2)
    printf("Sayilar esit\n");
    else
    printf("Sayilar esit degil\n");

    return 0;
    
}*/


/*int main()
{
    int sayi1=3,sayi2=3;
    
    if (sayi1>sayi2)
    printf("1.Sayi 2.Sayidan buyuk\n");
    
    else if (sayi1<sayi2) 
    printf("1.Sayi 2.Sayidan kucuk\n");
    
    else 
    printf("Sayilar esit\n");
    
    return 0;
    }*/


/*int main()
{
  int m =4;
  int n=4;
  for (int i = 0; i < m; i++) {
    printf("i = %d", i);

    for (int j = 0; j<n; j++){
        printf("%d", i * n + j);

    }
    printf("\n");
  }
  return 0;
}
 */



/*int main()
{
    int end = 5;
    printf("Pattern Printing using Nested While loop");

    int i = 1;

    while ( i <= end) {
        printf("\n");
        int j = 1;
        while (j <= 1) {
             
            printf("%d ", j);
            j = j + 1;
        }
        i = i + 1;
    }
    return 0;
}*/


/*int main()
{
    //For döngüsü

     for (int a = 0; a<10; a++){
         printf("Merhaba dunya \n");
     }
               
    
    return 0;
}*/




/*int main()
{

    //While Döngüsü
    int a =0;
    while (a < 10){
        printf("Merhaba dunya \n");
        a++;
    }
    return 0;
}
*/



/*int main()
{
    //Do While Döngüsü


    int a=10;
    do{
        printf("Merhaba dunya");
        a++;


    }while(a<10);
    return 0;
}*/



/*int main()
{
    int N=10,toplam=0,sayi;

    while(N>0)
    {
        scanf("%d", &sayi);
        toplam += sayi;
        N --;
    }
    printf("%d\n",toplam);

    return 0;
}*/

/*int main()
{
    //Kullanıcıdan alınan 10 adet sayının en 
    //büyüğünü çıktı olarak veren C programını 
    //while() döngüsü ile yazalım.

    int sayi, toplam = 0, N = 10, maksimum;
    
    while (N>0)
    {
        scanf("%d", &sayi);
        if (N == 10)
           maksimum = sayi;
        if (sayi>maksimum)
           maksimum = sayi;
        N--;
    }
    printf("%d\n", maksimum);
    return 0;
    
}*/


/*int main()
{
    int sayi;
    printf("Bir sayi giriniz\n");
    scanf("%d", &sayi);
    for(int i = 0; i<sayi;i++)
      printf("*");
    printf("\n");
    return 0;
}*/



/*int main()
{
    int sayi,N=10,toplam=0;
    for (int i =0; i<N; i++ ){
        scanf("%d", &sayi);
        toplam +=sayi;
    }
    printf("%d\n", toplam);
    return 0;
}*/


/*

// yurtta hatanı araştır


int main()
{
    int sayi1,sayi2,fark;
    printf("Lutfen iki sayi giriniz:");
    scanf("%d %d",&sayi1,&sayi2);

    for (int i = 0;i<=fark; i++)
    {
        if (fark % 3)
        printf("adetini yazdır");
        else if (fark % 5)
        printf("adetini yazdır");
        else
        printf("Hatali giris");
    }
    printf("%d\n");
    return 0;
}*/













/*int main()
{
    int a,b,c;
    printf("Uc tane sayi giriniz: ");
    scanf("%d %d %d",&a ,&b ,&c);

    if (a+b>c && a+c>b && b+c>a)
        printf("Ucgen cizilebilir");
    else
        printf("Ucgen cizililemez");
    
        
        
    return 0;
    

}*/





/*int main()
{
    int a,b,c;
    printf("Lutfen 3 tane sayi giriniz:");
    scanf("%d %d %d",&a,&b,&c);

    if (a==b && a==c && b==c)
        printf("Eskenar ucgendir");

    else if (a==b || a==c|| b==c)
    printf("Ikiz kenar ucgendir");

    else if (a+b>c && a+c>b && b+c>a)
        printf("Ucgen cizilebilir");

    else
        printf("Ucgen cizilemez");


    return 0;
        


        
}*/

/*int main()
{
   int countdown = 3;

   while (countdown > 0);{
       printf("%d\n", countdown);
       countdown--;
   
    }
    printf("Happy New Year!\n");
    return 0;

}*/




/*int main()
{
    int dice = 1;
    while (dice <= 6){
        if (dice <6){
            printf("No Yatzy\n");

        }else{
            printf("Yatzy!\n");
        }        dice++;
    }
    return 0;
}*/

/*int main()
{
    int i;
    for (i = 0;i < 10; i++) {
        if (i == 4) {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}*/

/*int main()
{
    int i;
    for (i = 0; i < 6; i++) {
        if (i == 2){
            continue;
        }
        if (i == 4){
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}*/


/*int main()
{
    int m = 4;
    int n = 5;

    for (int i = 0;i<m;i++){
        printf("i = %d", i);

        for (int j = 0; j<n; j++){
            printf("%d", i * n + j);
        }
        printf("\n");
    }
    return 0;

}*/






/*// çarpım tablosu
int main() {
    int i, j;

    // 1'den 10'a kadar olan sayılar için (dış döngü)
    for (i = 1; i <= 10; i++) {
        
        // Her 'i' sayısı için 1'den 10'a kadar çarp (iç döngü)
        for (j = 1; j <= 10; j++) {
            // %4d: Sayıyı 4 karakterlik alana sağa yaslayarak yaz
            printf("%4d", i * j); 
        }
        
        // 'i' sayısının tüm çarpımları bittiğinde bir alt satıra geç
        printf("\n"); 
    }
    
    return 0;
}*/



/*#include <stdio.h>

int main() {
    int sayi = 5; // Kullanıcıdan 5 aldığımızı varsayalım
    
    // Dış döngü (Satırları kontrol eder)
    for (int i = 0; i < sayi; i++) 
    {
        // İç döngü (O satırdaki sütunları/karakterleri basar)
        // Kilit nokta: j <= i koşulu
        for (int j = 0; j <= i; j++) 
        {
            printf("*");
        }
        
        // İç döngü tamamen bitince (o satırdaki tüm *'lar basılınca)
        // bir alt satıra geç
        printf("\n");
    }
    return 0;



}*/

/*int main()
{
    int dizi[3][4] = {{1,2,3,4},{5,8,10,12},{10,20,30,40}};
    int i,j;


    for(i =0;i<3; i++){
        for(j= 0; j<4; j++)
            printf("%4d", dizi[i][j]);
        printf("\n");}
    return 0;


}*/



/*#include <stdlib.h>
#include <time.h>
int main()
{
    int satir, sutun,sayi;
    srand(time(NULL));
    satir = rand() % 4 + 2;
    sutun = rand() % 4 + 2;
    int dizi[satir][sutun];
    for (int i = 0; i < satir; i++){
        for (int j = 0; j < sutun; j++){
            dizi[i][j] = rand() % 100+1;
            printf("%4d", dizi[i][j]);
        }
        printf("\n");
    }
    return 0;

}*/



/*//3 satır 4 sütunluk bir 2D dizi bir diziye aşağıdaki çıktıyı veren elemanları atayan c kdoudunu yazınız
//10 20 30 40
int main()
{
    int dizi [3][4];
    int i,j;
    for (i=0;i<3;i++){
        for (j=0;j<4;j++){
            dizi[i][j] = (j+1)*10;
            printf("%4d", dizi[i][j]);
        }
        printf("\n");
    }
    return 0;

}*/



/*//2 ile 5 arasında iki rastgele sayı üretelim. bu sayılar 2d bir dizinin satır ve sütun sayısını belirlesin. ardından bu diziyi 1 ile 100 arasında sayılar üreterrk bu 2d dizinin elemanları olarak atayalım ve diziyi ekrana yazdıralım.


#include <stdlib.h>
#include <time.h>
int main()
{
    int satir,sutun,sayi;
    srand(time(NULL));
    satir = rand() % 4 + 2;
    sutun = rand() % 4 + 2;
    int dizi[satir][sutun];
    for (int i = 0; i < satir; i++){
        for (int j = 0; j < sutun; j++){
            dizi[i][j] = rand() % 100+1;
            printf("%4d", dizi[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

/*//yurkardaki koddaki elde etiğimiz dizideki tek ve çift sayıların adedini ayrı ayrı ekrana yazdıralım.
#include <stdlib.h>
#include <time.h>
int main()
{
    int satir,sutun,sayi,tek=0,cift=0;
    srand(time(NULL));
    satir = rand() % 4 + 2;
    sutun = rand() % 4 + 2;
    int dizi[satir][sutun];
    for (int i = 0; i < satir; i++){
        for (int j = 0; j < sutun; j++){
            dizi[i][j] = rand() % 100+1;
            printf("%4d", dizi[i][j]);
            if (dizi[i][j] % 2 ==0)
                cift++;
            else
                tek++;
        }
        printf("\n");
    }
    printf("Cift sayilarin adedi: %d\n", cift);
    printf("Tek sayilarin adedi: %d\n", tek);
    return 0;
}*/





/*//bir sınıfta 5 öğrenci vardır öğrenciler 3 sınava girmiştir. her öğrencinin her sınavdan aldığı notları 2d bir dizide saklayalım. ardından her öğrencinin ortalamasını hesaplayıp ekrana yazdıralım.
#include <stdlib.h>
#include <time.h>

int main()
{
    int ogrenci_sayisi = 5;
    int sinav_sayisi = 3;
    int notlar[5][3];
    float ortalamalar[5] = {0};

    srand(time(NULL));

    for (int i = 0; i < ogrenci_sayisi; i++) {
        for (int j = 0; j < sinav_sayisi; j++) {
            notlar[i][j] = rand() % 101;
        }
    }

    for (int i = 0; i < ogrenci_sayisi; i++) {
        int toplam = 0;
        printf("Ogrenci %d notlari: ", i + 1);
        for (int j = 0; j < sinav_sayisi; j++) {
            printf("%d ", notlar[i][j]);
            toplam += notlar[i][j];
        }
        ortalamalar[i] = (float)toplam / sinav_sayisi;
        printf("| Ortalama: %.2f\n", ortalamalar[i]);
    }

    return 0;

}*/



/*
// hello h e l l o string dizileri while ile yan yana yazdırma

int main()
{
    char str[] = "hello";
    int i =0;
    while (str[i] != '\0'){
        printf("%c ", str[i]);
        i++;
    }
    printf("\n");
    return 0;
}*/



/*
// alınan bir stringi tersten yazdırma
int main()
{
    char str[] = "hello";
    int i =0;
    while (str[i] != '\0'){
        i++;
    }
    i--;
    while (i >=0){
        printf("%c", str[i]);
        i--;
    }
    printf("\n");
    return 0;
}
*/


/*
// alınan bir stringin uzunluğunu hesaplama
int main()
{
    char str[] = "hello";
    int i =0;
    while (str[i] != '\0'){
        i++;
    }
    printf("String uzunlugu: %d\n", i);
    return 0;
}
*/


/*// iki stringin eşitliğini kontrol etme while ile
int main()
{
    char str1[] = "hello";
    char str2[] = "hello";
    int i =0;
    int equal = 1;
    while (str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] != str2[i]){
            equal = 0;
            break;
        }
        i++;
    }
    if (str1[i] != '\0' || str2[i] != '\0'){
        equal = 0;
    }
    if (equal){
        printf("Stringler esit\n");
    }else{
        printf("Stringler esit degil\n");
    }
    return 0;
}*/


// iki stringi birleştirme
int main()
{
    char str1[100] = "hello ";
    char str2[] = "world";
    int i =0;
    while (str1[i] != '\0'){
        i++;
    }
    int j =0;
    while (str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("Birlesik string: %s\n", str1);
    return 0;
}

















