#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	double n, x, y;
	cin >> n >> x >> y;
	// it was necessary to have ceil((n * y) / 100) people, who come to the meeting
	cout << max(0.0, ceil((n * y) / 100) - x) << '\n';
	return 0;
}
