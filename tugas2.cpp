#include<iostream>
using namespace std;
// Nama : Awaludin Gymnastiar
//Kelas : A11.4211
//Nim : A11.2022.14414

//1. fungsi max
int maxNum(int a, int b){
    int max;
    if (a>b){
        max=a;
    }else {
        max = b;
    }
    return max;
    }

//2.fungsi min
int minNum(int c, int d){
    int min;
    if (c<d){
        min=c;
    }else {
        min = d;
    }return min;
}

//3. fungsi max Array
int arr[] = {5, 8, 3, 2, 1, 9, 4};
int n = sizeof(arr) / sizeof(arr[0]);
int maxArray(int arr[], int n) {
    int max_num = arr[0]; // Inisialisasi nilai maksimum dengan elemen pertama array
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_num) {
            max_num = arr[i]; // Perbarui nilai maksimum jika elemen berikutnya lebih besar
        }
    }
    return max_num;


}

//4. fungsi min Array
int Arr[] = {5, 8, 3, 2, 1, 9, 4};
int m = sizeof(Arr) / sizeof(Arr[0]);
int minArray(int Arr[], int m) {
    int min_num = Arr[0]; // Inisialisasi nilai maksimum dengan elemen pertama array
    for (int i = 1; i < m; i++) {
        if (Arr[i] < min_num) {
            min_num = Arr[i]; // Perbarui nilai maksimum jika elemen berikutnya lebih besar
        }
    }
    return min_num;

}

//5. fungsi is Event
bool isEvent(int num){
    if(num % 2 == 0){
        cout << num << " adalah angka genap" << endl;
    }
    else{
        cout << num << " adalah angka ganjil" << endl;
    }
    return isEvent;
}

//6. Fungsi is Odd
bool isOdd(int f){
    if(f % 2 == 1){
        cout << f << " adalah angka ganjil" << endl;
    }
    else{
        cout << f <<" adalah angka genap" << endl;
    }
    return isOdd;
}

//7. Fungsi is Factor
bool isFactor(int num, int factor){
    if (num % factor == 0){
        cout << num << " faktor dari " << factor << endl;
    }else {
        cout << num << " bukan faktor dari " << factor << endl;
    }
    return isFactor;
}
//8. Fungsi Sum Event
int sumEvent( int h ) {
      int j;
      int sumt = 0;
      cout << "Odd numbernya adalah : ";
      for( j = 2; j <= h; j++ ) {
          if( h % 2 == 0 ) {
             cout << j << ", ";
             sumt = sumt + j;
             }
          }
   cout << endl;
   return sumt;
}
//9. Fungsi Sum Odd
int sumodd( int f ) {
      int g;
      int sumy = 0;
      cout << "Odd numbernya adalah : ";
      for( g = 1; g <= f; g++ ) {
          if( g % 2 == 1 ) {
             cout << g << ", ";
             sumy = sumy + g;
             }
          }
   cout << endl;
   return sumy;
}

main(){
    cout << maxNum(8,7) << endl;
    cout << minNum(12,5);

    cout << endl;
    cout << endl;

    cout << "Nilai maksimum dari array adalah: " << maxArray(arr, n) << endl;
    cout << "Nilai minimum dari array adalah : " << minArray(Arr,m) << endl;

    cout << endl;
    cout << endl;

    isEvent(8);
    isOdd(7);

    cout << endl;
    cout << endl;


    int num = 12;
    int factor=3;
    isFactor(num,factor);

    cout << endl;
    cout << endl;

    int sumt = sumEvent( 12 );
    cout << "Sum Eventnya adalah : " << sumt;
    cout << endl << endl;

    int sumy = sumodd( 15 );
    cout << "Sum Oddnya adalah : " << sumy;
    cout << endl << endl;

}



