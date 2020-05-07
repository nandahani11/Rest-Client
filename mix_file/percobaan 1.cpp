#include<iostream>
using namespace std;

class Kalkulator{
	void_tambah();
	void_kurang();
	void_kali();
	void_bagi();
};

void_tambah(){
	int a, b;
	cout<<"OPERASI PENJUMLAHAN"<<endl<<endl;
	cout<<"Masukkan angka pertama : "; cin>>a;
	cout<<"Masukkan angka keduad : "; cin>>b;
	cout<<"hasil penjumlahan : "<< a+b ;
}

void_kurang(){
	int a, b;
	cout<<"Masukkan angka pertama : "; cin>>a;
	cout<<"Masukkan angka keduad : "; cin>>b;
	cout<<"hasil penjumlahan : "<< a-b ;
}

main(){
	void_tambah();
	void_kurang();
}
