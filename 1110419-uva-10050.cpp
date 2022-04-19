/*
	UVA 10050
*/

#include <iostream>
using namespace std;

int main(void) {
	int case_T, N, P;
	cin >> case_T;	// input data of each case
	
	while (case_T--) {
		// input range of working days (N)
		// input hartal parameter for (p)arty
		cin >> N >> P;
		int day[3651] = {0};
		
		// array h store list of hartal parameters
		int h[101] = {0};
		for (int i = 0; i < P; i++) {
			cin >> h[i];
			
			// mark days with hartal parameter
			for (int j = h[i]; j <= N; j += h[i]) {
				day[j] = 1;
			}
		}
		
		int counter = 0;
		for (int i = 0; i <= N; i++) {
			// except friday and saturday
			if (i%7 == 0 || i%7 == 6)
				continue;
			// count workday but it with hartal parameter
			if (day[i] == 1)
				counter++;
		}
		cout << counter << endl;
	}
	
	return 0;
}
