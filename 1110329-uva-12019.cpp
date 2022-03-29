/*
	UVA 10008
*/

#include <iostream>
using namespace std;

int main(void) {
	int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char day_of_week[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	int input = 0, m = 0, d = 0;

	cin >> input;
	
	while (input--) {
		cin >> m >> d;
		// 2011/01/06 Thursday
		// 2011/01/01 Saturday (index 5)
		
		int w = 5;
		for (int i = 1; i < m; i++) {
			w += months[i-1]; 
		}
		cout << day_of_week[(w + d) % 7] << endl;
	}
	return 0;
}
