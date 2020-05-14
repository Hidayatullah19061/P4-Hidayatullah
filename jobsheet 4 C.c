#include <stdio.h>
#include <conio.h>

int main(){
int m1[2][3],m2[2][3],i,j;
int hasil[2][3];
printf("Nama : Hidayatullah\nNIM : F1B019061\n");
printf("\nMatriks 1\n");
for (i = 0; i < 2; i++){
for (j = 0; j < 3; j++){
printf ("Masukkan nilai  %d, %d = ", i, j);
scanf ("%d", &m1[i][j]);
}
}
printf ("\n");
printf("Matriks 2\n");
for (i = 0; i < 2; i++){
for (j = 0; j < 3; j++){
printf ("Masukkan nilai  %d, %d = ", i, j);
scanf ("%d", &m2[i][j]);}}
printf ("\nHasil Pengurangan \n");
for (i = 0; i < 2; i++){
for (j = 0; j < 3;j++){
hasil [i][j]=m1[i][j]-m2[i][j];
printf ("%d", hasil[i][j]);
printf(" ");
}
printf ("\n");
}
getch();
}
