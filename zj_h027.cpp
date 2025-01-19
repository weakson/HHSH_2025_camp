#include<iostream>
using namespace std;

int main(){

    int s, t, n, m, r;
    cin >> s >> t >> n >> m >> r;

    int A[20][110], B[20][110];
    int A_sum = 0;

    for (int i = 0; i < s; i++){
        for (int j = 0; j < t; j++){
            cin >> A[i][j];
            A_sum += A[i][j];
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> B[i][j];
        }
    }

    int ans = 0, Min = 10000;

    // 把 B 陣列的格子都列舉一次，當作 A 陣列的左上角
    // i 表示 B 陣列的第 i 行
    // j 表示 B 陣列第 i 行的第 j 個數字
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){

            // 把 B[i][j] 當作 A 的左上角會超出 B 的範圍
            // 那就不用算
            if (i + (s - 1) >= n || j + (t - 1) >= m) continue;

            int dis = 0, sum = 0;

            // k 表示 A 陣列的第 k 行
            // l 表示 A 陣列第 k 行的第 l 個數字
            for (int k = 0; k < s; k++){
                for (int l = 0; l < t; l++){
                    sum += B[i + k][j + l];
                    if (A[k][l] != B[i + k][j + l]){
                        dis++;
                    }
                }
            }

            if (dis <= r){
                ans++;
                if (abs (sum - A_sum) < Min){
                    Min = abs (sum - A_sum);
                }
            }

        }
    }

    cout << ans << '\n';
    if (ans == 0){
        cout << -1 << '\n';
    }
    else{
        cout << Min << '\n';
    }

}
