#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    string numeros[] {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int a{}, b{};
    
    scanf("%d %d", &a, &b);

    for(size_t i = a; i <= b; i++){
        if(i >= 1 && i <= 9){
            string value = numeros[i-1];
            cout << value << endl;
        }
        else if(i > 9){
            if(i%2 == 0){
                cout << "even" << endl;
            }
            else{
                cout << "odd" << endl;
            }
        }
    }
    
    return 0;
}