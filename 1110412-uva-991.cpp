/*
	uva 991
*/

#include<iostream>
using namespace std;

int main(void) {
	int pairs[12] = {0};
	pairs[0] = 0;
	pairs[1] = 1;
	
	/*
	p(3) =
		p(0) * p(2) +
		p(1) * p(1) +
		p(2) * p(0)
	*/
	
	/*
	p(4) =
		p(0) * p(3) +
		p(1) * p(2) +
		p(2) * p(1) +
		p(3) * p(0)
	*/
	for (int i = 2; i < 12; i++) {
		int r = i;
		while (r--) {
			pairs[i] += (pairs[i - r] * pairs[r]);
		}
	}
	
//	for (int i = 2; i < 12; i++) {
//		cout << pairs[i] << endl;
//	}
	int input;
	while (cin >> input) {
		cout << pairs[input + 1] << "\n\n";
	}
	return 0;
}
