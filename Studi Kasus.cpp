#include <iostream>
#include <string>
using namespace std;

    string barang[18]={"Terigu Kunci Mas 1kg","Terigu Cakra kembar 1kg","Beras 1kg\t","Maizena\t\t","Gula Pasir 1kg\t","Gula merah 1kg\t","Bimoli Botol 1L\t","Bimoli 2L\t","Bimoli refill 1L","Bimoli refill 2L","Filma refill 1L\t","Indomie goreng 1 box","indomie soto 1 box","Indomie Aceh 1 Box","ABC Sardines Pedas","ABC sardines biasa","Mie sedaap goreng 1 box","Mie sedaap soto 1 box"};
    int harga[18]={5,6,20,2,13,12,8,15,7,14,7,36,32,38,8,5,30,28};
    int jumlah;
void listbarang(string barang[],int harga[]){
    cout<<"============================================================================\n";
    cout<<"  kode\t\t  barangt\tharga\n";
    cout<<"============================================================================\n";
   for(int i=0;i<18;i++){
        cout<<" "<<i<<"\t\t"<<barang[i]<<"\t\tRp. "<<harga[i]<<".000\t\t"<<" "<<endl;
   }
   cout<<"============================================================================\n";
   cout<<endl;
}

int belian(){
    ulang:
        int kode,jml,total;
    	char lagi;
        cout<<"Masukkan kode barang : ";
        cin>>kode;
        cout<<"Nama sembako \t: "<<barang[kode]<<endl;
        cout<<"Harga sembako \t: Rp. "<<harga[kode]<<".000"<<endl;
        cout<<"Banyak sembako yg dibeli = ";cin>>jml;
        total=jml*harga[kode];
        jumlah=jumlah+total;
        cout<<"total harga \t: Rp. "<<total<<".000"<< endl;
        cout<<"belanja lagi? (y/n) : ";
        cin>>lagi;
        cout<<endl;
    if(lagi=='Y' || lagi=='y'){
    	
   cout<<"----------------------------------------------------------------------------\n";
    	goto ulang;
	}else{cout<<endl;}
}

int main(){
    int pilih;
    cout<<"\t\t     Selamat Datang di Toko Sembako K13"<<endl;
    cout<<"\t\t         !!!!!!PASTI MURAH!!!!!!      "<<endl;
    cout<<"\t\t     ---------------------------------\n"<<endl;
    listbarang(barang,harga);
    belian();
    cout<<"============================================================================\n";
    cout<<"\n\tAnda membeli barang dengan jumlah di atas"<<endl;
    cout<<"\n\tTotal harga yang harus anda bayar adalah : ";
    cout<<"Rp. "<<jumlah<<".000"<<endl;
    cout<<"\n\tTerimakasih telah berbelanja di toko kami.";
    cout<<"\n============================================================================\n";
}
