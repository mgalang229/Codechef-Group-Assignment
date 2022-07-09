#include <bits/stdc++.h>

using namespace std;

//int x[8] = {1, 0, -1, 0, 1, 1, -1, -1};
//int y[8] = {0, 1, 0, -1, 1, -1, 1, -1};

//int x[4] = {1, 0, -1, 0};
//int y[4] = {0, 1, 0, -1};

//int x[4] = {-1, -1, 1, 1};
//int y[4] = {-1, 1, -1, 1};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		int mx = INT_MIN;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			mx = max(mx, a[i]);
		}
		vector<int> counter(mx + 1, 0);
		for (int i = 0; i < n; i++) {
			counter[a[i]]++;
		}
		bool checker = true;
		for (int i = 1; i < mx + 1; i++) {
			checker &= (counter[i] % i == 0);
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
}
