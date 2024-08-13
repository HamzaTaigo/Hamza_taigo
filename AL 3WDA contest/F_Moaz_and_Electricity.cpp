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
#define ll long long
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define endl '\n'
#define Hamza_taigo ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
using namespace std;
//صلي على سيد الخلق
int main() {
    Hamza_taigo
    int t;
    cin >> t; 
 
    while (t--) {
        int n;
        cin >> n;  
 
        int c[n]; 
        int total_cost = 0;  
 
        for (int i = 0; i < n; ++i) {
            cin >> c[i];  
            total_cost += c[i];  
        }
 
        cout << total_cost << endl;  
    }

}
