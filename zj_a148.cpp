#include<iostream>
using namespace std;

int main(){
    
    int n;
    
    while (cin >> n){

        int sum = 0; // 要記得初始化為 0
        for (int i = 0; i < n; i++){
            int tmp;
            cin >> tmp;
            sum += tmp;
        }

        if (sum > 59 * n){
            cout << "no\n";
        }
        else{
            cout << "yes\n";
        }

    }

}
