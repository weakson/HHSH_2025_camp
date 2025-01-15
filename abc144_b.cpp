#include<iostream>
using namespace std;

int main(){

    int N;
    cin >> N;

    bool is_found = false; // 判斷有沒有找到 b，一開始假設沒有（false）

    for (int a = 1; a <= 9; a++){
        if (N % a == 0 && N / a <= 9){
            // 找到 b 了，將 is_found 設為 true
            is_found = true;
        }
    }

    // is_found 為 true 表示有找到 b
    // 反之表示沒找到
    if (is_found) cout << "Yes\n";
    else cout << "No\n";

}
