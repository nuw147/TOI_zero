#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    a += b;
    cout << a << '\n';
    if(a < 50) cout << "fail\n";
    else cout << "pass\n";
}