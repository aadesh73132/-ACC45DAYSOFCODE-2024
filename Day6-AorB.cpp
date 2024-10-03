//easy level

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
	    int x, y;
	    cin >> x >> y;
	    
	    int ab;
	    int fx = 500 - (x*2);
	    int sy = 1000 - ((x+y)*4);
	    ab = fx + sy;
	    
	    int ba;
	    int fy = 1000 - (y*4);
	    int sx = 500 - ((x+y)*2);
	    ba = fy + sx;
	    
	    if(ab > ba){
	        cout << ab << endl;
	    }
	    else{
	        cout << ba << endl;
	    }
	}
}