#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++)
using namespace std;
typedef long long ll;

/*
 * Complete the 'strangeGrid' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER r
 *  2. INTEGER c
 */

ll strangeGrid(ll r, ll c) {
    ll result{};
    if(r%2 == 0){
        result = (((r/2)-1) * 10) + ((2*c)-1);
    }
    else{
        result = ((r/2) * 10) + (2*(c-1));
    }
    return result;
}


int main(){
    ll r{}, c{};
    cin >> r >> c;
    cout << strangeGrid(r,c) << endl;
    return 0;
}
