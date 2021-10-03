#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// no is divisible by 4 or not if yes inc. by 1 otherwise dec. by 1
	int n;
	cin>>n;
	if(n%4==0)
	  n++;
	else
	  n--;
	cout<<n;  
	return 0;
}
