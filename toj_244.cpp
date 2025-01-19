#include<iostream>
using namespace std;

int main(){

    int n;
    string s, ans;

    cin >> n >> s;

    for (int i = 0; i < n; i++){
        if (s[i] >= 'A' && s[i] <= 'Z'){
            ans += 'a' + (s[i] - 'A');
        }
        else{
            ans += 'A' + (s[i] - 'a');
        }
    }

    cout << ans << '\n';

}
