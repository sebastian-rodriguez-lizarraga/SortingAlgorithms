#include <iostream>
using namespace std;

void swap(int a[], int x, int y){
    int temp =a[x];
    a[x] = a[y];
    a[y] = temp;

}

int locOfSmallest(int a[], int s, int e){
    int i = s;
    int j = i;
    while(i<=e){
        if(a[i] < a[j]){
            j = i;
        }
        i++;
    }
    return j;
}

void selSort(int a[], int n){
    int i = 0;
    while(i<n-1){
        int j = locOfSmallest(a,i,n-1);
        swap(a,i,j);
        i++;
    }
}

void display(int a[], int n){
    for(int i= 0; i<n;i++){
        cout<< a[i] << "," ;
    }
    cout<<endl;

}

int main(){
    int arr[] = {4,5,2,37};
    int size = sizeof(arr)/sizeof(int);
    cout<<"desordenado: " <<endl;
    display(arr, size);
    selSort(arr,size);
    cout<<"ordenado: "<<endl;
    display(arr,size);

}