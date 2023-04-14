#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=inc; x<limit; x++);
using namespace std;
typedef long long ll;

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    int n = arr[0].size();
    int it1{}, it2{n-1}, sum1{}, sum2{};
    for(int i=0; i<n; i++){
        sum1+= arr[i][it1];
        sum2 += arr[i][it2];
        it1++;
        it2--;
    }
    return abs(sum1 - sum2);     
}

int main(){
    int t{};
    vector<vector<int>> matriz = {
        {1, 2, 3},
        {4, 5, 6},
        {9, 8, 9}
    };
    int result = diagonalDifference(matriz);

    cout << result << "\n";
    return 0;
}
