#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int x, y, z, pass;
	    cin >> x >> y >> z;
	    pass = (x*y)*(50.0/100.0);
	    if(z > pass){
	        cout << "Yes" << endl;
	    }
	    else{
	        cout << "No" << endl;
	    }
	}

}
