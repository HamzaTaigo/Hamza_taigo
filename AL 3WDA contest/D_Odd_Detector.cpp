#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define endl '\n'
using namespace std;
// صلي على سيد الخلق
void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    int maxVal = 0;
    for(auto& it : v){
        cin >> it;
    }
    vector<int> frq(1e6);
    for(auto& it : v){
        frq[it]++;
    }
    for(auto &i : v){
        if(frq[i] &1){
            cout << i << endl;
            break;
        }
    }
}
int main() {
    fast
    int Tests = 1;
    cin >> Tests;
    forn(tt, Tests){
        solve();
    }
}
// another solution  and the best
/*
  int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        int result = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            result ^= x;
        }
 
        cout << result << endl;
*/





