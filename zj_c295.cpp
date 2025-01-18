#include<iostream>
using namespace std;

int main(){

    int N, M;

    // 最多存 N 個數字，N <= 20，多開 10 格比較保險
    // Max[i] 代表第 i 列的最大值
    int Max[30]; 

    cin >> N >> M;

    // 計算總和
    int sum = 0;

    for (int i = 0; i < N; i++){

        // 當前這列的最大值
        int Row_Max = -1;

        for (int j = 0; j < M; j++){
            int tmp;
            cin >> tmp;

            if (tmp > Row_Max){
                Row_Max = tmp;
            }
        }

        sum += Row_Max;
        Max[i] = Row_Max;
    }

    cout << sum << '\n';

    // 計算有幾個數字可以整除 sum
    int cnt = 0;

    for (int i = 0; i < N; i++){
        if (sum % Max[i] == 0){
            if (cnt == 0){
                cout << Max[i];
            }
            else{
                cout << ' ' << Max[i];
            }
            cnt++;
        }
    }

    if (cnt == 0){
        cout << -1;
    }

    cout << '\n';

}
