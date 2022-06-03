#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool checker = false;
		for (int i = 0; i < n; i++) {
			int pos = -1;
			for (int j = i + 1; j < n; j++) {
				if (a[i] == a[j]) {
					pos = j;
				}
			}
			if (pos > i + 1) {
				checker = true;
				break;
			}
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
