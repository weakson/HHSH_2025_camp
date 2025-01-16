#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    // 用 prime_factor 表示質因數，初始化為最小質數 2
    int prime_factor = 2;

    while (n != 1){

        // 計算 n 可以被當前的 prime_factor 除幾次
        int cnt = 0; 

        while (n % prime_factor == 0){
            n /= prime_factor;
            cnt++;
        }

        // cnt 若等於 0，則表示 n 沒有這個質因數
        if (cnt != 0){
            cout << prime_factor;

            // 若 cnt 等於 1，表示只有 1 次方，不用特別印出來
            // 反之要把幾次方印出來
            if (cnt != 1){
                cout << '^' << cnt;
            }

            // 若 n 等於 1，則不會再有因數
            // 反之還會有因數，需輸出乘號
            if (n != 1){
                cout << " * ";
            }
        }

        prime_factor++;
    }

    cout << '\n';

}
