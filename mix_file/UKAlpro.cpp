#include <iostream>
using namespace std;
int main() {
  int i, j, m, n, matrix1[10][10], matrix2[10][10], hasil[10][10], panggil2, jumlah, k;
  char panggil1;
  
  jumlah = 0;
  
  cout << "Masukkan jumlah baris matriks: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> n;
  
  cout << "Masukkan nilai matriks \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cout<<"Nilai matriks [" << i << "," << j << "] :" ; cin >> matrix1[i][j];
    }
  }
  
  
  cout << "NILAI MATRIKS: \n";
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      cout << matrix1[i][j] << "\t";
    }
    cout << endl;
  }
  
  cout << "Panggil i / j : ";
  cin >> panggil1;
  panggil2=matrix1[i][j]+matrix2[i][j];
  cout << "Nomor Baris / Kolom yang ingin dijumlahkan : ";
  cin >> panggil2;
  
  if(panggil1 == 'i'){
	for(k=0; k<m+1; k++){
		jumlah = jumlah + matrix1[i][panggil2];
		cout<<jumlah;
	}
  }
  
  return 0;
}
