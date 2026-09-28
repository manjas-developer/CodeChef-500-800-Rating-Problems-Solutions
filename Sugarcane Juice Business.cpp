#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, price, sugarcane, salt, rent, total, profit;
        cin >> n;
        price = n * 50;
        sugarcane = (20 * price) / 100;
        salt = (20 * price) / 100;
        rent = (30 * price) / 100;
        total = sugarcane + salt + rent;
        profit = price - total;
        cout << profit << endl;
    }
}
