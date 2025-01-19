#include<iostream>
using namespace std;

int main(){
    
    // 開大一點，避免 RE 發生
    int arr[10][10];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 6; j++){
            cin >> arr[i][j];
        }
    }

    bool is_found = false;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 6; j++){
            if (i - 1 >= 0 && i + 1 < 5){
                if (arr[i - 1][j] == arr[i][j] && arr[i + 1][j] == arr[i][j]){
                    is_found = true;
                    break;
                }
            }
            if (j - 1 >= 0 && j + 1 < 6){
                if (arr[i][j - 1] == arr[i][j] && arr[i][j + 1] == arr[i][j]){
                    is_found = true;
                    break;
                }
            }
        }
        if (is_found) break;
    }

    if (is_found){
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }

}
