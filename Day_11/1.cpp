#include <iostream>
using namespace std;

void sortZeroOne(int arr[],  int size){
    int zero = 0 , one = 0;
    for(int i = 0 ; i < size ; i++){
        if(arr[i]==0) zero++;
        if(arr[i]==1) one++;
    }
    fill(arr,arr+zero,0);
    fill(arr+zero,arr+size,1);
    }


int main() {
    int arr[] = {0,1,1,0,1,0,1,1,0};
    int size = 9;
    sortZeroOne(arr, size);
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;

}