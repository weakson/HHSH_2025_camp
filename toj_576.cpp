#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ans = 0;

    while (n != 0){
        ans++;
        n /= 10;
    }

    cout << ans << '\n';

}
