#include<iostream>
using namespace std;

int main(){

    int N, P;
    cin >> N >> P;

    int ans = 0;

    for (int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;

        if (tmp < P){
            ans++;
        }
    }

    cout << ans << '\n';

}
