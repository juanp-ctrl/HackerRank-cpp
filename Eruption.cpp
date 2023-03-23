#include <cmath>
#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    const double pi = 3.14159265358979323846;
    long double a;
    scanf("%Lf", &a);

    long double c = 2 * pi * sqrt(a/pi);
    cout << setprecision(20) << c << endl;
    return 0;
}