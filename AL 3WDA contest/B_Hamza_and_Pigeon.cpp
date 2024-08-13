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
    int n,q;
    cin>>n;
    vector<int>v(n);
    for (size_t i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    cin>>q;
    while (q--)
    {
        int pos,pi,r,l;
        cin>>pos>>pi;
        pos--;
    l=pi-1;
    r=abs(v[pos]-pi);
    if(pos!=0){
         v[pos-1]+=l;
    }
    if(pos!=n-1){
        v[pos+1]+=r;
    }
    v[pos]=0;
    }
    for (size_t i = 0; i < n; i++)
    {
        cout<<v[i]<<endl;
    }
}
