#include <bits/stdc++.h>
#define ll long long
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define endl '\n'
#define Hamza_taigo ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
using namespace std;
//صلي على سيد الخلق
int main() {
    Hamza_taigo
    int64_t n,k;
    cin>>n>>k;
    vector<int>v(n),frq(n);
    for(auto& it:v){
        cin>>it;
        frq[it]++;
    }
    priority_queue<pair<int,int>>p;
    for (size_t i = 0; i < n ; i++)
        p.push({frq[i],i});
    while (k--)
    {
        cout<<p.top().second<<' '<<p.top().first<<endl;
        p.pop();
    }
}