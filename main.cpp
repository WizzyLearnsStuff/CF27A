#include<vector>
#include<iostream>

using namespace std;

int main() {
	vector<bool> v(3001, false);

	int n;
	cin >> n;

	int m = 1;
	for (int i = 0; i < n; i++) {
		int j;
		cin >> j;
		v[j] = true;
		while (v[m] == true) m++;
	}

	cout << m;
}
