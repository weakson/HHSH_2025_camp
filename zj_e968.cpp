#include<iostream>
using namespace std;

int main(){

    int n, a, b, c;

    cin >> n >> a >> b >> c;

    for (int i = n; i >= 1; i--){
        if (i != a && i != b && i != c){
            cout << "No. " << i << '\n';
        }
    }
}
