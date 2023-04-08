#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'lowestTriangle' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER trianglebase
 *  2. INTEGER area
 */

int lowestTriangle(int trianglebase, int area) {
    double result = static_cast<double>(2*area)/static_cast<double>(trianglebase);
    int res{};
    if(fmod(result,1) != 0){
        res = result+1;
        return res;
    }
    res = result;
    return res;
}

int main(){
    int n{}, b{}, a{}, h{};
    cin >> n;
    while(n--){
        cin >> b >> a;
        h = lowestTriangle(b,a);
        cout << h << endl;
    }
    return 0;
}