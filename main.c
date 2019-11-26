#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

anasayfa();
    return 0;
}
     void anasayfa() {
      printf("----------ANA MENU----------\n");
      printf("1. Yeni Yarisma Duzenleme\n");
      printf("2. Son Duzenlenen Yarismanin Istatistiklerini Goruntuleme\n");
      printf("3. Cikis\n");
      printf("Seciminizi Giriniz :");
      secimmm();
}

  void secimmm() {

int secim;
  scanf("%d",&secim);

  switch (secim) {
  case 1 : {
     yeniyarisma();
}
  break;

  case 2 :{ printf("Istatistik bulunamadi\n");
  clear
  anasayfa();}
  break;
  case 3 : cikis();
  break;
  default :{
  printf("Lutfen gecerli sayi girin !!!!\a\n\n");

  anasayfa();
  }
  }
   }

    void yeniyarisma(){
 int yarismacisayisi=0,haftasayisi=0;
    do {

    printf("Yarismaci sayisini girin :");
    scanf("%d",&yarismacisayisi);

    if (yarismacisayisi<5 || yarismacisayisi>20)
    printf("Lutfen 5 ile 20 arasi deger girin!!!\a\n");
    } while (yarismacisayisi<5 || yarismacisayisi>20);
    do {
        printf("Hafta Sayisini girin:");
    scanf("%d",&haftasayisi);


     if (haftasayisi<3)
     printf("Lutfen hafta sayisini en az 3 girin!!!\a\n");


    } while (haftasayisi<3);

           srand(time(NULL));
int i;
int yrsmckocaldigi[50][50]={};
int yrsmcsyrcaldgi[50][50]={};
int j,k,m;
int toplampuan[50][50];
int geneltoplam[50];
int kocgenel[50];
int seyircigenel[50];
int geneltoplam1[50][50];
int herhaftatoplam[50][50];
int s[3];
   for (i=0;i<yarismacisayisi;i++) {
   for (k=1;k<=haftasayisi;k++) {s[0]=-1,s[1]=-2,s[2]=-3;
   for (m=0;m<3;m++)  {

    j=rand()%yarismacisayisi;
    do {
      j=rand()%yarismacisayisi;
       while (i==j) {
     j=rand()%yarismacisayisi;
 }
  }  while (s[m-1]==j || s[m-2]==j) ;



  printf("%d. yarismaci kocunun %d.haftada %d. yarismaciya verdigi puan :%d dir.\n",i+1,k,j+1,m+1);
yrsmckocaldigi[j][k-1]+=m+1;//j+1. yarýþmacýnýn k. haftadaki toplam puaný
s[m]=j;
geneltoplam1[j][i]+=m+1;

      }

    }
}



   for (k=1;k<=haftasayisi;k++) { s[0]=-1,s[1]=-2;s[2]=-3;
   for (m=0;m<3;m++)  {

    j=rand()%yarismacisayisi;
    while (s[m-1]==j || s[m-2]==j) {
        j=rand()%yarismacisayisi;
    }

  printf("Seyircilerin %d.haftada %d. yarismaciya verdigi puan :%d dir.\n",k,j+1,m+1);
 yrsmcsyrcaldgi[j][k-1]=(m+1)*(yarismacisayisi-1);
 s[m]=j;

        }

    }



for (i=0;i<yarismacisayisi;i++){
    for (k=0;k<haftasayisi;k++){
     toplampuan[i][k]=yrsmcsyrcaldgi[i][k]+yrsmckocaldigi[i][k];
    }
}
 for (i=0;i<yarismacisayisi;i++) {
            for (j=0;j<haftasayisi;j++){
                    for (k=0;k<=j;k++){
        herhaftatoplam[i][j]+=toplampuan[i][k];
      }
        }
    }

for (i=0;i<yarismacisayisi;i++){
    for (k=0;k<haftasayisi;k++){
        geneltoplam[i]+=toplampuan[i][k];
    }
}

for (k=0;k<haftasayisi;k++){
         printf("\n\nyarismaci no\t\t hafta no \t\t seyirci puani\t\t koc puani\t\t toplam puan \n");
        printf("------------------------------------------------------------------------------------------------------------\n");
   for (i=0;i<yarismacisayisi;i++) {
      printf("  %d \t\t\t %d \t\t\t %d \t\t\t %d \t\t\t %d\n",i+1,k+1,yrsmcsyrcaldgi[i][k],yrsmckocaldigi[i][k],toplampuan[i][k]);
    }
    printf("\n---------------------------------------------------------------------------------------------------------------------");
     printf("\n");
    printf("%d. Hafta Sonunda Genel Durum \n",k+1);
    printf("---------------------------------------------\n");
    printf("Yarismaci no \t\t Genel Puan\n");
    printf("-------------           -------------\n");

    for (j=0;j<yarismacisayisi;j++){

    printf("%d \t\t\t %d\n",j+1,herhaftatoplam[j][k]);
}
printf("----------------------------------------------------------------------------------------------------------------------");

}
printf("\n\n");
 printf("Yarismaci No \t\t Genel Puan \t\t\n\n");
 printf("-------\t\t\t---------\n");
for (i=0;i<yarismacisayisi;i++) {
   printf("%d \t\t\t %d \n",i+1,geneltoplam[i]);
}
  for (i=0;i<yarismacisayisi;i++){
    for (j=0;j<haftasayisi;j++) {
        kocgenel[i]+=yrsmckocaldigi[i][j];  //i+1. yarismacinin toplam koc puani
    }
  }
  for (i=0;i<yarismacisayisi;i++){
    for (j=0;j<haftasayisi;j++) {
        seyircigenel[i]+=yrsmcsyrcaldgi[i][j];  //i+1. yarismacinin toplam koc puani
    }
  }
anasayfa1(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
}

void anasayfa1(int seyircigenel[50],int kocgenel[50],int yrsmckocaldigi[50][50],int yrsmcsyrcaldgi[50][50],int toplampuan[50][50],int geneltoplam1[50][50],int yarismacisayisi,int haftasayisi){
      printf("----------ANA MENU----------\n");
      printf("1. Yeni Yarisma Duzenleme\n");
      printf("2. Son Duzenlenen Yarismanin Istatistiklerini Goruntuleme\n");
      printf("3. Cikis\n");
      printf("Seciminizi Giriniz :");
      secimm(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
}

void secimm(int seyircigenel[50],int kocgenel[50],int yrsmckocaldigi[50][50],int yrsmcsyrcaldgi[50][50],int toplampuan[50][50],int geneltoplam1[50][50],int yarismacisayisi,int haftasayisi) {
    int secim;
  scanf("%d",&secim);

  switch (secim) {
  case 1 : {
     yeniyarisma();
}
  break;

  case 2 : anamenu(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
  break;
  case 3 : cikis1(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
  break;
  default :{
  printf("Lutfen gecerli sayi girin !!!!\a\n\n");

  anasayfa1(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);

}

  }
}
  void anamenu(int seyircigenel[50],int kocgenel[50],int yrsmckocaldigi[50][50],int yrsmcsyrcaldgi[50][50],int toplampuan[50][50],int geneltoplam1[50][50],int yarismacisayisi,int haftasayisi)
  {

      printf("----------Istatistik Alt Menusu----------\n");
      printf("1. Sadece koclarin puanlamasi dikkate alindiginda genel durumun listelenmesi \n");
      printf("2. Sadece seyircilerin puanlamasi dikkate alindiginda genel durumun listelenmesi \n");
      printf("3. Yarismacilarin her hafta aldiklari toplam puanlarin listelenmesi\n");
      printf("4. Yarismacilarin her koctan aldiklari toplam puanlarin listelenmesi\n");
      printf("5. Ana Menu\n");
      printf("Seciminizi Giriniz :");
      secimmm2(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
  }
  void secimmm2(int seyircigenel[50],int kocgenel[50],int yrsmckocaldigi[50][50],int yrsmcsyrcaldgi[50][50],int toplampuan[50][50],int geneltoplam1[50][50],int yarismacisayisi,int haftasayisi)
  {
      int secim2;
  scanf("%d",&secim2);
  switch (secim2) {
  case 1 : kocPuanGenelDurum(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
  break;
  case 2 : seyPuanGenelDurum(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
  break;
  case 3 : haftalikPuan(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
  break;
  case 4 : koctanAldTopPuan(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
  break;
  case 5 : anasayfa1(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
  default :{
  printf("Lutfen gecerli sayi girin !!!!\a\n\n");

  anamenu(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
  }}}


  void kocPuanGenelDurum(int seyircigenel[50],int kocgenel[50],int yrsmckocaldigi[50][50],int yrsmcsyrcaldgi[50][50],int toplampuan[50][50],int geneltoplam1[50][50],int yarismacisayisi,int haftasayisi){
int i;
  printf("Yarismaci no \t\t Toplam koc puani\n");
  printf("---------------         ----------------------\n");
  for (i=0;i<yarismacisayisi;i++){
    printf("%d\t\t\t   %d\n",i+1,kocgenel[i]);
  }
   anamenu(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
  }



  void seyPuanGenelDurum(int seyircigenel[50],int kocgenel[50],int yrsmckocaldigi[50][50],int yrsmcsyrcaldgi[50][50],int toplampuan[50][50],int geneltoplam1[50][50],int yarismacisayisi,int haftasayisi){
  int i;
  printf("Yarismaci no \t\t Toplam seyirci puani\n");
  printf("---------------         -------------------------\n");
  for (i=0;i<yarismacisayisi;i++){
    printf("%d\t\t\t   %d\n",i+1,seyircigenel[i]);
  }
  anamenu(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
  }



  void haftalikPuan(int seyircigenel[50],int kocgenel[50],int yrsmckocaldigi[50][50],int yrsmcsyrcaldgi[50][50],int toplampuan[50][50],int geneltoplam1[50][50],int yarismacisayisi,int haftasayisi){
  int i,j;
  printf("Yarismaci no ");
  for (i=0;i<haftasayisi;i++) { printf("\t%d.hafta        ",i+1);}
   printf("\n");
   printf("-------------------------------------------------------------------------------------------------------\n");
  for (i=0;i<yarismacisayisi;i++) {
        printf("%d",i+1);
    for (j=0;j<haftasayisi;j++) {
        printf("\t\t %d  ",toplampuan[i][j]);
    }
    printf("\n");
  }
  anamenu(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
  }


  void koctanAldTopPuan(int seyircigenel[50],int kocgenel[50],int yrsmckocaldigi[50][50],int yrsmcsyrcaldgi[50][50],int toplampuan[50][50],int geneltoplam1[50][50],int yarismacisayisi,int haftasayisi){
    int i,j;
  printf("\n\n");
  printf("Yarismaci no ");
  for (i=0;i<yarismacisayisi;i++) { printf("\t%d .koc    ",i+1);}
   printf("\n");
   printf("--------------------------------------------------------------------------------------------------------------------\n");
  for (i=0;i<yarismacisayisi;i++) {
        printf("%d",i+1);
    for (j=0;j<yarismacisayisi;j++) {
        printf("\t\t %d  ",geneltoplam1[i][j]);
    }
    printf("\n");
  }
   printf("\n\n");
   anamenu(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
  }

  void cikis1(int seyircigenel[50],int kocgenel[50],int yrsmckocaldigi[50][50],int yrsmcsyrcaldgi[50][50],int toplampuan[50][50],int geneltoplam1[50][50],int yarismacisayisi,int haftasayisi){
   char harf;
      printf("Cikis Yapmak Istiyor musunuz?:\n");
      printf("Evet icin E veya e girin\n");
      printf("Hayir icin H veya h girin\n");
      scanf("%s",&harf);

      if (harf=='E' || harf=='e') {
        printf("Cikis Yapildi...");
        exit(0);
}
      else if (harf=='H' || harf=='h')
        anasayfa1(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);

      else {
        printf("Gecerli bir harf giriniz!!!!\a\n");
        cikis1(seyircigenel,kocgenel,yrsmckocaldigi,yrsmcsyrcaldgi,toplampuan,geneltoplam1,yarismacisayisi,haftasayisi);
      }
  }
  void cikis() {

      char harf;
      printf("Cikis Yapmak Istiyor musunuz?:\n");
      printf("Evet icin E veya e girin\n");
      printf("Hayir icin H veya h girin\n");
      scanf("%s",&harf);

      if (harf=='E' || harf=='e') {
        printf("Cikis Yapildi...");
        exit(0);
}
      else if (harf=='H' || harf=='h')
        anasayfa();

      else {
        printf("Gecerli bir harf giriniz!!!!\a\n");
        cikis();
      }

}







