#include<iostream>
using namespace std;

long long a[30];
int n;
long long ans = 1000000000000;

void sol (int i, long long A, long long B){

    if (i == n){
        long long tmp = abs (A - B);
        if (tmp < ans){
            ans = tmp;
        }
        return;
    }

    sol (i + 1, A + a[i], B);
    sol (i + 1, A, B + a[i]);

    return;

}

int main(){

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    sol (0, 0, 0);

    cout << ans << '\n';

}
