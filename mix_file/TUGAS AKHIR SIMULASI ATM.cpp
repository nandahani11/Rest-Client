#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main(){
struct{
	int nomor;
	int nominal;
}belipulsa[50];

struct{
	int tarik;
}penarikan[50];

struct{
	int tujuan;
	int nominal;
	int bank;
	int angka;
}trf[20];

int sal=50000000;
int pin;
int a=0, b=0, c=0, d=0, i=0;
int gtpin=123456;
char lagi, jwb;
int pilihan;
int nopajak, jumlah;
int tarik, rek;
int bahasa, lanjut=0, paket, uang, menu, angka;
int transaksi, bank, norek;

login:

	cout<<"MASUKKAN NOMOR REKENING :"; //NO.REKENING MAKSIMAL 10 DIGIT
	cin>>norek;
	system("cls");
	cout<<"*************************************************************"<<endl<<endl<<endl;
	cout<<"\t\t\tPT BANK MERPATI"<<endl<<endl;
	cout<<"\t\tSILAHKAN PILIH BAHASA ANDA"<<endl;
	cout<<"\t\t----------------------------"<<endl;
	cout<<"\t\tPLEASE SELECT YOUR LANGUAGE"<<endl;
	cout<<"\t\t1. INDONESIA"<<endl;
	cout<<"\t\t2. ENGLISH"<<endl; //JIKA MEMILIH BAHASA INGGRIS "not found"
	cout<<"\t\t TO OBTAIN CARD PRESS CANCEL"<<endl;
	cout<<"\t\t--------------------------------"<<endl;
	cout<<"\t\tTEKAN 'CANCEL' UNTUK MEMBATALKAN"<<endl<<endl<<endl;
	cout<<"*************************************************************";
	cout<<"\n\t= ";
	cin>>bahasa;
	
	system("cls");
		
	if(bahasa==1)
	{
		cout<<"\nNASABAH YTH,"<<endl;
		cout<<"TIPS AMAN BERTRANSAKSI DI ATM :"<<endl;
		cout<<"- JAGA KERAHASIAAN PIN"<<endl;
		cout<<"- GANTI PIN ANDA SECARA BERKALA DENGAN PIN YANG BELUM PERNAH DIPERGUNAKAN"<<endl;
		cout<<"- TUTUP DENGAN TANGAN SAAT MENEKAN NOMOR PIN"<<endl;
		cout<<"CALL CENTER BM :"<<endl;
		cout<<"14017, 500017, (021)57987400"<<endl;
		cout<<"DIMOHON TIDAK MENGHUBUNGI NOMOR LAIN SELAIN NOMOR DI ATAS"<<endl;
		cout<<"TEKAN 0 UNTUK MELANJUTKAN : "; cin>>lanjut;
		system("cls");
		cout<<"\t\t\tMASUKKAN PIN"<<endl; 
		cout<<"\t(TEKAN 'ENTER' JIKA SELESAI MEMASUKKAN PIN)"<<endl;
		
		do{
			cout<<"\n\tPIN : "; cin>>pin;
			
			if(pin==gtpin)
			{goto menu;}
			else
			{
				cout<<"\n\t--------------------------------------------------\n";
				cout<<"\t\tMAAF PIN SALAH!!!"<<endl;
				cout<<"\t--------------------------------------------------\n\n";
				i=i+1;
			}
		}
		while(i<3);
		{
			cout<<"\t\tANDA TELAH 3x MEMASUKKAN PIN YANG SALAH\n";
			cout<<"\t\tMOHON MAAF AKUN ANDA KAMI BLOCKIR. SILAHKAN HUBUNGI CS KAMI.............";
			getch();
			exit:
			goto keluar;
		}
		menu :
		system("cls");
			cout<<"\n\t\t************************* PILIH JUMLAH PAKET TUNAI ***********************"<<endl<<endl;
			cout<<"\t\t|\t\t1. 100.000 \t\t2. 200.000\t\t\t |"<<endl;
			cout<<"\t\t|\t\t3. 300.000 \t\t4. 500.000\t\t\t |"<<endl;
			cout<<"\t\t|\t\t5. 1.000.000 \t\t6. 1.500.000\t\t\t |"<<endl;
			cout<<"\t\t|\t\t7. 2.000.000 \t\t8. TRANSAKSI LAIN\t\t |"<<endl;
			cout<<"\t\t|              \t\t\t\t9. EXIT\t\t\t\t |"<<endl;
			cout<<"\n\tMASUKKAN PILIHAN PAKET TUNAI : "; cin>>paket;
			system("cls");
			
			if(paket==1)
			{
				cout<<"SILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
				cout<<"-----------------------------------------"<<endl<<endl;
				cout<<"\tSALDO\t\t\t = "<<sal<<" - "<<100000<<endl;
				sal=sal-100000;
				cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl<<endl;
				
				cout<<"SILAHKAN AMBIL KARTU ANDA"<<endl;
			}
			else if(paket==2)
			{
				cout<<"SILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
				cout<<"-----------------------------------------"<<endl<<endl;
				cout<<"\tSALDO\t\t\t = "<<sal<<" - "<<200000<<endl;
				sal=sal-200000;
				cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl<<endl;
				
				cout<<"SILAHKAN AMBIL KARTU ANDA"<<endl;
			}
			else if(paket==3)
			{
				cout<<"SILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
				cout<<"-----------------------------------------"<<endl<<endl;
				cout<<"\tSALDO\t\t\t = "<<sal<<" - "<<300000<<endl;
				sal=sal-300000;
				cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl<<endl;
				
				cout<<"SILAHKAN AMBIL KARTU ANDA"<<endl;
			}
			else if(paket==4)
			{
				cout<<"SILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
				cout<<"-----------------------------------------"<<endl<<endl;
				cout<<"\tSALDO\t\t\t = "<<sal<<" - "<<500000<<endl;
				sal=sal-500000;
				cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl<<endl;
				
				cout<<"SILAHKAN AMBIL KARTU ANDA"<<endl;
			}
			else if(paket==5)
			{
				cout<<"SILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
				cout<<"-----------------------------------------"<<endl<<endl;
				cout<<"\tSALDO\t\t\t = "<<sal<<" - "<<1000000<<endl;
				sal=sal-1000000;
				cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl<<endl;
				
				cout<<"SILAHKAN AMBIL KARTU ANDA"<<endl;
			}
			else if(paket==6)
			{
				cout<<"SILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
				cout<<"-----------------------------------------"<<endl<<endl;
				cout<<"\tSALDO\t\t\t = "<<sal<<" - "<<1500000<<endl;
				sal=sal-1500000;
				cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl<<endl;
				
				cout<<"SILAHKAN AMBIL KARTU ANDA"<<endl;
			}
			else if(paket==7)
			{
				cout<<"SILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
				cout<<"-----------------------------------------"<<endl<<endl;
				cout<<"\tSALDO\t\t\t = "<<sal<<" - "<<2000000<<endl;
				sal=sal-2000000;
				cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl<<endl;
			
				cout<<"SILAHKAN AMBIL KARTU ANDA"<<endl;
			}
			else if(paket==8)
			{
				while(paket==8)
				{
					cout<<"\n\t*************** PILIH JENIS TRANSAKSI ***************"<<endl<<endl;
					cout<<"\t\t1. PENARIKAN \t\t2. TRANSFER"<<endl;
					cout<<"\t\t3. PEMBELIAN \t\t4. PEMBAYARAN"<<endl;
					cout<<"\t\t5. INFO SALDO \t\t6. UBAH PIN"<<endl;
					cout<<"\n\t = ";
					cin>>jwb;
					system("cls");
					
					switch(jwb)
					{
						case '1':
						
							cout<<"\t\t<<PENARIKAN>>"<<endl;
			        		cout<<"\t(DALAM KELIPATAN RP.100.000)"<<endl;
								cout<<"\n\tMASUKKAN NOMINAL ANDA : "; cin>>penarikan[a].tarik;
								if(penarikan[a].tarik<100000 || penarikan[a].tarik>5000000)
								{cout<<"\n\t\t!!NOMINAL HARUS 100000-5000000!!"; cout<<endl;}
								else if(penarikan[a].tarik%100000!=0)
								{cout<<"\n\t\tNOMINAL HARUS KELIPATAN 100000!!"; cout<<endl;}
								else if(sal<penarikan[a].tarik)
								{cout<<"\t\tSALDO ANDA TIDAK CUKUP, SALDO ANDA SAAT INI : "; cout<<sal<<endl;}
								else
								{
									cout<<"\nSILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
									cout<<"-------------------------------------------------------"<<endl<<endl;
									cout<<"TRANSAKSI ANDA BERHASIL DILAKSANAKAN"<<endl;
									cout<<"\n\tSALDO\t\t\t = "<<sal<<" - "<<penarikan[a].tarik<<endl;
									sal=sal-penarikan[a].tarik;
									cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl;
									cout<<"\n\nTERIMA KASIH ATAS KEPERCAYAAN ANDA"<<endl;
								}
								masih:
								cout<<"TRANSAKSI LAGI? \t\t\t1. YA"<<endl;
								cout<<"\t\t\t\t\t2. TIDAK"<<endl;
								cout<<" = "; cin>>lagi;
								if (lagi == '1')
						        goto menu;
						        else if (lagi == '2')
						        {
						        goto keluar;}
						        else
						        {
						        cout<<"PILIHAN SALAH\n";
						        goto masih;}
						        system("cls");
													
							break;
						
						case '2':
						
							cout<<"\t\t<<TRANSFER>>"<<endl;
							cout<<"\tPILIH BANK TUJUAN TRANSFER"<<endl;
								cout<<"\t\t\t1. MERPATI"<<endl;
								cout<<"\t\t\t2. BANK LAIN"<<endl;
								cout<<" = ";
								cin>>trf[b].bank;
								system("cls");
								if(trf[b].bank==1)
								{
									tujuantrf:
									cout<<"MASUKKAN NOMOR REKENING TUJUAN TRANSFER ANDA"<<"\n= ";cin>>trf[b].tujuan; //NO.REKENING TIDAK BOLEH LEBIH DARI 10 GIGIT
									cout<<"\t\t\t\t1. BENAR"<<endl;
									cout<<"\t\t\t\t2. SALAH"<<endl;
									cout<<" = ";
									cin>>trf[b].angka;
									if(trf[b].angka==1)
									{
										cout<<"MASUKKAN JUMLAH TRANSFER"<<endl;
										cout<<"RP\t\t\t= "; cin>>trf[b].nominal;						
										if(trf[b].nominal<10000)
										{cout<<"\n\t\tNOMINAL YANG ANDA MASUKKAN SALAH (MINIMAL 10000)!"; cout<<endl;}
										else if(sal>=trf[b].nominal)
										{
											cout<<"\nSILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
											cout<<"-------------------------------------------------------"<<endl<<endl;
											cout<<"TRANSAKSI ANDA BERHASIL DILAKSANAKAN"<<endl;
											cout<<"\tSALDO\t\t\t = "<<sal<<" - "<<trf[b].nominal<<endl;
											sal=sal-trf[b].nominal;
											cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl;
											cout<<"\n\nTERIMA KASIH ATAS KEPERCAYAAN ANDA"<<endl;
										}
										else
										{cout<<"\t\tSALDO ANDA TIDAK MENCUKUPI, SALDO ANDA SAAT INI : "; cout<<sal<<endl;}
									}
									else
									{goto tujuantrf;}
					
								}
								else if(trf[b].bank==2){
									tjntrf:
									cout<<"MASUKKAN NOMOR REKENING TUJUAN TRANSFER ANDA"<<"\n= ";cin>>trf[b].tujuan; //NO.REKENING TIDAK BOLEH LEBIH DARI 10 GIGIT
									cout<<"\t\t\t\t1. BENAR"<<endl;
									cout<<"\t\t\t\t2. SALAH"<<endl;
									cout<<" = ";
									cin>>angka;
									if(angka==1)
									{
										cout<<"MASUKKAN JUMLAH TRANSFER"<<endl;
										cout<<"RP\t\t\t= "; cin>>trf[b].nominal;						
										if(trf[b].nominal<10000)
										{cout<<"\n\t\tNOMINAL YANG ANDA MASUKKAN SALAH (MINIMAL 10000)!"; cout<<endl;}
										else if(sal>=trf[b].nominal)
										{
											cout<<"\nSILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
											cout<<"-------------------------------------------------------"<<endl<<endl;
											cout<<"TRANSAKSI ANDA BERHASIL DILAKSANAKAN"<<endl;
											cout<<"\tSALDO\t\t\t = "<<sal<<" - "<<trf[b].nominal<<endl;
											sal=sal-trf[b].nominal;
											cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl;
											cout<<"\n\nTERIMA KASIH ATAS KEPERCAYAAN ANDA"<<endl;
										}
										else
										{cout<<"\t\tSALDO ANDA TIDAK MENCUKUPI, SALDO ANDA SAAT INI : "; cout<<sal<<endl;}
									}
									else
									{goto tjntrf;}
							    }
									cout<<"TRANSAKSI LAGI? \t\t\t1. YA"<<endl;
									cout<<"\t\t\t\t\t2. TIDAK"<<endl;
									cout<<" = "; cin>>lagi;
										if (lagi == '1')
								        goto menu;
								        else if (lagi == '2')
								        {
								        goto keluar;}
								        else
								        {
								        cout<<"PILIHAN SALAH\n";
								        goto masih;}
								        system("cls");
												
						break;
						
						case '3':
						
							cout<<"\t\t<<PEMBELIAN>>"<<endl;
							cout<<"\n\t\tPULSA ISI ULANG"<<endl;
							
								cout<<"\n\tMASUKKAN NO.HP \t\t\t\t\t=  "; cin>>belipulsa[c].nomor;  //NO.HP TIDAK BOLEH LEBIH DARI 10 DIGIT
								belipulsa:
								cout<<"\tMASUKKAN NOMINAL (10000/20000/50000/100000)\t= "; cin>>belipulsa[c].nominal;
								switch(belipulsa[c].nominal)
								{
									case 10000:{goto trxpulsa; break;}
									case 20000:{goto trxpulsa; break;}
									case 50000:{goto trxpulsa; break;}
									case 100000:{goto trxpulsa; break;}
									default:
									{
										cout<<"\tNOMINAL YANG ANDA MASUKKAN SALAH"; cout<<endl;
										goto belipulsa;
										break;
									}
								}
								trxpulsa: //PERINTAH PENARIKAN PULSA
								if(sal<belipulsa[c].nominal)
								{cout<<"\t\tSALDO ANDA TIDAK MENCUKUPI, SALDO ANDA SAAT INI : "; cout<<sal<<endl;}
								else if(sal>=belipulsa[c].nominal)
								{
									cout<<"\nSILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
									cout<<"-------------------------------------------------------"<<endl<<endl;
									cout<<"TRANSAKSI ANDA BERHASIL DILAKSANAKAN"<<endl;
									cout<<"\tSALDO\t\t\t = "<<sal<<" - "<<belipulsa[c].nominal<<endl;
									sal=sal-belipulsa[c].nominal;
									cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl;
									cout<<"\n\nTERIMA KASIH ATAS KEPERCAYAAN ANDA"<<endl;
								}
								cout<<"TRANSAKSI LAGI? \t\t\t1. YA"<<endl;
								cout<<"\t\t\t\t\t2. TIDAK"<<endl;
								cout<<" = "; cin>>lagi;
									if (lagi == '1')
							        goto menu;
							        else if (lagi == '2')
							        {
							        goto keluar;}
							        else
							        {
							        cout<<"PILIHAN SALAH\n";
							        goto masih;}
							        system("cls");
			
						break;
						case '4':
						
							trxpmbyrn:
							cout<<"\n\t\t\t<<PEMBAYARAN>>"<<endl;
							cout<<"\t1. PAJAK"<<endl;
							cout<<"\t2. ASURANSI"<<endl;
							cout<<"\t3. TIKET"<<endl;
							cout<<"\n\t = ";
							cin>>pilihan;
							system("cls");
							if(pilihan==1)
							{
								cout<<"\t\t<<PEMBAYARAN PAJAK>>"<<endl;
								cout<<"\n\tMASUKKAN NO. WAJIB PAJAK \t= ";   //NO.WAJIB PAJAK TIDAK BOLEH LEBIH DARI 10 DIGIT 
								cin>>nopajak;
								cout<<"\n\tMASUKKAN NOMINAL \t\t= ";
								cin>>jumlah;
								cout<<"\nSILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
								cout<<"-------------------------------------------------------"<<endl<<endl;
								cout<<"TRANSAKSI ANDA BERHASIL DILAKSANAKAN"<<endl;
								cout<<"\tSALDO\t\t\t = "<<sal<<" - "<<jumlah<<endl;
								sal=sal-jumlah;
								cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl;
								cout<<"TERIMA KASIH ATAS KEPERCAYAAN ANDA"<<endl;
								cout<<"TRANSAKSI LAGI? \t\t\t1. YA"<<endl;
								cout<<"\t\t\t\t\t2. TIDAK"<<endl;
								cin>>lagi;
								system("cls");
									if (lagi == '1')
							        goto menu;
							        else if (lagi == '2')
							        {
							        goto keluar;}
							        else
							        {
							        cout<<"PILIHAN SALAH\n";
							        goto masih;}
							        system("cls");
							}
							else if(pilihan==2)
							{
								cout<<"\t\t<<PEMBAYARAN ASURANSI>>"<<endl;
								cout<<"\n\tMASUKKAN NOMINAL = ";
								cin>>jumlah;
								cout<<"\nSILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
								cout<<"-------------------------------------------------------"<<endl<<endl;
								cout<<"TRANSAKSI ANDA BERHASIL DILAKSANAKAN"<<endl;
								cout<<"\tSALDO\t\t\t = "<<sal<<" - "<<jumlah<<endl;
								sal=sal-jumlah;
								cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl;
								cout<<"TERIMA KASIH ATAS KEPERCAYAAN ANDA"<<endl;
								cout<<"TRANSAKSI LAGI? \t\t\t1. YA"<<endl;
								cout<<"\t\t\t\t\t2. TIDAK"<<endl;
								cin>>lagi;
								system("cls");
									if (lagi == '1')
							        goto menu;
							        else if (lagi == '2')
							        {
							        goto keluar;}
							        else
							        {
							        cout<<"PILIHAN SALAH\n";
							        goto masih;}
							        system("cls");
							}
							else if(pilihan==3)
							{
								cout<<"\t\t<<PEMBAYARAN TIKET>>"<<endl;
								cout<<"\n\tMASUKKAN NOMINAL = ";
								cin>>jumlah;
								cout<<"\nSILAHKAN TUNGGU TRANSAKSI SEDANG DIPROSES"<<endl;
								cout<<"-------------------------------------------------------"<<endl<<endl;
								cout<<"TRANSAKSI ANDA BERHASIL DILAKSANAKAN"<<endl;
								cout<<"\tSALDO\t\t\t = "<<sal<<" - "<<jumlah<<endl;
								sal=sal-jumlah;
								cout<<"\tSALDO ANDA SAAT INI\t = "<<sal<<endl;
								cout<<"TERIMA KASIH ATAS KEPERCAYAAN ANDA"<<endl;
								cout<<"TRANSAKSI LAGI? \t\t\t1. YA"<<endl;
								cout<<"\t\t\t\t\t2. TIDAK"<<endl;
								cin>>lagi;
								system("cls");
									if (lagi == '1')
							        goto menu;
							        else if (lagi == '2')
							        {
							        goto keluar;}
							        else
							        {
							        cout<<"PILIHAN SALAH\n";
							        goto masih;}
							        system("cls");
															
							}
							else
							{goto trxpmbyrn;}		
							getch();
															
						break;
						case '5':
							
							cout<<"\n\t\t\t\t<<INFO SALDO>>"; cout<<endl;  //cek saldo
							cout<<"\t\t SALDO ANDA SAAT INI ADALAH = "<<sal<<endl;
							cout<<"\nTEKAN               -> ENTER (UNTUK KEMBALI KE MENU UTAMA)";
							getch();
							goto menu;	
										
						break;
						case '6':
						
							cout<<"\n\t\t\t\t<<UBAH PIN>>"; cout<<endl;  //ganti pin
							cout<<"\t\tMASUKKAN PIN BARU : "; cin>>gtpin;
							pin=gtpin;
							cout<<"\n\t\tGANTI PIN SUCCESS........."<<endl;
							cout<<"\n\t SILAHKAN TEKAN ENTER UNTUK MELANJUTKAN TRANSAKSI";
							getch();
							system("cls");
							goto login;
							
						break;
						default:
						
							cout<<"\n\t\t\t\t......................NOT FOUND........................"<<endl;
							cout<<"\n\n\tSILAHKAN KEMBALI KE MENU UTAMA ----> (TEKAN ENTER)";
							getch();
							goto menu;
							break;
						
						
					}		
				}		
			}
			else if(paket==9){
				system("cls");
			keluar:
				system("cls");
				cout<<"\n\t\tTERIMA KASIH TELAH MELAKUKAN TRANSAKSI DI ATM KAMI "<<endl;
				cout<<"\n\t\t\t\t CREATED BY :\n\n\n";
				cout<<"\n\t\t\t******* PT BANK MERPATI *******\n";
				getch();
				
			}
			else{
				cout<<"\n\n\t\t................................NOT FOUND................................"<<endl;
    			cout<<"\n\t\t ************************ TEKAN ENTER UNTUK KELUAR *************************";
				
			}
	}
    else
	{
    	cout<<"\n\n\t\t................................NOT FOUND................................"<<endl;
    	cout<<"\n\t\t ************************ TEKAN ENTER UNTUK KELUAR *************************";
    }
    getch();
}
		
	
	

