//codechef 593
#include<iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	
	while(t--){
	    int N;
	    cin>>N;
	    
	    if(N%4 == 0){
	        cout<<"Good"<<endl;
	    }
	    else{
	        cout<<"Not Good"<<endl;
	    }
	}
    return 0;
}