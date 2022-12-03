#include <iostream>
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
		int l = -1, r = n;
		while(r > l + 1){
			int m = (l + r) / 2;
			if(vector[m] < x){
				l = m;
			}else{
				r = m;
			} 
		}
		cout << r + 1 << "\n";
	}
	return 0;
}
