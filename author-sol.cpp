#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int c, v0, v1, a, l;
	cin >> c >> v0 >> v1 >> a >> l;
	int cnt = 1;
	int total_pages = v0;
	int add = v0;
	while (total_pages < c) {
		// choose between the minimum value of:
		// - the number of pages that Mister B can physically read
		// - the total pages that Mister B wants to read in a day
		// note 1: don't forget to subtract the pages that Mister B will re-read
		// note 2: (add + a) value = no. of pages that Mister B DECIDES to read for the day
		add = min(v1, add + a);
		total_pages += (add - l);
		cnt++;
	}
	cout << cnt << '\n';
	return 0;
}
