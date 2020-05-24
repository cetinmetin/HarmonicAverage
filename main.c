#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayilar[10],i = 0;
    double sonuc = 0,payda = 0;
    for(i=0;i<10;i++){
        printf("%d. Sayiyi Girin: ",i+1);
        scanf("%d",&sayilar[i]);
        payda +=(double)1/sayilar[i];
    }
    sonuc = (double)10/payda;
    printf("Harmonik Ortalama Sonucu: %lf",sonuc);

    return 0;
}
