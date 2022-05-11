#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        int k, d, l, r, c;
		cin >> k;
		l = (int)sqrt(k - 1);
		r = l + 1;
		d = k - pow(l, 2);
		if (d > (r * r - l * l) / 2) {
			c = r - d % r;
		} else {
			c = r;
			r = d;
		}
		cout << r << " " << c << endl;
    }
    return 0;
}

