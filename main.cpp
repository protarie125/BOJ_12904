#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

string s, t;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	cin >> s >> t;

	while (s.length() < t.length()) {
		if ('A' == t.back()) {
			t.pop_back();
		}
		else {
			t.pop_back();
			reverse(t.begin(), t.end());
		}
	}

	cout << (s == t ? 1 : 0);

	return 0;
}