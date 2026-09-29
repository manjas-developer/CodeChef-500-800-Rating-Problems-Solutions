#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int p, q, r, s;
        std::cin >> p >> q >> r >> s;
        int pm, qm, rm, sm;
        pm = q + r + s;
        qm = p + r + s;
        rm = p + q + s;
        sm = p + q + r;
        if(p > pm || q > qm || r > rm || s > sm){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
