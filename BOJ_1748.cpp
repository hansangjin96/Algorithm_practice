#include <iostream>
#include <math.h>
using namespace std;

int main() {
	long n, copy, count = 0;
	int  len = 1, c = 9;
	cin >> n;
	copy = n;
	//ÀÚ¸´¼ö ¼¼±â
	while (copy/10 != 0) {
		len++;
		copy /= 10;

	}
	if (len > 1) {
		for (int i = 1; i < len; i++) {
			count += c*i;
			c *= 10;
		}
		count += (n - pow(10, len - 1) + 1)*len;
	}
	else {
		count += n;
	}
	cout << count << endl;
	return 0;
}
