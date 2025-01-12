#include<iostream>
using namespace std;

int main(){

    int a1 = 10;
    int a2 = 10;

    cout << "a1 = " << a1 << '\n'; // a1 = 10
    cout << "a2 = " << a2 << '\n'; // a2 = 10

    cout << "a1++ = " << a1++ << '\n'; // a1++ = 10
    cout << "++a2 = " << ++a2 << '\n'; // ++a2 = 11
    
    cout << "a1 = " << a1 << '\n'; // a1 = 11
    cout << "a2 = " << a2 << '\n'; // a2 = 11

}
