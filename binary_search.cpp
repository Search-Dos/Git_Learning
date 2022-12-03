#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main () {
	int n, k;
	cin >> n >> k;
	int vector[n];
	for (int i = 0; i < n; i++) {
		cin >> vector[i];
	}
	for (int i = 0; i < k; i++) {
		int x;
		cin >> x;
		int l = 0;
		int r = n - 1;
		bool ok = false;
		while (r > =l) {
			int m = (l + r) / 2;
			if (vector[m] == x){
				ok = true;
				break;
			}else if (vector[m] < x){
				l = m + 1;
			}else if (vector[m] > x){
				r = m - 1;
			}
		}
		if (ok) {
			cout << "YES\n";
		}else {
			cout << "NO\n";
		}
	}
	return 0;
}
