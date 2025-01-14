#include<iostream>
using namespace std;

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    int tmp;
    if (a > c){
        tmp = a;
        a = c;
        c = tmp;
    }
    if (b > c){
        tmp = b;
        b = c;
        c = tmp;
    }
    if (a > b){
        tmp = a;
        a = b;
        b = tmp;
    }

    cout << a << ' ' << b << ' ' << c << '\n';
    if (a + b <= c){
        cout << "No\n";
    }
    else if (a * a + b * b < c * c){
        cout << "Obtuse\n";
    }
    else if (a * a + b * b == c * c){
        cout << "Right\n";
    }
    else{
        cout << "Acute\n";
    }

}
