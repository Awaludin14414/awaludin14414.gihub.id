#include <iostream>
using namespace std;

/*
TUGASS 1
1. fungsi penjumlahan 2 bilangan
2. fungsi pengurangan 2 bilangan
3. fungsi menghitung jumlah nilai total dari sebuah array, contoh : [1,3,4,5] --> 13
4. Fungsi menghitung rata2 dari aray tsb. [1,3,4,5] -->13/4 <-- float, double / real
*/


// 1. Membuat Fungsi penjumlahan 2 bilangan
void penjumlahan(int a, int b)
    {
        printf("%d + %d = %d\n", a , b, a+b);
    }
//2. Fungsi Pengurangan 2 bilangan
void kurang (int c, int d)
{
    printf ("%x + %x = %x\n", c , d, c-d);
}

//3. Fungsi menghtung jumlah nilai total dari sebuah array
float hitungJumlah(float arr[], int n) {
   float total = 0;

   for(int i = 0; i < n; i++) {
      total += arr[i];
   }

   return total;
}
//4. fungsi menghitung rata2
float hitungRataRata(float arr[], int n) {
   float total = hitungJumlah(arr, n);

   return total / n;
}


int main (){
    penjumlahan (1, 4);
    kurang (5, 3);
    penjumlahan (2, 7);
    kurang (9, 5);

    cout << endl;

    int n;
    float rata_rata;

    cout << "Masukkan jumlah elemen dalam array: ";cin >> n;
    float arr[n];

    for(int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i+1 << ": "; cin >> arr[i];
        }
    rata_rata = hitungRataRata(arr, n);
        cout << "Jumlah nilai dalam array: " << hitungJumlah(arr, n) << endl;
        cout << "Rata-rata nilai dalam array: " << rata_rata << endl<<endl;
}
