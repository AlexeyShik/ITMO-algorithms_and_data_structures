#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; ++i)
		v[i] = i + 1;
	for (int i = 2; i < n; ++i)
		swap(v[i / 2], v[i]);
	for (int x : v)
		cout << x << ' ';
	return 0;
}
