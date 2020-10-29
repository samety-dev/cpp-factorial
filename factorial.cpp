#include <stdio.h>
#include <iostream>
#define i int

using namespace std;

i factorial(int n);
int main(){

    i number;

    cout << "Enter Number: " << endl;
    cin >> number;
    cout << factorial(number) << endl;
    return 0;
}


i factorial(i n){
    if(n > 1){
        return n * factorial(n - 1);
    }else{
        return 1;
    }
}