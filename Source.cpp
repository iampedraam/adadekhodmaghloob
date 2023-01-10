#include <iostream>

using namespace std;

int main() {

	int n, r ;

	cin >> n; 

	int asli = n; 

	r = 0;

	for (int d=0 ; n > 0; ) {

		d = n % 10;
		r = r*10;
		r = r + d; 
		n = n / 10;
	}

	if (asli == r)

		cout << "YES";
	else
		cout << "NO";






	return 0;

}