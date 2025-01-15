#include<iostream>
using namespace std;

int main(){

    int N;
    cin >> N;

    bool is_found = false;

    for (int i = 1; i <= 9; i++){
        if (N % i == 0 && N / i <= 9){
            is_found = true;
        }
    }

    if (is_found) cout << "Yes\n";
    else cout << "No\n";

}
