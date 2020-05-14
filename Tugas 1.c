#include <stdio.h>
using namespace std;

    char barang[18][20]={"Terigu Mas","Terigu Cakra","Beras 1kg","Maizena","Gula Pasir","Gula merah","Bimoli 1L","Bimoli 2L","Bimoli refill","Filma 2L","Filma 1L","Indomie goreng","indomie soto","Indomie Aceh","BC Sardines","Kecap ABC","Sedaap goreng","Sedaap soto"}; 
    int harga[18]={5,6,20,2,13,12,8,15,7,14,7,36,32,38,8,5,30,28};
    int jumlah;
void listbarang(){
    printf("============================================================================\n");
    printf("  kode\t\t  barang\t\tharga\n");
    printf("============================================================================\n");
   for(int i=0;i<18;i++){
        printf(" %d\t\t %s",i,barang[i]);printf("\t\tRp. %d.000\t\t\n",harga[i]);
   }
   printf("============================================================================\n");
}

int belian(){
    int kode,jml,total;
    char lagi;
    ulang:
        printf(" Masukkan kode barang : ");
        scanf("%i",&kode);
        printf(" Nama sembako \t: %s\n",barang[kode]);
        printf(" Harga sembako \t: Rp. %d.000\n",harga[kode]);
        printf(" Banyak sembako yg dibeli = ");scanf("%d",&jml);
        total=jml*harga[kode];
        jumlah=jumlah+total;
        printf(" total harga \t: Rp. %d.000\n",total);
        printf(" belanja lagi? (y/n) : ");
        scanf("%s",&lagi);
    if(lagi=='Y' || lagi=='y'){
    	
   printf("----------------------------------------------------------------------------\n");
    	goto ulang;
	}else{}
}

int main(){
    printf("\n\t\t     Selamat Datang di Toko Sembako K13\n");
    printf("\t\t         !!!!!!PASTI MURAH!!!!!!      \n");
    printf("\t\t     ---------------------------------\n\n");
    listbarang();
    belian();
    printf("============================================================================\n");
    printf("\n\tAnda membeli barang dengan jumlah di atas\n");
    printf("\n\tTotal harga yang harus anda bayar adalah : ");
    printf("Rp. %d.000\n",jumlah);
    printf("\n\tTerimakasih telah berbelanja di toko kami.\n");
    printf("\n============================================================================\n");
}
