#include <bits/stdc++.h>
#define fore(x,init,limit) for(int x =init; x<limit; x++)
using namespace std;
typedef long long ll;

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    long minSum{}, maxSum{};
    for(int i=0; i<arr.size()-1; i++){
        minSum += arr[i];
    }
    for(int i=1; i<arr.size(); i++){
        maxSum += arr[i];
    }
    cout << minSum << " " << maxSum << endl;
}

int main(){
    int t{5};
    vector<int> numbers(5);
    fore(i,0,5){
        cin >> numbers[i];
    }
    miniMaxSum(numbers);
    return 0;
}
