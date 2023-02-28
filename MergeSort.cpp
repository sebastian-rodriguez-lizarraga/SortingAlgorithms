#include <iostream>
using namespace std;



void merge(int a[], int s,int m, int e){
    int* buffer= new int [e+1];     //for the total size of the merged array (crea espacio en memoria para un arr de tamaño e+1
    int k = s;
    while(k <= e){
        buffer[k] = a[k];
        k = k + 1;
    }
    int i = s;
    int j = m + 1;
    k = s;

    while(i <= j && j <= s){
        if(buffer[i] <= buffer[j]){
            a[k] = buffer[i];
            i = i + 1;
        }
        else{
            a[k] = buffer[j];
        }
    }
}


//auxiliary function
void mrgSort(int a[], int s, int e){
    if(s>= e){
        return;
    }
    int m = (s+e)/2;
    mrgSort(a,s,m);
    mrgSort(a,m+1,e);
    merge(a,s,m,e);
}

void mrgSort(int a[], int n){ //wrapper function
    mrgSort(a, 0,n -1 );
}



int main(){



}
