#include <bits/stdc++.h>
using namespace std;
int n, a, b;
string str;

void rec(int w, int l) {
	if(w+a==n || l+b==n) {
		cout << str << '\n';
	} else {
		str+="W ";
		rec(w+1, l);
		str.pop_back(); str.pop_back();
		str+="L ";
		rec(w, l+1);
		str.pop_back(); str.pop_back();
	}
}

int main() {
	ios::sync_with_stdio(false); cin.tie(0);
	cin >> n >> a >> b;
	rec(0, 0);
	return 0;
}