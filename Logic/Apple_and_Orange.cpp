#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++)
using namespace std;
typedef long long ll;

/*
 * Complete the 'countApplesAndOranges' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a
 *  4. INTEGER b
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int countApples{}, countOranges{};
    for(int i : apples){
        if((a+i) >= s && (a+i) <= t){
            countApples++;
        }
    }
    for(int o : oranges){
        if((b+o) >= s && (b+o) <= t){
            countOranges++;
        }
    }
    cout << countApples << "\n" << countOranges << endl;
}


int main(){
    int s, t, a, b, m, n;
    cin >> s >> t >> a >> b >> m >> n;
    vector<int> apples(m);
    vector<int> oranges(n);
    fore(i,0,m){
        cin >> apples[i];
    }
    fore(i,0,n){
        cin >> oranges[i];
    }
    countApplesAndOranges(s,t,a,b,apples,oranges);
    return 0;
}
