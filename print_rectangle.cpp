#include<iostream>
using namespace std;

int main(){

    int n, m;
    cin >> n >> m;

    int i = 0;
    while (i < n){
        int j = 0;
        while (j < m){
            cout << '*';
            j++;
        }
        i++;
        cout << '\n';
    }

}
