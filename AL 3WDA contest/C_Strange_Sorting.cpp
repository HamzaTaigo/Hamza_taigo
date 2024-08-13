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
#define fast ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define endl '\n'
using namespace std;
//صلي على سيد الخلق
void solve() {
  int n, dx = 0;
  bool f = true;
  cin >> n;
 vector<int>v(n);
 for(auto& it:v){
     cin>>it;
 }
  for(int it : v) {
    if(it > 10 && it / 10 >= dx && it % 10 >= it / 10) 
      dx = it % 10;
    else {
      if(it >= dx)
        dx = it;
      else {
        f = false;
        break;
      }
    }
  }
  cout << (f ? "YES\n" : "NO\n");
}
int main() {
  fast
  int Tests = 1;
  cin >> Tests;
  forn(tt, Tests) {
    solve();
  }
}