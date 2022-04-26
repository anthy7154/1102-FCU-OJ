/*
	UVA 10013
*/
#include <iostream>
#include <string.h>

using namespace std;
int n1[10000010], n2[1000001], carry[1000001], ans[1000001];

int main(void) {
    int input = 0, length = 0;
    cin >> input;

    for (int i = 0; i < input; i++) {
        cin >> length;
        memset(n1, 0, sizeof(n1));
        memset(n2, 0, sizeof(n2));
        memset(carry, 0, sizeof(carry));
        memset(ans, 0, sizeof(ans));

        for (int j = length-1; j >= 0; j--) {
            cin >> n1[j] >> n2[j];
        }

        for (int j = 0; j < length; j++) {
            ans[j] = (carry[j] + n1[j] + n2[j]) % 10;
            carry[j+1] = (carry[j] + n1[j] + n2[j]) / 10;
        }

        if (i != 0) {
            cout << "\n";
        }
        if (carry[length] != 0) {
            cout << carry[length];
        }

        for (int j = length-1; j >= 0; j--) {
            cout << ans[j];
        }
        cout << "\n";
    }

    return 0;
}
