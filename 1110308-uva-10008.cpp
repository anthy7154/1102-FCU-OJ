/*
	UVA 10008
*/

#include <iostream>
using namespace std;
int main(void) {
	int char_frequency[26] = {0}, input = 0;
	cin >> input;	// :input: number of sentences
	cin.ignore();	// ignore <enter>
	
	string str;
	while (input--) {
		getline(cin, str);
		for (int i = 0; i < str.length(); i++) {
			if (str[i] >= 65 && str[i] <= 90) {
				char_frequency[str[i] - 65]++;
			} else if (str[i] >= 97 && str[i] <= 122) {
				char_frequency[str[i] - 97]++;
			}
		}
	}
	// print frequency of letters in descending order 
	int max_index = 0, max_count = 0;
	for (int i = 0; i < 26; i++) {
		// find maximum of frequency
		for (int j = 0; j < 26; j++) {
			if (char_frequency[j] > max_count) {
				max_count = char_frequency[j];
				max_index = j;
			}
		}
		if (max_count != 0) {
			cout << char(max_index + 65) << " " << char_frequency[max_index] << endl;
		}
		// reset (max) value of char_frequency currently
		char_frequency[max_index] = 0, max_index = 0, max_count = 0;
	}
	
	return 0;
}
