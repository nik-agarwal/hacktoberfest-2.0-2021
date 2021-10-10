#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int first= n;
	    int last= n%10;
	    for(first=n; first>=10; first/=10);
	    int sum= first+last;
	    cout<<sum<<endl;
	    
	}
	
	
	
	return 0;
}
