#include<iostream>
using namespace std;

int main(){
    
    int a;
    cin >> a;

    int Max = -1;

    for (int i = 0; i < a; i++){
        int tmp;
        cin >> tmp;
        if (tmp > Max){
            Max = tmp;
        }
    }

    cout << Max << '\n';

}
