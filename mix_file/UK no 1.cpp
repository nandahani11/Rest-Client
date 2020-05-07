#include<iostream>

using namespace std;

void left(string b4, int a)
{
	for(int i=0; i<a; i++){
		cout<<b4[i];
	}
	cout<<endl;
}

void right(string b4, int a){
	for(int i=(25-a); i<25; i++){
		cout<<b4[i];
	}
	cout<<endl;
}

void mid(string b4, int a, int b){
	for(int i=(a-1); i<(a+b); i++){
		cout<<b4[i];
	}
	cout<<endl;
}

main(){
	string b4 = "Algoritma dan Pemrograman";
	left(b4, 12);
	cout<<endl;
	right(b4, 6);
	cout<<endl;
	mid(b4, 11, 3);
	cout<<endl;
}
