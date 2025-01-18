#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int h[110];

    for (int i = 0; i < n; i++){
        cin >> h[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++){
        if (h[i] == 0){
            if (i == 0){
                ans += h[i + 1];
            }
            else if (i == n - 1){
                ans += h[i - 1];
            }
            else{
                if (h[i - 1] < h[i + 1]){
                    ans += h[i - 1];
                }
                else{
                    ans += h[i + 1];
                }
            }
        }
    }

    cout << ans << '\n';

}
