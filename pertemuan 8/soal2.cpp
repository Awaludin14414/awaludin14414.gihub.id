/*
2. Buatlah program yang menerapkan 2 metode (sorting) yang anda ketahui
beserta contoh pemanggilannya di program main body (selain Bogosort). Pengurutan
dilakukan secara descending(besar ke kecil). Contoh : A[]={5,4,3,2,2,1,1}.

Nama 1: Awaludin Gymnastiar
Kelas : 4211
Nim   : A11.2022.14414
*/
#include<iostream>
using namespace std;


// bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                // Tukar elemen jika arr[j] lebih kecil dari arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// QUICKSORT
void quicksort(int arr[], int left, int right) {
    int i = left;
    int j = right;
    int tmp;
    int pivot = arr[left];

    while (i <= j) {
        while (arr[i] > pivot)
            i++;
        while (arr[j] < pivot)
            j--;
        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    }

    if (left < j)
        quicksort(arr, left, j);
    if (i < right)
        quicksort(arr, i, right);
}

void tukar(int& a , int& b){
        int temp = a;
        a = b;
        b = temp;
    }

int main(){
    int arr[]={5,4,3,2,2,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "1. Array setelah diurutkan dengan metode bubble sort secara descending: ";
    for (int i = 0; i<n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;

    cout << "2. Array setelah diurutkan dengan metode Quicksort secara descending: ";
    for (int i = 0; i<n; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}
