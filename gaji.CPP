#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <string.h>
#include <iomanip.h>
garis()
{
cout<<"--------------------"<<endl;
}
main()
{
clrscr();
int jum ;
char nama[30][10];
char gol[5];
char kpend[5];
int juker[5] ;
int tunjab [5] ;
int tunpen [5] ;
char pend[5][5];
int hlembur [5];
int lbhjam [5];
int total[5];
int pbersih;
cout<<"Masukkan Jumlah Karyawan = ";cin>>jum;
for (int a=1; a<=jum; a++)
{
cout<<"Karyawan Ke - "<<a<<endl;
printf("Nama karyawan = "); gets(nama[a]);
cout<<"Golongan [1/2/3] = "; cin>>gol[a];
cout<<"Pendidikan (1 = SMU/2 = D3/3 = S1) = ";cin>>kpend[a];
cout<<"Jumlah Jam Kerja = ";cin>>juker[a];
}
cout<<"PT, STAY COOL"<<endl;
garis();
cout<<"No  Nama        Tunjangan"<<endl;
cout<<"   Karyawan    ------- Honor        Pendapatan "<<endl;
cout<<"               Jabatan  Pendidikan Lembur Pajak  Bersih"<<endl;
garis();
for (int a=1;a<=jum;a++)
{
if (gol[a]== '1' )
tunjab[a] = (700000 * 5)/100;
else if (gol[a]== '2' )
tunjab[a] = (700000 * 10)/100;
else if (gol[a]== '3' )
tunjab[a] = (700000 * 15)/100;

if (kpend[a] == '1')
{
tunpen[a] = (700000 * 2.5)/100;
(pend[a], "SMU");
}
else if (kpend[a] == '2')
{
tunpen[a] = (700000 * 5)/100;
(pend[a], "D3");
}
if (kpend[a] == '3')
{
tunpen[a] = (700000 * 7.5)/100;
pend[a], "S1";
}

if (juker[a] >240)
{
lbhjam[a] = juker[a] - 240;
hlembur[a] = lbhjam[a] * 2500;
}
else
{
hlembur[a] = 0;
}
/*****************Rumus Program**********************/
total[a] = (700000 + tunjab[a] + tunpen [a] + hlembur[a]);
pbersih = pbersih+total[a];
cout<<setiosflags(ios::left)<<setw(4)<<a;
cout<<setiosflags(ios::left)<<setw(12)<<nama[a];
cout<<setiosflags(ios::left)<<setw(8)<<tunjab[a];
cout<<setiosflags(ios::left)<<setw(14)<<tunpen[a];
cout<<setiosflags(ios::left)<<setw(12)<<hlembur[a];
cout<<setiosflags(ios::left)<<setw(6)<<total[a]<<endl;
}
garis();
cout<<"                     Total Gaji yang Dikeluarkan  = "<<pbersih<<endl;
getch ();
}
