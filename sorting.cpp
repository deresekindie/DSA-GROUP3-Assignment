#include <iostream>
using namespace std;
//swap values
void swap(int &x, int &y){
    int temp;
    temp=x;
    x = y;
    y=temp;
}
//simple sort
void simplesort(int dataelement[],int n){
    for (int i=0; i < n; i++){
    for (int j = i + 1; j < n; j++){
    if (dataelement[i] > dataelement[j]){
    swap(dataelement[i], dataelement[j]);
    }
    }
    }
}
// bubble sort
void bubblesort( int dataelement[], int n){
    for (int i=0; i<n-1; i++){
        for(int j=n-1; j>i; j--){
            if (dataelement[j] < dataelement[j-1]){
                swap(dataelement[j], dataelement[j-1]);
            }
        }

    }
}
//selection sort
void selectionsort(int dataelement[], int n){
    for (int i = 0; i < n - 1; i++){
        int min_index = i;
        for (int j = i + 1; j < n; j++){
            if (dataelement[j]<dataelement[min_index]){
                min_index = j;
            }
        }
        swap(dataelement[i], dataelement[min_index]);
    }
}

//insertion sort
void insertionsort(int dataelement[], int n){
    for (int i=1; i<n; i++){
        int key = dataelement[i];
        int j= i-1;
        while (j>= 0 && dataelement[j] > key){
            dataelement [j+1] =dataelement[j];
             --j;
        }
        dataelement[j+1] = key;
    }
   
}

int main(){
    int dataelement[10] ={5,8,4,9,6,2,3,7,1,10};
    for (int i=0; i<10; i++){
        cout << dataelement[i] << " ";
    }
    simplesort(dataelement,10);
   //bubblesort(dataelement,10);
   //selectionsort(dataelement,10);
   //insertionsort(dataelement,10);
    cout << endl;
     for (int i=0; i<10; i++){
        cout << dataelement[i] << " ";
    }
    return 0;
}