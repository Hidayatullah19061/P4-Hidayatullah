#include <iostream>
using namespace std;
main(){
	cout<<"Nama : Hidayatullah\nNIM : F1B019061\n";
	int i,j;
	int matrik1[2][3],matrik2[2][3],jumlah [2][3];
	cout<<"\nMatriks 1\n";
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++){
			cout<<"masukkan nilai matrik 1  "<<i<<","<<j<<" = ";
			cin>>matrik1[i][j];
		}
	}
	cout<<"\nMatriks 2\n";
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			cout<<"masukkan nilai matrik 2  "<<i<<","<<j<<" = ";
		cin>>matrik2[i][j];
		}
	}
	cout<<"\nHasil pengurangan\n";
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			jumlah[i][j]=matrik1[i][j]-matrik2[i][j];
			cout<<jumlah[i][j]<<" ";
		}
		cout<<endl;}
	cout<<"\nTranspose Hasil pengurangan\n";
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			jumlah[i][j]=matrik1[i][j]-matrik2[i][j];
			cout<<jumlah[j][i]<<" ";
		}
		cout<<endl;}}
