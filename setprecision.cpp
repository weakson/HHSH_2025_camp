#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    double p = 3.1415926535;

    cout << setprecision (4) << p << '\n';

    cout << fixed << setprecision (6) << p << '\n';

}
