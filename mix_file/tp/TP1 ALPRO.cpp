#include<windows.h>			//script untuk prepocessor yang digunakan
#include<cstdlib>
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>

using namespace std;

void gotoxy(int x, int y){
	//fungsi ini digunakan untuk gotoxy pada dev c++
	COORD coord;
	//dengan menambah prepocessor <windows.h>
	coord.X = x;
	coord.Y = y;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void delay(unsigned int mseconds){
	//fungsi ini berguna untuk membuat text berjalan
	clock_t goal=mseconds+clock();
	while(goal>clock());
}

int main(int argc, char *argv[]){
	//ini untuk beberapa variabel yang akan saya gunakan
	
	int kode_pilihan;
	int nama_brg;
	int bakpia;
	int rengginang;
	int wingko;
	int wajik;
	int teh;
	int sale;
	int getuk;
	int wedang;
	int permen;
	int gudeg;
	int pilih_kurir;
	char kode[20];
	
struct{
		char nabar[20][20], sz[20];
		int hrg[20], jmlh[20], size[20];
}online[10];
	long int total_byr=0;
	long int total_akhir=0;
	long int ttl[20];
	char nm[30],almt[25],nohp[24],kota[25];
	int ongkir,pilih,kurir;
	int a,n,b;
	char mad;
	int m;
	int i;
	
	for(m=1;m<30;m++)
 {
  delay(120);   
  gotoxy(m-1,5);cout<<' ';
   //ini text yang akan berjalan
  gotoxy(m,7);cout<<" SELAMAT DATANG DI PROGRAM APLIKASI ONLINE ";   
 }
	
mad= 'Y';          
 while (mad == 'y' || mad == 'Y'){ 
 system("cls"); 
 cout<<"===============================================================================\n";
 cout<<"\t\t``````````    TOKO GEMAH RIPAH   ```````````\n";
 cout<<"\t``````````  JL.AHMAD YANI/MARGO MULYO NO.94 JOGJA ```````````\n";
 cout<<"===============================================================================\n";
 
 
 	gotoxy(15,6);cout<<"==========================================================\n";
    gotoxy(15,7);cout<<"\t\t              PROJECT AKHIR                    \n";
    gotoxy(15,8);cout<<"\t\t             ALGORITMA PEMROGRAMAN                   \n";
    gotoxy(15,9);cout<<"\t\t   APLIKASI TRANSAKSI JUAL BELI OLEH-OLEH            \n";
	gotoxy(15,10);cout<<"\t\t	MAKANAN di MALIBORO           \n";
    gotoxy(15,11);cout<<"=========================================================="<<endl;    
    
 gotoxy(5,13);cout<<"\t\t\t       Welcome to my Online Shop \n";
 gotoxy(5,14);cout<<"\t\t\t          Let's Shopping   \n";
 gotoxy(5,15);cout<<"\t\t\t   Pembelian bisa dalam dan luar kota \n";
 
	//ini untuk memasukkan menu
	gotoxy(5,16);cout<<"\t Apa yang ingin anda beli ? \n";
	gotoxy(6,17);cout<<"1. Bakpia \n";
	gotoxy(6,18);cout<<"2. Rengginang \n";
	gotoxy(6,19);cout<<"3. Wingko \n";
	gotoxy(6,20);cout<<"4. Wajik \n";
	gotoxy(6,21);cout<<"5. Teh \n";
	gotoxy(6,22);cout<<"6. Sale \n";
	gotoxy(6,23);cout<<"7. Getuk \n";
	gotoxy(6,24);cout<<"8. Wedang \n";
	gotoxy(6,25);cout<<"9. Permen \n";
	gotoxy(6,26);cout<<"10. Gudeg \n";
	
	cout<<"\nSilahkan Pilih Menu [1-10] :";cin>>kode_pilihan;
	
	switch (kode_pilihan){
		case 1:
			system("cls");
			bakpia;
			gotoxy(15,5);cout<<"\t\tMENU VARIAN BAKPIA :"<<endl;
			gotoxy(15,6);cout<<"\tKODE \tVARIAN \tHARGA "<<endl<<endl<<endl;
			gotoxy(15,7);cout<<"\tA. \tBAKPIA BASAH \tRP.40000"<<endl;
			gotoxy(15,8);cout<<"\tB. \tBAKPIA COKLAT \tRP.38000"<<endl;
			gotoxy(15,9);cout<<"\tC. \tBAKPIA DURIAN \tRP.38000"<<endl;
			gotoxy(15,10);cout<<"\tD. \tBAKPIA NANAS \tRP.38000"<<endl;
			gotoxy(15,11);cout<<"\tE. \tBAKPIA KURMA \tRP.38000"<<endl;
			gotoxy(15,12);cout<<"\tF. \tBAKPIA NANGKA \tRP.38000"<<endl;
			gotoxy(15,13);cout<<"\tG. \tBAKPIA KEJU \tRP.40000"<<endl;
			
			cout<<"\nMASUKKAN BERAPA BANYAK BAKPIA YANG ANDA INGI BELI :";cin>>n;
			
			for(a=1;a<=n;a++){
				cout<<"Barang ke- "<<a<<endl;
				cout<<"Kode 	: ";cin>>kode[a];
				{
				if(kode[a]=='A')
				online[a].hrg[a]=40000;
				
				else if(kode[a]=='B')
				online[a].hrg[a]=38000;
				
				else if(kode[a]=='C')
				online[a].hrg[a]=38000;
				
				else if(kode[a]=='D')
				online[a].hrg[a]=38000;
				
				else if(kode[a]=='E')
				online[a].hrg[a]=38000;
				
				else if(kode[a]=='F')
				online[a].hrg[a]=38000;
				
				else if(kode[a]=='G')
				online[a].hrg[a]=40000;
				
				else
				online[a].hrg[a];
			    }
			cout<<"Harga	:Rp."<<online[a].hrg[a]<<endl;
			cout<<"Jumlah Beli: ";cin>>online[a].hrg[a];
			}
					
	system("cls");
	cout<<"````````		ALGORITMA PEMROGRAMAN	````````\n";
	cout<<"````````		SISTEM PENJUALAN ONLINE	````````\n";
	cout<<"=============================================\n";
	gotoxy(5,3);cout<<"Daftar Belanja Anda ";
	
	gotoxy(3,3);cout<<"============================================================================"<<endl;
	gotoxy(3,4);cout<<"|No|		Harga	|	Jumlah	|	Total	|"<<endl;
	gotoxy(3,5);cout<<"============================================================================"<<endl;
	for(a=1;a<=n;a++){
		gotoxy(3,5+a);cout<<"|";
		gotoxy(4,5+a);cout<<a;
		gotoxy(6,5+a);cout<<"|";
		gotoxy(9,5+a);cout<<online[a].hrg[a];
		gotoxy(18,5+a);cout<<"|";
		gotoxy(22,5+a);cout<<online[a].jmlh[a];
		gotoxy(27,5+a);cout<<"|";
		ttl[a]=online[a].jmlh[a]+online[a].hrg[a];
		gotoxy(33,5+a);cout<<ttl[a];
		gotoxy(40,5+a);cout<<"|";
		total_byr=total_byr+ttl[a];
	}
	cout<<endl;
	cout<<"   ==============================================================================="<<endl;
	cout<<endl;
	gotoxy(5,11);cout<<"Masukkan Data diri anda sebelum transaksi :"<<endl;
	gotoxy(5,12);cout<<endl;
	
	gotoxy(4,14);cout<<"Nama Penerima	:";cin>>nm;
	gotoxy(4,15);cout<<"Alamat			:";cin>>almt;
	gotoxy(4,16);cout<<"No Hp 			:";cin>>nohp;
	gotoxy(4,17);cout<<"Alamat Tujuan	:";cin>>kota;
	cout<<"Layanan Pilih Kurir"<<endl;
	cout<<"\t01. GOJEK"<<endl;
	cout<<"\t02. POS "<<endl;
	cout<<"\t03. JNT "<<endl;
	cout<<"\t04. JNE "<<endl;
	cout<<"\t05. TIKI "<<endl;
	cout<<"Masukkan Pilihan :";
	cin>>kurir;
	
	if(kurir==01){
		ongkir=10000;
		cout<<"Tarif ongkir gojek ="<<ongkir;
	}
	else if(kurir==02){
		ongkir=15000;
		cout<<"Tarif ongkir pos ="<<ongkir;
	}
	else if(kurir==03){
		ongkir=17000;
		cout<<"Tarif ongkir JNE ="<<ongkir;
	}
	else if(kurir==04){
		ongkir=16000;
		cout<<"Tarif ongkir JNT ="<<ongkir;
	}
	else if(kurir==05){
		ongkir=13000;
		cout<<"Tarif ongkir Tiki ="<<ongkir;
	}
	else{
		cout<<"Data Salah !";
	}
    //cout<<"Ongkos Kirim :Rp. "<<ongkir<<endl;
    total_akhir=total_byr+ongkir;
    cout<<"\nJadi Total Belanja keseluruhan :Rp. "<<total_akhir<<endl;
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
        	rengginang;
        	
        gotoxy(15,5);cout<<"\tMENU VARIAN RENGGINANG "<<endl;
        gotoxy(15,6);cout<<"\tKODE \tVARIAN \tHARGA "<<endl<<endl<<endl;
        gotoxy(15,7);cout<<"\tA. RENGGINANG BONANZA	\tRp.24000"<<endl;
        gotoxy(15,8);cout<<"\tB. RENGGINANG BULAT	\tRp.24000"<<endl;
        gotoxy(15,9);cout<<"\tB. RENGGINANG MENTAH ASLI	\tRp.20000"<<endl;
        gotoxy(15,10);cout<<"\tB. RENGGINANG MENTAH CAKRA	\tRp.19000"<<endl;
        
        cout<<"\nMASUKKAN BERAPA BANYAK RENGGINANG YANG ANDA INGIN BELI :";cin>>n;
        for(a=1;a<=n;a++){
        	cout<<"Barang ke- "<<a<<endl;
        	cout<<"Kode		:";cin>>kode[a];
			{
        		if(kode[a]=='A')
        		online[a].hrg[a]=24000;
        		
        		else if(kode[a]=='B')
        		online[a].hrg[a]=24000;
        		
        		else if(kode[a]=='C')
        		online[a].hrg[a]=20000;
        		
        		else if(kode[a]='D')
        		online[a].hrg[a]=19000;
        		
        		else
        		online[a].hrg[a]=0;
		    }
			cout<<"Harga	:Rp."<<online[a].hrg[a]<<endl;
			cout<<"Jumlah Beli	:";cin>>online[a].jmlh[a];
		}
		
		system("cls");
		cout<<"````````		ALGORITMA PEMROGRAMAN	````````\n";
		cout<<"````````		SISTEM PENJUALAN ONLINE	````````\n";
		cout<<"=============================================\n";
		gotoxy(5,3);cout<<"Daftar Belanja Anda ";
	
	gotoxy(3,3);cout<<"============================================================================"<<endl;
	gotoxy(3,4);cout<<"|No|		Harga	|	Jumlah	|	Total	|"<<endl;
	gotoxy(3,5);cout<<"============================================================================"<<endl;
	for(a=1;a<=n;a++){
		gotoxy(3,5+a);cout<<"|";
		gotoxy(4,5+a);cout<<a;
		gotoxy(6,5+a);cout<<"|";
		gotoxy(9,5+a);cout<<online[a].hrg[a];
		gotoxy(18,5+a);cout<<"|";
		gotoxy(22,5+a);cout<<online[a].jmlh[a];
		gotoxy(27,5+a);cout<<"|";
		ttl[a]=online[a].jmlh[a]+online[a].hrg[a];
		gotoxy(33,5+a);cout<<ttl[a];
		gotoxy(40,5+a);cout<<"|";
		total_byr=total_byr+ttl[a];
	}
	cout<<endl;
	cout<<"   ==============================================================================="<<endl;
	cout<<endl;
	
	cout<<"Masukkan Data Diri Anda Sebelum Transaksi "<<endl;
	cout<<" Nama			:";cin>>nm;
	cout<<" Alamat			:";cin>>almt;
	cout<<" No Hp			:";cin>>nohp;
	cout<<" Alamat Tujuan	:";cin>>kota;
	cout<<"Layanan Pilih Kurir"<<endl;
	cout<<"\t01. GOJEK"<<endl;
	cout<<"\t02. POS "<<endl;
	cout<<"\t03. JNT "<<endl;
	cout<<"\t04. JNE "<<endl;
	cout<<"\t05. TIKI "<<endl;
	cout<<"Masukkan Pilihan :";
	cin>>kurir;
	
	if(kurir==01){
		ongkir=10000;
		cout<<"Tarif ongkir gojek ="<<ongkir;
	}
	else if(kurir==02){
		ongkir=15000;
		cout<<"Tarif ongkir pos ="<<ongkir;
	}
	else if(kurir==03){
		ongkir=17000;
		cout<<"Tarif ongkir JNE ="<<ongkir;
	}
	else if(kurir==04){
		ongkir=16000;
		cout<<"Tarif ongkir JNT ="<<ongkir;
	}
	else if(kurir==05){
		ongkir=13000;
		cout<<"Tarif ongkir Tiki ="<<ongkir;
	}
	else{
		cout<<"Data Salah !";
	}
	 //cout<<"Ongkos Kirim :Rp. "<<ongkir<<endl;
    total_akhir=total_byr+ongkir;
    cout<<"\nJadi Total Belanja keseluruhan :Rp. "<<total_akhir<<endl;
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
	case 3:
		system("cls");
		wingko;
		gotoxy(15,5);cout<<"\t\tMENU VARIAN WINGKO :"<<endl;
		gotoxy(15,6);cout<<"\tKODE \tVARIAN \tHARGA "<<endl<<endl<<endl;
		gotoxy(15,7);cout<<"\tA. \tWINGKO BIMAJAYA \tRP.37000"<<endl;
		gotoxy(15,8);cout<<"\tB. \tWINGKO GADING \tRP.24000"<<endl;
		gotoxy(15,9);cout<<"\tC. \tWINGKO MATARAM KOMBINASI \tRP.37000"<<endl;
		gotoxy(15,10);cout<<"\tD. \tWINGKO MATARAM ORIGINAL \tRP.32000"<<endl;
		gotoxy(15,11);cout<<"\tE. \tWINGKO NETTY \tRP.27000"<<endl;
		gotoxy(15,12);cout<<"\tF. \tWINGKO SANGAN \tRP.34000"<<endl;
		
		 cout<<"\nMASUKKAN BERAPA BANYAK RENGGINANG YANG ANDA INGIN BELI :";cin>>n;
        for(a=1;a<=n;a++){
        	cout<<"Barang ke- "<<a<<endl;
        	cout<<"Kode		:";cin>>kode[a];
		    {
        		if(kode[a]=='A')
        		online[a].hrg[a]=37000;
        		
        		else if(kode[a]=='B')
        		online[a].hrg[a]=24000;
        		
        		else if(kode[a]=='C')
        		online[a].hrg[a]=37000;
        		
        		else if(kode[a]='D')
        		online[a].hrg[a]=32000;
        		
        		else if(kode[a]=='E')
        		online[a].hrg[a]=27000;
        		
        		else if(kode[a]=='F')
        		online[a].hrg[a]=34000;
        		
        		else
        		online[a].hrg[a]=0;
			}
			cout<<"Harga	:Rp."<<online[a].hrg[a]<<endl;
			cout<<"Jumlah Beli	:";cin>>online[a].jmlh[a];
		}
		
		system("cls");
		cout<<"````````		ALGORITMA PEMROGRAMAN	````````\n";
		cout<<"````````		SISTEM PENJUALAN ONLINE	````````\n";
		cout<<"=============================================\n";
		gotoxy(5,3);cout<<"Daftar Belanja Anda ";
	
	gotoxy(3,3);cout<<"============================================================================"<<endl;
	gotoxy(3,4);cout<<"|No|		Harga	|	Jumlah	|	Total	|"<<endl;
	gotoxy(3,5);cout<<"============================================================================"<<endl;
	for(a=1;a<=n;a++){
		gotoxy(3,5+a);cout<<"|";
		gotoxy(4,5+a);cout<<a;
		gotoxy(6,5+a);cout<<"|";
		gotoxy(9,5+a);cout<<online[a].hrg[a];
		gotoxy(18,5+a);cout<<"|";
		gotoxy(22,5+a);cout<<online[a].jmlh[a];
		gotoxy(27,5+a);cout<<"|";
		ttl[a]=online[a].jmlh[a]+online[a].hrg[a];
		gotoxy(33,5+a);cout<<ttl[a];
		gotoxy(40,5+a);cout<<"|";
		total_byr=total_byr+ttl[a];
	}
	cout<<endl;
	cout<<"   ==============================================================================="<<endl;
	cout<<endl;
	
	cout<<"Masukkan Data Diri Anda Sebelum Transaksi "<<endl;
	cout<<" Nama			:";cin>>nm;
	cout<<" Alamat			:";cin>>almt;
	cout<<" No Hp			:";cin>>nohp;
	cout<<" Alamat Tujuan	:";cin>>kota;
	cout<<"Layanan Pilih Kurir"<<endl;
	cout<<"\t01. GOJEK"<<endl;
	cout<<"\t02. POS "<<endl;
	cout<<"\t03. JNT "<<endl;
	cout<<"\t04. JNE "<<endl;
	cout<<"\t05. TIKI "<<endl;
	cout<<"Masukkan Pilihan :";
	cin>>kurir;
	
	if(kurir==01){
		ongkir=10000;
		cout<<"Tarif ongkir gojek ="<<ongkir;
	}
	else if(kurir==02){
		ongkir=15000;
		cout<<"Tarif ongkir pos ="<<ongkir;
	}
	else if(kurir==03){
		ongkir=17000;
		cout<<"Tarif ongkir JNE ="<<ongkir;
	}
	else if(kurir==04){
		ongkir=16000;
		cout<<"Tarif ongkir JNT ="<<ongkir;
	}
	else if(kurir==05){
		ongkir=13000;
		cout<<"Tarif ongkir Tiki ="<<ongkir;
	}
	else{
		cout<<"Data Salah !";
	}
	 //cout<<"Ongkos Kirim :Rp. "<<ongkir<<endl;
    total_akhir=total_byr+ongkir;
    cout<<"\nJadi Total Belanja keseluruhan :Rp. "<<total_akhir<<endl;
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
            
            case 4:
            	system("cls");
            	wajik;
        gotoxy(15,5);cout<<"\tMENU VARIAN WAJIK "<<endl;
        gotoxy(15,6);cout<<"\tKODE \tVARIAN \tHARGA "<<endl<<endl<<endl;
        gotoxy(15,7);cout<<"\tA. WAJIK KLETHIK JARKASI	\tRp.22000"<<endl;
        gotoxy(15,8);cout<<"\tB. WAJIK WEEK BESAR	\tRp.38000"<<endl;
        gotoxy(15,9);cout<<"\tC. WAJIK WEEK KECIL	\tRp.24000"<<endl;
        gotoxy(15,10);cout<<"\tD. WAJIK BANDUNG LEGIET	\tRp.18000"<<endl;
        
         cout<<"\nMASUKKAN BERAPA BANYAK RENGGINANG YANG ANDA INGIN BELI :";cin>>n;
        for(a=1;a<=n;a++){
        	cout<<"Barang ke- "<<a<<endl;
        	cout<<"Kode		:";cin>>kode[a];
		    {
        		if(kode[a]=='A')
        		online[a].hrg[a]=22000;
        		
        		else if(kode[a]=='B')
        		online[a].hrg[a]=38000;
        		
        		else if(kode[a]=='C')
        		online[a].hrg[a]=24000;
        		
        		else if(kode[a]='D')
        		online[a].hrg[a]=18000;
        		
        		else
        		online[a].hrg[a]=0;
			}
			cout<<"Harga	:Rp."<<online[a].hrg[a]<<endl;
			cout<<"Jumlah Beli	:";cin>>online[a].jmlh[a];
     	}
					system("cls");
		cout<<"````````		ALGORITMA PEMROGRAMAN	````````\n";
		cout<<"````````		SISTEM PENJUALAN ONLINE	````````\n";
		cout<<"=============================================\n";
		gotoxy(5,3);cout<<"Daftar Belanja Anda ";
	
	gotoxy(3,3);cout<<"============================================================================"<<endl;
	gotoxy(3,4);cout<<"|No|		Harga	|	Jumlah	|	Total	|"<<endl;
	gotoxy(3,5);cout<<"============================================================================"<<endl;
	for(a=1;a<=n;a++){
		gotoxy(3,5+a);cout<<"|";
		gotoxy(4,5+a);cout<<a;
		gotoxy(6,5+a);cout<<"|";
		gotoxy(9,5+a);cout<<online[a].hrg[a];
		gotoxy(18,5+a);cout<<"|";
		gotoxy(22,5+a);cout<<online[a].jmlh[a];
		gotoxy(27,5+a);cout<<"|";
		ttl[a]=online[a].jmlh[a]+online[a].hrg[a];
		gotoxy(33,5+a);cout<<ttl[a];
		gotoxy(40,5+a);cout<<"|";
		total_byr=total_byr+ttl[a];
	}
	cout<<endl;
	cout<<"   ==============================================================================="<<endl;
	cout<<endl;
	
	cout<<"Masukkan Data Diri Anda Sebelum Transaksi "<<endl;
	cout<<" Nama			:";cin>>nm;
	cout<<" Alamat			:";cin>>almt;
	cout<<" No Hp			:";cin>>nohp;
	cout<<" Alamat Tujuan	:";cin>>kota;
	cout<<"Layanan Pilih Kurir"<<endl;
	cout<<"\t01. GOJEK"<<endl;
	cout<<"\t02. POS "<<endl;
	cout<<"\t03. JNT "<<endl;
	cout<<"\t04. JNE "<<endl;
	cout<<"\t05. TIKI "<<endl;
	cout<<"Masukkan Pilihan :";
	cin>>kurir;
	
	if(kurir==01){
		ongkir=10000;
		cout<<"Tarif ongkir gojek ="<<ongkir;
	}
	else if(kurir==02){
		ongkir=15000;
		cout<<"Tarif ongkir pos ="<<ongkir;
	}
	else if(kurir==03){
		ongkir=17000;
		cout<<"Tarif ongkir JNE ="<<ongkir;
	}
	else if(kurir==04){
		ongkir=16000;
		cout<<"Tarif ongkir JNT ="<<ongkir;
	}
	else if(kurir==05){
		ongkir=13000;
		cout<<"Tarif ongkir Tiki ="<<ongkir;
	}
	else{
		cout<<"Data Salah !";
	}
	 //cout<<"Ongkos Kirim :Rp. "<<ongkir<<endl;
    total_akhir=total_byr+ongkir;
    cout<<"\nJadi Total Belanja keseluruhan :Rp. "<<total_akhir<<endl;
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
            
            case 5:
            	system("cls");
            teh;
        gotoxy(15,5);cout<<"\tMENU VARIAN TEH "<<endl;
        gotoxy(15,6);cout<<"\tKODE \tVARIAN \tHARGA "<<endl<<endl<<endl;
        gotoxy(15,7);cout<<"\tA. TEH BENALU PASIR WALIK	\tRp.21000"<<endl;
        gotoxy(15,8);cout<<"\tB. TEH HIJAU PASIR WALIK	\tRp.11000"<<endl;
        gotoxy(15,9);cout<<"\tC. TEH HITAM PASIR WALIK	\tRp.12000"<<endl;
        
        cout<<"\nMASUKKAN BERAPA BANYAK RENGGINANG YANG ANDA INGIN BELI :";cin>>n;
        for(a=1;a<=n;a++){
        	cout<<"Barang ke- "<<a<<endl;
        	cout<<"Kode		:";cin>>kode[a];
		    {
        		if(kode[a]=='A')
        		online[a].hrg[a]=21000;
        		
        		else if(kode[a]=='B')
        		online[a].hrg[a]=11000;
        		
        		else if(kode[a]=='C')
        		online[a].hrg[a]=12000;
        		
        		else
        		online[a].hrg[a]=0;
			}
			cout<<"Harga	:Rp."<<online[a].hrg[a]<<endl;
			cout<<"Jumlah Beli	:";cin>>online[a].jmlh[a];
		}
		
		system("cls");
		cout<<"````````		ALGORITMA PEMROGRAMAN	````````\n";
		cout<<"````````		SISTEM PENJUALAN ONLINE	````````\n";
		cout<<"=============================================\n";
		gotoxy(5,3);cout<<"Daftar Belanja Anda ";
	
	gotoxy(3,3);cout<<"============================================================================"<<endl;
	gotoxy(3,4);cout<<"|No|		Harga	|	Jumlah	|	Total	|"<<endl;
	gotoxy(3,5);cout<<"============================================================================"<<endl;
	for(a=1;a<=n;a++){
		gotoxy(3,5+a);cout<<"|";
		gotoxy(4,5+a);cout<<a;
		gotoxy(6,5+a);cout<<"|";
		gotoxy(9,5+a);cout<<online[a].hrg[a];
		gotoxy(18,5+a);cout<<"|";
		gotoxy(22,5+a);cout<<online[a].jmlh[a];
		gotoxy(27,5+a);cout<<"|";
		ttl[a]=online[a].jmlh[a]+online[a].hrg[a];
		gotoxy(33,5+a);cout<<ttl[a];
		gotoxy(40,5+a);cout<<"|";
		total_byr=total_byr+ttl[a];
	}
	cout<<endl;
	cout<<"   ==============================================================================="<<endl;
	cout<<endl;
	
	cout<<"Masukkan Data Diri Anda Sebelum Transaksi "<<endl;
	cout<<" Nama			:";cin>>nm;
	cout<<" Alamat			:";cin>>almt;
	cout<<" No Hp			:";cin>>nohp;
	cout<<" Alamat Tujuan	:";cin>>kota;
	cout<<"Layanan Pilih Kurir"<<endl;
	cout<<"\t01. GOJEK"<<endl;
	cout<<"\t02. POS "<<endl;
	cout<<"\t03. JNT "<<endl;
	cout<<"\t04. JNE "<<endl;
	cout<<"\t05. TIKI "<<endl;
	cout<<"Masukkan Pilihan :";
	cin>>kurir;
	
	if(kurir==01){
		ongkir=10000;
		cout<<"Tarif ongkir gojek ="<<ongkir;
	}
	else if(kurir==02){
		ongkir=15000;
		cout<<"Tarif ongkir pos ="<<ongkir;
	}
	else if(kurir==03){
		ongkir=17000;
		cout<<"Tarif ongkir JNE ="<<ongkir;
	}
	else if(kurir==04){
		ongkir=16000;
		cout<<"Tarif ongkir JNT ="<<ongkir;
	}
	else if(kurir==05){
		ongkir=13000;
		cout<<"Tarif ongkir Tiki ="<<ongkir;
	}
	else{
		cout<<"Data Salah !";
	}
	 //cout<<"Ongkos Kirim :Rp. "<<ongkir<<endl;
    total_akhir=total_byr+ongkir;
    cout<<"\nJadi Total Belanja keseluruhan :Rp. "<<total_akhir<<endl;
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
	}
}}
		


