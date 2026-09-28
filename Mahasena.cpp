#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int even, odd;
	even = 0;
	odd = 0;
	while(t--){
	    int a;
	    cin >> a;
	    if(a%2 == 0){
	        even++;
	    }
	    else{
	        odd++;
	    }
    }
	    if(even > odd){
	        cout << "READY FOR BATTLE";
	    }
	    else{
	        cout << "NOT READY";
	    }

}
