#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'gameWithCells' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER m
 */

int gameWithCells(int n, int m) {
    int res = ((n/2)+(n%2)) * ((m/2)+(m%2));
    return res;
}

int main(){
    int n{}, m{}, res{};
    cin >> n >> m;
    res = gameWithCells(n, m);
    cout << res << endl;
    return 0;
}