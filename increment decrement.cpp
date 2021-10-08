#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// if 1st no. is greater than second , sub. them otherwise add them 
	int n1;
	int n2;
	cin>>n1;
	cin>>n2;
	if(n1>n2){
	    cout<<n1-n2;
	}
	else
	  cout<<n1+n2;
	return 0;
}
