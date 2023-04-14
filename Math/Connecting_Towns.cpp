#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'connectingTowns' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER_ARRAY routes
 */

int connectingTowns(int n, vector<int> routes) {
    int res{1};
    for(int i : routes){
        res *= i;
        res = res%1234567;
    }
    return res;
}

int main(){
    int n{}, m{}, res{};
    cin >> n;
    vector<int> routes(n-1);
    for(int i=0; i<n-1; i++){
        cin >> routes[i];
    }
    res = connectingTowns(n, routes);
    cout << res << endl;
    return 0;
}