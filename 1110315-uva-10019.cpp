/*
	UVA 10019
*/

#include <iostream>
using namespace std;
int main(void) {
	int input = 0;
	cin >> input;
	
	while (input--) {
		int number = 0, b1 = 0, b2 = 0;
		cin >> number;
			
		// base-10 to base-2 then count "1"
		for (int i = number; i; i /= 2) {
			if (i%2 != 0) {
				b1++;
			}
		}
		
		// base-16 to base-2 then count "1"
		for (int i = number; i; i /= 10) {
			// 265 => 0010 0110 0101
			for (int j = i%10; j; j /= 2) {
				if (j%2 != 0) {
					b2++;
				}
			}
		}
		cout << b1 << " " << b2 << endl;
	}
	return 0;
} 
