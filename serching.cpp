#include <iostream>
using namespace std;

bool sequentialsearch(int dataelement[], int n, int key){
    bool found = false;
    for (int i=0; i<n; i++){
        if(dataelement[i] == key){
            found = true;
            break;
        }
    }
      return found;
}

int main(){
    int dataelement[5] = {5,3,7,1,10};
    int key = 7;
    bool found = sequentialsearch(dataelement,5,key);
    if (found){
        cout << "the searched value is available";
    }
    else{
        cout << "the searched value is not available";
    }

    return 0; 
}