#include<iostream>
using namespace std;

int main(){

    int N;
    cin >> N;

    // 因為等等要對 cnt 進行運算，所以要先初始化為 0
    int cnt[1010] = {};
    int M = 0;
    
    for (int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;

        // 如果 tmp 是第一次出現，M ++
        if (cnt[tmp] == 0){
            M++;
        }
        cnt[tmp]++;
    }

    cout << M << '\n';

    for (int i = 1; i <= 1000; i++){
        if (cnt[i] != 0){
            cout << i << ' ';
        }
    }
    
    cout << '\n';

}
