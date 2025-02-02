#include<iostream>
using namespace std;

int n;
int ans[20];
bool is_in[20];

void sol (int i){

    if (i == n){
        for (int j = 0; j < n; j++){
            cout << ans[j] << ' ';
        }
        cout << '\n';
        return;
    }

    for (int k = 1; k <= n; k++){
        if (!is_in[k]){

            is_in[k] = true;
            ans[i] = k;

            sol (i + 1);

            is_in[k] = false;
            ans[i] = 0;

        }
    }
}

int main(){

    ios::sync_with_stdio(0), cin.tie(0);

    cin >> n;

    sol (0);

}
