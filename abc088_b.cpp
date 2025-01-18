#include<iostream>
using namespace std;

int main(){

    int N;
    cin >> N;

    int a[110];
    
    // 因為題目用 1 ~ N 舉例，這邊我們也跟著用 1 ~ N，方便思考
    for (int i = 1; i <= N; i++){
        cin >> a[i];
    }

    int ans = 0;

    for (int i = 1; i <= N; i++){
        int Max = -1, idx;
        for (int j = 1; j <= N; j++){
            if (a[j] > Max){
                Max = a[j];
                idx = j;
            }
        }
        if (i % 2 == 1){
            ans += Max;
        }
        else{
            ans -= Max;
        }
        a[idx] = -1;
    }

    cout << ans << '\n';

}
