/*
 *                                  C
 *                                  |
 *                                 / \
 *                                /   \
 *                     _          [===]
 *                    / \          I I
 *                 .-"""""-.       |_|
 *               .' .       `.    (___)
 *             .'.' .':`. `.`.`.   | |
 *            /  :  :  :  :  :  \  | |
 *          __IIIOIIIOIIIOIIIOIII__| |
 *         T^^^^^^^^^^^^^^^^^^^^^^^| |
 *         |   _      ___      _   | |
 *         |  /^\   .' | `.   /^\  | |
 *         |  |_| :/   |   \: |_|  | |
 *         |      :|   |   |:      | |
 *         |......:|  c|c  |:......I I
 *         |======:|___|___|:======|_|
 *         "------/_________\------"
 */
// Oh ALLAH, teach us what will benefit us, benefit us with what you taught us, and increase our knowledge
//////////////////////////////////////////////////////////////////////////////////////////////
#include <bits/stdc++.h>
using namespace std;
void solve() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (auto &i: v) cin >> i;
  cout << accumulate(v.begin(), v.end(), 0) << '\n';
}
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  int t; 
  cin >> t;
  while(t--) solve();
}
