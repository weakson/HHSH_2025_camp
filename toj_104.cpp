#include<iostream>
using namespace std;

int main(){
    
    int N;
    cin >> N;

    // 用 i 表示當前是第幾列
    for (int i = 1; i <= N; i++){

        // 先處理空格
        for (int j = 0; j < N - i; j++){
            cout << ' ';
        }

        // 再處理星星
        for (int j = 0; j < 2 * i - 1; j++){
            cout << '*';
        }

        // 每一列結束要記得換行
        cout << '\n';

    }

}
