#include<iostream>
using namespace std;
/*
nama    : Awaludin Gymnastiar
Nim     : A11.2022.14414
Kelas   : A11.4211
*/
//judul : membuat fungsi rekursif
//kamus
int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
int bagi(int a, int b);
int pangkat(int a, int b);

//1. Tambah
int tambah (int a,int b)
{
    if (a == 0)
    {
        return b;
    }else
    {
        return 1 + tambah(a-1,b);
    }
}
//2. Kurang
int kurang (int a, int b)
{
    if ( b == 0)
    {
        return a;
    }else
    {
        return -1 + kurang(a,b-1);
    }
}
//3. Kali
int kali (int a,int b)
{
    if (a == 1)
    {
        return b;
    }else
    {
        return b + kali(a-1,b);
    }
}
//4. Bagi
int bagi (int a,int b)
{
    if (a < b)
    {
        return 0;
    }else
    {
        return 1 + bagi(a-b,b);
    }
}
//5. Pangkat
int pangkat (int a,int b)
{
    if (b == 0)
    {
        return 1;
    }else
    {
        return a * pangkat(a,b-1);
    }
}

// deskripsi
int main(){
    int a;
    int b;
    cout << "masukkan angka pertama : ";
    cin >> a;
    cout << "masukkan angka kedua : ";
    cin >> b;
    cout << "1. Tambah  : " << tambah(a,b) << endl;
    cout << "2. Kurang  : " << kurang(a,b) << endl;
    cout << "3. Kali    : " << kali(a,b) << endl;
    cout << "4. Bagi    : " << bagi(a,b) << endl;
    cout << "5. Pangkat : " << pangkat(a,b) << endl;
}
