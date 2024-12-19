#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a value of n";
    cin>>n;
    string answer;
    if(n%3==0 && n%5==0){
        answer = "FizzBuzz";
    }else if(n%3==0){
        answer = "Fizz";
    }else if(n%5 == 0){
        answer = "Buzz";
    }else{
        answer = to_string(n);
    }
    cout<<answer;
    return 0;
}