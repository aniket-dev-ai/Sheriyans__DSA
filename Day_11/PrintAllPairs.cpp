#include <iostream>
using namespace std;

void PrintPairs(int arr[] , int size){
    for(int i = 0 ; i < size; i++){
        for(int j = 0 ; j<size;j++){
            cout<<"{"<<arr[i]<<","<<arr[j]<<"} ";
        }
        cout<<endl;
    }
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = 6;
    PrintPairs(arr,size);
    return 0;
}