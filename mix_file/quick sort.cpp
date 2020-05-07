#include <iostream>
using namespace std;
void masuk_data(int A[], int n) {
int i;
for (i = 0; i < n; i++) {
cout << "Data ke-"<<i+1<<": ";
cin >> A[i];
}
}
void cetak_data(const int A[], int n) {
int i;
for (i = 0; i < n; i++)
cout <<A[i];
cout << "\n";
}
void tukar (int *a, int *b)
{ int temp;
temp = *a;
*a = *b;
*b = temp;}

void quick_sort(int data[], int L, int R) {
int i, j, p;
p = data[(L+R) / 2];
i = L;
j = R;
while (i<=j) {
while (data[i] < p) i++;
while (data[j] > p) j--;
if (i<=j)
{ tukar(&data[i], &data[j]);
i++;
j--;
}
}
if (L < j) quick_sort(data,L,j);
if (i < R) quick_sort(data,i,R);
}

 main() {
int data[10], n;
cout << "Banyak data : ";
cin >> n;
masuk_data(data,n);
cetak_data(data,n);
quick_sort(data,0,n-1);
cetak_data(data,n);
}
