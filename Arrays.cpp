#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size{};
    scanf("%d", &size);

    int arr[size];
    for(size_t i{}; i<size; i++){
        cin >> arr[i];
    }

    for(int i = size-1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}
