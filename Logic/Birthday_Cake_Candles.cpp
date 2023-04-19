#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++)
using namespace std;
typedef long long ll;

/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(vector<int> candles) {
    sort(candles.begin(), candles.end());
    int cant{};
    for(int i=candles.size()-1; candles[i]==candles[candles.size()-1]; i--){
        cant++;
    }
    return cant;
}

int main(){
    int n{};
    cin >> n;
    vector<int> candlesHeights(n);
    fore(i,0,n){
        cin >> candlesHeights[i];
    }
    cout << birthdayCakeCandles(candlesHeights) << endl;
    return 0;
}
