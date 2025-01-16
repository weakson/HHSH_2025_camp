#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for (int i = 0; i < n; i++){

        int f;
        cin >> f;

        long long sum = 0;

        for (int j = 0; j < f; j++){

            long long A, num, lev;
            cin >> A >> num >> lev;

            sum += A * lev;

        }

        cout << sum << '\n';

    }

}
