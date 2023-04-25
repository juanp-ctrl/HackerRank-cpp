#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x=init; x<limit; x++)
using namespace std;
typedef long long ll;

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

int getTotalX(vector<int> a, vector<int> b) {
    int totalNumbers{}, validation{};
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i=a[a.size()-1]; i<=b[0]; i++){
        validation = 0;
        for(int j : a){
            if(i%j == 0){
                validation++;
            }
        }
        for(int k : b){
            if(k%i == 0){
                validation++;
            }
        }
        if(validation == ((a.size())+(b.size()))){
            totalNumbers++;
        }
    }
    return totalNumbers;
}

int main(){
    int n{}, m{};
    cin >> n >> m;
    vector<int> array1(n), array2(m);
    fore(i,0,n){
        cin >> array1[i];
    }
    fore(i,0,m){
        cin >> array2[i];
    }
    cout << getTotalX(array1, array2) << endl;
    return 0;
}
