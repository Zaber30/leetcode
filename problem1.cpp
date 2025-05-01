#include<bits/stdc++.h>
using namespace  std;
using ll = long long;
int main() {
    ll n,k;
    cin >> n >> k;
    ll a[n], i, j;
    ll mi = INT_MAX;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a, a + n);
    for (i = 0; i <=n-k; i++) {
        mi = min(mi, a[i + k - 1] - a[i]);
    }
    cout << mi << endl;

}