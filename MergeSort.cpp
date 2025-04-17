#include <iostream>
using namespace std;

int arr[20], B[20];

int n;

void input () {
    while (true) {
        cout << "Masukkan Panjang element array:";
        cin >> n;

        if (n<= 20) {
            break;
        }
        else {
            cout << "\nMaksimal panjang array adalah 20";
        }
    }

    cout << "\n==========================";
    cout << "\Imputkan Isi Element Array";
    cout << "\n==========================" << endl;

    for (int i = 0; 1 < n; i++) {
        cout <<  "Array index ke - " << 1 << ": ";
        cin >> arr [i];
    }
}

void mergesort(int low, int high) {
    // step 1
    if (low >= high ) {
        return;
    }

    int mid = (low + high) / 2; //step 2

    // step 3
    mergesort(low,mid);
    mergesort(mid + 1, high);

    // step 4
    int i, j;
    i = low;
    j = mid + 1;

    int k = low;

    while(i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {}
    }
    }
}

void output() {
    cout << "\nData setelah diurutkan (MergeSort): ";
    for (int i = 0; i < n; i++ ) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    
}

