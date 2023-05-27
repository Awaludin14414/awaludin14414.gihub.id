#include <iostream>
using namespace std;

// Nama  : Awaludin Gymnastiar
// Kelas : 4211
// Nim   : A11.2022.14414

// judul : Soal no 1, menentukan angka terkecil genap pada array {6,7,4,3,2} dengan fungsi ganjil

// kamus :
    bool Ganjil(int a);
    void angkecil(int Arr[], int n);
    int n;

// deskripsi :

    int main(){

    int A[]={6,7,4,3,2};
    n = sizeof (A)/ sizeof(A[0]);

    angkecil(A, n);

    return 0;
    }

    bool Ganjil(int a){
        if ( a % 2 == 1)
            return 1;
        else
            return 0;
    }

    void angkecil(int Arr[], int n ){
        int minim = Arr[0];
        int i = 0;
        int index = 0;

        while ( i < n){
            if(!Ganjil(Arr[i])){
                if (Arr[i] < minim){
                    minim = Arr[i];
                    index = i;
                }
            }
            i = i + 1;
        }
        cout << "angka terkecilnya = " << minim << endl;
        cout << "angka pada index = " << index << endl;
    }
