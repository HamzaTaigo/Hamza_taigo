#include <bits/stdc++.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n, c;
   cin >> n >> c;
   vector<int64_t> v(1e6);
   while (n--) {
      int64_t p, l, r;
      cin >> p >> l >> r;
      l--, r--;
      v[l] += p;
      v[r] -= p;
   }
   for (int i = 1; i < 1e6; i++) {
      v[i] += v[i-1];
   }
   for (int i = 0; i < 1e6; i++) {
      if (v[i] > c) return cout << "NO\n", 0;
   }
   cout << "YES\n";
}