#include <iostream>
using namespace std;
bool binaryseacrh(int dataelement[],int n, int key){
    int top = n-1, bottom = 0, middle;
    bool found = false;
    while (top >= bottom){
        middle = bottom + (top - bottom)/2;
        if (dataelement[middle] == key){
            found = true;
            break;
        }
        else if (dataelement[middle] < key){
            bottom = middle + 1;
        }
        else{
            top = middle - 1;
        }
    }
    return found;
}
int main(){
    int dataelement[] = {10,20,30,40,50,60,70};
    int n = 7;
    int key = 35;
    if(binaryseacrh(dataelement, n, key))
    cout << "element found";
else
cout << "element not found";
return 0;
}