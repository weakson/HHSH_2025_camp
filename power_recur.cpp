#include<iostream>
using namespace std;

int f (int a, int n){

    if (n == 0){
        return 1;
    }

    return a * f (a, n - 1);

}

int main(){

    int a, n;
    cin >> a >> n;

    cout << f (a, n) << '\n';

}
