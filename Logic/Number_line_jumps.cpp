#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++)
using namespace std;
typedef long long ll;

/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */

string kangaroo(int x1, int v1, int x2, int v2) {
    if(x2 > x1 && v2 > v1){
        return "NO";
    }
    double res = static_cast<double>(x2-x1)/static_cast<double>(v1-v2);
    if(res > 0 && res < 10001 && fmod(res,1) == 0){
        return "YES";
    }
    return "NO";
}

int main(){
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    cout << kangaroo(x1, v1, x2, v2) << endl;
    return 0;
}
