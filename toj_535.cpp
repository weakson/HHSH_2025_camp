#include<iostream>
using namespace std;

int main(){

    int s;
    cin >> s;

    if (s <= 59){
        cout << "F\n";
    }
    else if (s <= 69){
        cout << "D\n";
    }
    else if (s <= 79){
        cout << "C\n";
    }
    else if (s <= 89){
        cout << "B\n";
    }
    else if (s <= 99){
        cout << "A\n";
    }
    else{
        cout << "S\n";
    }

}
