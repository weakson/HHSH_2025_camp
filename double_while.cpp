#include<iostream>
using namespace std;

int main(){
    
    int i = 1, cnt = 0;
    int n = 5, m = 4;

    while (i <= n){
        cout << "i = " << i << '\n';

        int j = 1;
        while (j <= m){
            cout << "    j = " << j << '\n';
            j++;
            cnt++;
        }

        i++;
    }

    cout << "總共跑了 " << cnt << " 次\n";

}
