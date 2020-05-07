#include <windows.h>     ///script untuk prepocessor yang digunakan
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>

using namespace std;


void gotoxy(int x, int y){
	/// fungsi ini digunakan untuk gotoxy pada dev c++
 COORD coord;          
    /// dengan menambah prepocessor <windows.h>
 coord.X = x;                       
 coord.Y = y;
 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 
}


void delay(unsigned int mseconds)
{                              
 // fungsi ini berguna untuk membuat text berjalan
clock_t goal=mseconds+clock();
while(goal>clock());

}


int main(int argc, char *argv[]){ 
///ini beberapa variabel yang saya gunakan pada project saya
 int kode_pilihan;      
 int nama_brg;
 int baju;
 int sepatu;
 int jaket;
 int kode[20];
 
 
 struct{
 char nabar [20][20], sz[20];
 int hrg[20],jmlh[20],size[20]; 
 }online[10];
 long int total_byr=0;
 long int ttl[20];
 char nm[30],almt[25],nohp[14],kota[25];
 int ongkir,pilih;
 int a,n;
 char mad;
 int m;
     int i;
     
     for(m=1;m<30;m++)
 {
  delay(120);   
  gotoxy(m-1,5);cout<<' ';
  gotoxy(m,7);cout<<" SELAMAT DATANG DI PROGRAM APLIKASI ONLINE ";     //ini text yang akan berjalan
 }
 
 mad= 'Y';          
 while (mad == 'y' || mad == 'Y'){ 
 system("cls"); 
 cout<<"=========================================\n";
 cout<<"``````````    ELVI ANDRIANI   ```````````\n";
 cout<<"``````````  16.10.031.802.162 ```````````\n";
 cout<<"=========================================\n";
 
 
 gotoxy(15,6);cout<<"=====================================================\n";
    gotoxy(15,7);cout<<"|                  PROJECT AKHIR                    |\n";
    gotoxy(15,8);cout<<"|                DASAR PEMOGRAMAN                   |\n";
    gotoxy(15,9);cout<<"|             SISTEM PENJUALAN ONLINE               |\n";
    gotoxy(15,10);cout<<"====================================================="<<endl;    
    
 gotoxy(5,12);cout<<"\t        Welcome to my Online Shop \n";
 gotoxy(5,13);cout<<"\t          Let's Shopping girl's   \n";
 gotoxy(5,14);cout<<"\t   Pembelian bisa dalam dan luar kota \n";
 
 gotoxy(5,16);cout<<"\t Apa yang ingin anda beli ? \n";
 gotoxy(6,17);cout<<" 1. Baju \n";
 gotoxy(6,18);cout<<" 2. Sepatu \n";
 gotoxy(6,19);cout<<" 3. Jaket \n"; 
 
 cout<<"\n\nSilahkan Pilih Menu [1/2/3] : ";cin>>kode_pilihan; 
 
 switch (kode_pilihan){   // ini untuk isi pilihan menu
  case 1:
   system("cls");
   baju;
   gotoxy(15,5) ;cout<<"===================================================================="<<endl;
   gotoxy(15,6) ;cout<<"|                        Daftar Harga BAJU                         |"<<endl;
   gotoxy(15,7) ;cout<<"===================================================================="<<endl;
   gotoxy(15,8) ;cout<<"| Kd |      Model    |       Size        | Stock Ready |   Harga   |"<<endl;
   gotoxy(15,9) ;cout<<"--------------------------------------------------------------------"<<endl;
   gotoxy(15,10);cout<<"| 01 |    Tunik      |       M,L,XL      |      12     | Rp.150000 |"<<endl;
   gotoxy(15,11);cout<<"| 02 |    Blous      |       M,L,XL      |      10     | Rp.95000  |"<<endl;
   gotoxy(15,12);cout<<"| 03 |    Syar'i     | ALL SIZE FIT TO L |      15     | Rp.250000 |"<<endl;
   gotoxy(15,13);cout<<"| 04 |    Jamsuit    | ALL SIZE FIT TO L |      15     | Rp.200000 |"<<endl; 
   gotoxy(15,14);cout<<"===================================================================="<<endl;
   gotoxy(15,15);cout<<"                 MINIMAL PEMBELIAN HARUS 2 ITEM YA                  "<<endl;
  
   cout<<"Masukkan Berapa banyak anda ingin membeli baju :";cin>>n;
   for(a=1;a<=n;a++){
   cout<<"Barang ke - "<<a<<endl;
   cout<<"Kode       : ";cin>>kode[a];
   cout<<"Model      : ";cin>>online[a].nabar[a];
   {
   if(kode[a]==01)
    online[a].hrg[a]=150000;
   
   else if(kode[a]==02)
    online[a].hrg[a]=95000;
   
   else if(kode[a]==03)
    online[a].hrg[a]=250000;
   
   else if(kode[a]==04)
    online[a].hrg[a]=200000;
   
   else 
    online[a].hrg[a]=0;
  }
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
   cout<<"Size       : ";cin>>online[a].sz[a];
   cout<<"Jumlah Beli: ";cin>>online[a].jmlh[a];
   }
   
   system("cls");
 cout<<"``````````      DASAR PEMOGRAMAN    ```````````\n";
 cout<<"``````````  SISTEM PENJUALAN ONLINE ```````````\n";
 cout<<"===============================================\n";
   gotoxy(5,3);cout<<"Daftar Belanja Anda";
   
// 567890123456789012345678901234567890123456789012345678901 (cara ini mempermudah menghitung garis tepian pada tabel menggunakan array)
gotoxy(5,5);cout<<"================================================================"<<endl;
gotoxy(5,6);cout<<"|No|   Model   |  Size  |   Harga   | Jumlah Beli |   Total    |"<<endl;
gotoxy(5,7);cout<<"================================================================"<<endl;
for(a=1;a<=n;a++)
{
	// dihitung dari garis terakhir ditabel
 gotoxy(5,7+a) ;cout<<"|"; 
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(24,7+a);cout<<online[a].sz[a];
 gotoxy(29,7+a);cout<<"|";
 gotoxy(33,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].jmlh[a]*online[a].hrg[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byr=total_byr+ttl[a]; 
}
cout<<endl;
        cout<<"     ================================================================"<<endl;
cout<<endl;
    gotoxy(5,11);cout<<" Masukkan Data diri anda sebelum transaksi "<<endl;
    gotoxy(5,12);cout<<endl;
    
    gotoxy(4,14);cout<<"Nama          : ";cin>>nm;
    gotoxy(4,15);cout<<"Alamat        : ";cin>>almt;
    gotoxy(4,16);cout<<"No Hp         : ";cin>>nohp;
    gotoxy(4,17);cout<<"Alamat Tujuan : ";cin>>kota;
    ongkir=25000;
    gotoxy(4,18);cout<<"Ongkos Kirim :Rp. "<<ongkir<<endl;
    total_byr=total_byr+ttl[a]+ongkir;
    gotoxy(5,19);cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byr<<endl;
    cout<<"Layanan Tranfer"<<endl;
    cout<<"01. BRI "<<endl;
    cout<<"02. BNI "<<endl;
    cout<<"03. Mandiri "<<endl;
    cout<<"Transfer Melalui ? ";cin>>pilih;
    if(pilih==01){
 cout<<"No.Rekening : 41352443656 "<<endl;
    }else if(pilih==02){
 cout<<"No.Rekening : 35154656565 "<<endl;
    }else if(pilih==03){
 cout<<"No.Rekening : 12314235435 "<<endl;
    }else{
 cout<<"Data Salah ! ";
    }
      cout<<"\t\t Pengiriman dilakukan setelah anda transfer       \n";
      cout<<"\t\t     ****Barang Yang Sudah Dibeli****       \n";
            cout<<"\t\t     ***Tidak Dapat Dikembalikan***          \n";
            cout<<"\t\t\n";
            
            break;
            
            case 2:
    system("cls");
    sepatu;
   gotoxy(15,5) ;cout<<"===================================================================="<<endl;
   gotoxy(15,6) ;cout<<"|                       Daftar Harga SEPATU                        |"<<endl;
   gotoxy(15,7) ;cout<<"===================================================================="<<endl;
   gotoxy(15,8) ;cout<<"| Kd |      Model    |       Size        | Stock Ready |   Harga   |"<<endl;
   gotoxy(15,9) ;cout<<"--------------------------------------------------------------------"<<endl;
   gotoxy(15,10);cout<<"| 01 |     Nike      |   36,37,38,39,40  |      12     | Rp.150000 |"<<endl;
   gotoxy(15,11);cout<<"| 02 |     Vans      |   36,37,38,39,40  |      10     | Rp.165000 |"<<endl;
   gotoxy(15,12);cout<<"| 03 |    Adidas     |   36,37,38,39,40  |      15     | Rp.200000 |"<<endl;
   gotoxy(15,13);cout<<"| 04 |     Wakai     |   36,37,38,39,40  |      15     | Rp.350000 |"<<endl; 
   gotoxy(15,14);cout<<"===================================================================="<<endl;
   gotoxy(15,15);cout<<"                 MINIMAL PEMBELIAN HARUS 2 ITEM YA                  "<<endl;
  
   cout<<"Masukkan Berapa banyak anda ingin membeli Sepatu :";cin>>n;
   for(a=1;a<=n;a++){
   cout<<"Barang ke - "<<a<<endl;
   cout<<"Kode       : ";cin>>kode[a];
   cout<<"Model      : ";cin>>online[a].nabar[a];{
   if(kode[a]==01)
    online[a].hrg[a]=150000;
   
   else if(kode[a]==02)
    online[a].hrg[a]=165000;
   
   else if(kode[a]==03)
    online[a].hrg[a]=250000;
   
   else if(kode[a]==04)
    online[a].hrg[a]=350000;
   
   else 
    online[a].hrg[a]=0;
  }
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
   cout<<"Size       : ";cin>>online[a].size[a];
   cout<<"Jumlah Beli: ";cin>>online[a].jmlh[a];
   }
   
   system("cls");
 cout<<"``````````      DASAR PEMOGRAMAN    ```````````\n";
 cout<<"``````````  SISTEM PENJUALAN ONLINE ```````````\n";
 cout<<"===============================================\n";
   gotoxy(5,3);cout<<"Daftar Belanja Anda";
// 567890123456789012345678901234567890123456789012345678901
gotoxy(5,5);cout<<"================================================================"<<endl;
gotoxy(5,6);cout<<"|No|   Model   |  Size  |   Harga   | Jumlah Beli |   Total    |"<<endl;
gotoxy(5,7);cout<<"================================================================"<<endl;
for(a=1;a<=n;a++)
{
 gotoxy(5,7+a) ;cout<<"|"; // dihitung dari garis terakhir ditabel
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(24,7+a);cout<<online[a].size[a];
 gotoxy(29,7+a);cout<<"|";
 gotoxy(33,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].hrg[a]*online[a].jmlh[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byr=total_byr+ttl[a]; 
}
cout<<endl;
        cout<<"     ================================================================"<<endl;
cout<<endl;
    cout<<" Masukkan Data diri anda sebelum transaksi "<<endl;
    cout<<"Nama          : ";cin>>nm;
    cout<<"Alamat        : ";cin>>almt;
    cout<<"No Hp         : ";cin>>nohp;
    cout<<"Alamat Tujuan : ";cin>>kota;
    ongkir=25000;
    cout<<"Ongkos Kirim :Rp. "<<ongkir<<endl;
    total_byr=total_byr+ttl[a]+ongkir;
    cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byr<<endl;
    cout<<"Layanan Tranfer"<<endl;
    cout<<"01. BRI "<<endl;
    cout<<"02. BNI "<<endl;
    cout<<"03. Mandiri "<<endl;
    cout<<"Transfer Melalui ? ";cin>>pilih;
    if(pilih==01){
 cout<<"No.Rekening : 41352443656 "<<endl;
    }else if(pilih==02){
 cout<<"No.Rekening : 35154656565 "<<endl;
    }else if(pilih==03){
 cout<<"No.Rekening : 12314235435 "<<endl;
    }else{
 cout<<"Data Salah ! ";
    }
      cout<<"\t Pengiriman dilakukan setelah anda transfer   \n";
      cout<<"\t\t  ****Barang Yang Sudah Dibeli****       \n";
            cout<<"\t\t   ***Tidak Dapat Dikembalikan***          \n";
            cout<<"\t\t\n";
             
  break;
   case 3:
   system("cls");
   jaket;
   gotoxy(15,5) ;cout<<"===================================================================="<<endl;
   gotoxy(15,6) ;cout<<"|                       Daftar Harga JAKET                         |"<<endl;
   gotoxy(15,7) ;cout<<"===================================================================="<<endl;
   gotoxy(15,8) ;cout<<"| No |      Model    |       Size        | Stock Ready |   Harga   |"<<endl;
   gotoxy(15,9) ;cout<<"--------------------------------------------------------------------"<<endl;
   gotoxy(15,10);cout<<"| 01 |    Sweater    |       M,L,XL      |      10     | Rp.175000 |"<<endl;
   gotoxy(15,11);cout<<"| 02 |    Hoodie     |       M,L,XL      |      10     | Rp.165000 |"<<endl;
   gotoxy(15,12);cout<<"| 03 |    Boomber    |       M,L,XL      |      12     | Rp.215000 |"<<endl; 
   gotoxy(15,13);cout<<"===================================================================="<<endl;
   gotoxy(15,15);cout<<"                 MINIMAL PEMBELIAN HARUS 2 ITEM YA                  "<<endl;
  
   cout<<"Masukkan Berapa banyak anda ingin membeli Jaket :";cin>>n;
   for(a=1;a<=n;a++){
   cout<<"Barang ke - "<<a<<endl;
   cout<<"Kode       : ";cin>>kode[a];
   cout<<"Model      : ";cin>>online[a].nabar[a];{
   if(kode[a]==01)
    online[a].hrg[a]=175000;
   
   else if(kode[a]==02)
    online[a].hrg[a]=165000;
   
   else if(kode[a]==03)
    online[a].hrg[a]=215000;
 
   else 
    online[a].hrg[a]=0;
  }
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
   cout<<"Size       : ";cin>>online[a].sz[a];
   cout<<"Jumlah Beli: ";cin>>online[a].jmlh[a];
   }
   
   system("cls");
 cout<<"``````````      DASAR PEMOGRAMAN    ```````````\n";
 cout<<"``````````  SISTEM PENJUALAN ONLINE ```````````\n";
 cout<<"===============================================\n";
   gotoxy(5,3);cout<<"Daftar Belanja Anda";
// 567890123456789012345678901234567890123456789012345678901
gotoxy(5,5);cout<<"================================================================"<<endl;
gotoxy(5,6);cout<<"|No|   Model   |  Size  |   Harga   | Jumlah Beli |   Total    |"<<endl;
gotoxy(5,7);cout<<"================================================================"<<endl;
for(a=1;a<=n;a++)
{
 gotoxy(5,7+a) ;cout<<"|"; // dihitung dari garis terakhir ditabel
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(24,7+a);cout<<online[a].size[a];
 gotoxy(29,7+a);cout<<"|";
 gotoxy(35,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].hrg[a]*online[a].jmlh[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byr=total_byr+ttl[a]; 
}
cout<<endl;
        cout<<"     ================================================================"<<endl;
cout<<endl;
    cout<<" Masukkan Data diri anda sebelum transaksi "<<endl;
    cout<<"Nama          : ";cin>>nm;
    cout<<"Alamat        : ";cin>>almt;
    cout<<"No Hp         : ";cin>>nohp;
    cout<<"Alamat Tujuan : ";cin>>kota;
    ongkir=25000;
    cout<<"Ongkos Kirim :Rp. "<<ongkir<<endl;
    total_byr=total_byr+ttl[a]+ongkir;
    cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byr<<endl;
    cout<<"Layanan Tranfer"<<endl;
    cout<<"01. BRI "<<endl;
    cout<<"02. BNI "<<endl;
    cout<<"03. Mandiri "<<endl;
    cout<<"Transfer Melalui ? ";cin>>pilih;
    if(pilih==01){
 cout<<"No.Rekening : 41352443656 "<<endl;
    }else if(pilih==02){
 cout<<"No.Rekening : 35154656565 "<<endl;
    }else if(pilih==03){
 cout<<"No.Rekening : 12314235435 "<<endl;
    }else{
 cout<<"Data Salah ! ";
    }
      cout<<"\t Pengiriman dilakukan setelah anda transfer   \n";
      
      cout<<"\t\t  ****Barang Yang Sudah Dibeli****       \n";
            cout<<"\t\t   ***Tidak Dapat Dikembalikan***          \n";
            cout<<"\t\t\n";
             break;
             
              case 4:
    system("cls");
    sepatu;
   gotoxy(15,5) ;cout<<"===================================================================="<<endl;
   gotoxy(15,6) ;cout<<"|                       Daftar Harga SEPATU                        |"<<endl;
   gotoxy(15,7) ;cout<<"===================================================================="<<endl;
   gotoxy(15,8) ;cout<<"| Kd |      Model    |       Size        | Stock Ready |   Harga   |"<<endl;
   gotoxy(15,9) ;cout<<"--------------------------------------------------------------------"<<endl;
   gotoxy(15,10);cout<<"| 01 |     Nike      |   36,37,38,39,40  |      12     | Rp.150000 |"<<endl;
   gotoxy(15,11);cout<<"| 02 |     Vans      |   36,37,38,39,40  |      10     | Rp.165000 |"<<endl;
   gotoxy(15,12);cout<<"| 03 |    Adidas     |   36,37,38,39,40  |      15     | Rp.200000 |"<<endl;
   gotoxy(15,13);cout<<"| 04 |     Wakai     |   36,37,38,39,40  |      15     | Rp.350000 |"<<endl; 
   gotoxy(15,14);cout<<"===================================================================="<<endl;
   gotoxy(15,15);cout<<"                 MINIMAL PEMBELIAN HARUS 2 ITEM YA                  "<<endl;
  
   cout<<"Masukkan Berapa banyak anda ingin membeli Sepatu :";cin>>n;
   for(a=1;a<=n;a++){
   cout<<"Barang ke - "<<a<<endl;
   cout<<"Kode       : ";cin>>kode[a];
   cout<<"Model      : ";cin>>online[a].nabar[a];{
   if(kode[a]==01)
    online[a].hrg[a]=150000;
   
   else if(kode[a]==02)
    online[a].hrg[a]=165000;
   
   else if(kode[a]==03)
    online[a].hrg[a]=250000;
   
   else if(kode[a]==04)
    online[a].hrg[a]=350000;
   
   else 
    online[a].hrg[a]=0;
  }
   cout<<"Harga      :Rp."<<online[a].hrg[a]<<endl;
   cout<<"Size       : ";cin>>online[a].size[a];
   cout<<"Jumlah Beli: ";cin>>online[a].jmlh[a];
   }
   
   system("cls");
 cout<<"``````````      DASAR PEMOGRAMAN    ```````````\n";
 cout<<"``````````  SISTEM PENJUALAN ONLINE ```````````\n";
 cout<<"===============================================\n";
   gotoxy(5,3);cout<<"Daftar Belanja Anda";
// 567890123456789012345678901234567890123456789012345678901
gotoxy(5,5);cout<<"================================================================"<<endl;
gotoxy(5,6);cout<<"|No|   Model   |  Size  |   Harga   | Jumlah Beli |   Total    |"<<endl;
gotoxy(5,7);cout<<"================================================================"<<endl;
for(a=1;a<=n;a++)
{
 gotoxy(5,7+a) ;cout<<"|"; // dihitung dari garis terakhir ditabel
 gotoxy(6,7+a) ;cout<<a;
 gotoxy(8,7+a) ;cout<<"|";
 gotoxy(11,7+a);cout<<online[a].nabar[a];
 gotoxy(20,7+a);cout<<"|";
 gotoxy(24,7+a);cout<<online[a].size[a];
 gotoxy(29,7+a);cout<<"|";
 gotoxy(33,7+a);cout<<online[a].hrg[a];
 gotoxy(41,7+a);cout<<"|";
 gotoxy(48,7+a);cout<<online[a].jmlh[a];
 gotoxy(55,7+a);cout<<"|";
 ttl[a]=online[a].hrg[a]*online[a].jmlh[a];
 gotoxy(61,7+a);cout<<ttl[a];
 gotoxy(68,7+a);cout<<"|";
 total_byr=total_byr+ttl[a]; 
}
cout<<endl;
        cout<<"     ================================================================"<<endl;
cout<<endl;
    cout<<" Masukkan Data diri anda sebelum transaksi "<<endl;
    cout<<"Nama          : ";cin>>nm;
    cout<<"Alamat        : ";cin>>almt;
    cout<<"No Hp         : ";cin>>nohp;
    cout<<"Alamat Tujuan : ";cin>>kota;
    ongkir=25000;
    cout<<"Ongkos Kirim :Rp. "<<ongkir<<endl;
    total_byr=total_byr+ttl[a]+ongkir;
    cout<<"Jadi Total Belanja keseluruhan :Rp. "<<total_byr<<endl;
    cout<<"Layanan Tranfer"<<endl;
    cout<<"01. BRI "<<endl;
    cout<<"02. BNI "<<endl;
    cout<<"03. Mandiri "<<endl;
    cout<<"Transfer Melalui ? ";cin>>pilih;
    if(pilih==01){
 cout<<"No.Rekening : 41352443656 "<<endl;
    }else if(pilih==02){
 cout<<"No.Rekening : 35154656565 "<<endl;
    }else if(pilih==03){
 cout<<"No.Rekening : 12314235435 "<<endl;
    }else{
 cout<<"Data Salah ! ";
    }
      cout<<"\t Pengiriman dilakukan setelah anda transfer   \n";
      cout<<"\t\t  ****Barang Yang Sudah Dibeli****       \n";
            cout<<"\t\t   ***Tidak Dapat Dikembalikan***          \n";
            cout<<"\t\t\n";
             
  break;
           }
            cout<<"\n\nApa Anda Ingin Mengulanginya (y/t) : ";cin>>mad;}
             
    for (i=5;i<31;i++)
 {
 delay(90);
 gotoxy(i-1,34);cout<<' ';
 gotoxy(i,34);cout<<"TERIMA KASIH ATAS KUNJUNGAN ANDA";
 }  
 getch();
 return 0;
 system("cls");
}
