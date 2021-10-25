#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, x, y;
	cin >> n >> x >> y;
	// calculate the number of clones needed
	int clones = ceil((double) n * ((double) y / 100));
	// if the no. of wizards are already greater than or equal to the needed
	// percentage, then answer is 0, otherwise (clones - x) (no. of needed clones to be created)
	cout << max(0, clones - x) << '\n';
	return 0;
}
