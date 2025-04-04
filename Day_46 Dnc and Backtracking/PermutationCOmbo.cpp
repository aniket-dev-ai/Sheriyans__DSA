#include <iostream>
using namespace std;

int k = 0; // Global variable to count permutations 
void printpermutation(string str , int i){
    if(i>=str.length()){
        cout<<str<<endl;
        k++;
        return;
    }
    for(int j = i; j<str.length();j++){
        swap(str[i],str[j]);
        printpermutation(str,i+1);


    }
}

int main() {
    string str = "abcde";
    cout << "All permutations of " << str << " are:\n";
    printpermutation(str, 0);
    cout << "Total permutations: " << k << endl; 
    return 0;
}