#include<iostream>
using namespace std;

int main(){

    int N;
    cin >> N;

    string s[20];

    for (int i = 0; i < N; i++){
        string tmp;
        int num;

        cin >> tmp >> num;

        s[num] = tmp;
    }

    for (int i = 1; i <= 10; i++){
        if (s[i].empty()){
            cout << "EMPTY\n";
        }
        else{
            cout << s[i] << '\n';
        }
    }

}
