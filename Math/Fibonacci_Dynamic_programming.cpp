#include <bits/stdc++.h>

using namespace std;

map<int, int> memoizer;

int fibonacci(int n){
    int key = n;
    if(memoizer.find(key) != memoizer.end()){
        return memoizer[key];
    }
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    int result;
    result = fibonacci(n-1) + fibonacci(n-2);

    memoizer[key] = result;

    return result;
}

int main(){
    int n{}, fib{};
    cin >> n;

    for(int i=0; i<n; i++){
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}