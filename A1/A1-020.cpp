#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    if(a < b && b < c && a < c) cout << "increasing\n";
    else if(a > b && b > c && a > c) cout << "decreasing\n";
    else cout << "neither\n";
}