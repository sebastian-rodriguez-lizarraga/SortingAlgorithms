#include<iostream>
using namespace std;



void swap(int arr[], int x, int j){
    int temp = arr[x];
    arr[x] = arr[j];
    arr[j] = temp;
}

void bubble(int a[], int n){
    int i = n-1;
    while(i>0){
        if(a[i] < a[i-1]){
            swap(a,i,i-1);
        }
        i--;
    }
}

void bblSort(int a[], int n){
    int i = 0;
    while(i < n-1){
        bubble(a,n);
        i++;
    }
}

void display(int a[], int n){
    int i = 0;
    while(i<n){
        cout<< a[i] << " ";
        i++;
    }
    cout<<endl;
}

int main(){

int arr[] = {23,21,4,5,6,77,54};
int size = sizeof(arr)/sizeof(int);

display(arr, size );
bblSort(arr, size);
display(arr,size);

    return 0;
};