#include<iostream>
using namespace std;

int main(){
    
    int a = 5, b = 10;

    // a 是否大於 b，或 a 是否大於 10
    cout << (a > b || a > 10) << '\n';

    // a - b 是否介於 -10 到 10 之間，不含邊界
    cout << ((a - b > -10) && (a - b < 10)) << '\n';

    // a * b 是否為正整數
    cout << (a * b > 0) << '\n';

    // b / a 是否為偶數
    cout << ((b / a) % 2 == 0) << '\n';

}
