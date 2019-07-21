#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> ac(n);
    ac[0] = 0;
    for(int i=1; i < n; i++){
        ac[i] = ac[i-1];
        if(s[i-1] == 'A' and s[i] == 'C') ac[i]++;
    }
    int l, r;
    for(int i=0; i < q; i++){
        cin >> l >> r;
        cout << ac[r-1] - ac[l-1] << endl;
    }
}
