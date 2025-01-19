#include<iostream>
using namespace std;

int main(){

    int n, m;

    while (cin >> n >> m){

        int arr[110][110];

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> arr[i][j];
            }
        }

        for (int j = 0; j < m; j++){
            for (int i = 0; i < n; i++){
                cout << arr[i][j] << ' ';
            }
            cout << '\n';
        }

    }

}
