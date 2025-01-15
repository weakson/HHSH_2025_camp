#include<iostream>
using namespace std;

int main(){
    
    int i = 1, cnt = 0;
    while (i <= 5){
        cout << "i = " << i << '\n';

        int j = 1;
        while (j <= 4){
            cout << "    j = " << j << '\n';
            j++;
            cnt++;
        }

        i++;
    }

    cout << "總共跑了 " << cnt << " 次\n";

}
