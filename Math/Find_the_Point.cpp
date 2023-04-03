#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'findPoint' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER px
 *  2. INTEGER py
 *  3. INTEGER qx
 *  4. INTEGER qy
 */

vector<int> findPoint(int px, int py, int qx, int qy) {
    vector<int> res(2);
    res[0] = 2*qx - px;
    res[1] = 2*qy - py;
    return res;
}

int main(){
    int n{}, x{}, y{}, x2{}, y2{};
    cin >> n;
    while(n--){
        cin >> x >> y >> x2 >> y2;
        vector<int> res =findPoint(x,y,x2,y2);
        for(auto i : res){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
