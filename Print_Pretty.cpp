#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        
        long long int Atrunc = static_cast<long long int>(A);
        cout << setw(0) << nouppercase << hex << showbase << Atrunc << endl;

        cout << setfill('_') << setw(15) << right << showpos << fixed << setprecision(2) << B << endl;

        cout << setw(0) << noshowpos << setprecision(9) << scientific << uppercase << C << endl;

	}
	return 0;

}