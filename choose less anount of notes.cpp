#include <iostream>
using namespace std;

int main() {
	// your code goes here
	// you have 6 types of notes 1,2,5,10,50,100 and you have select the notes to make the no./money by smallest no. of count of notes
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	     int a=n/100;
	    int b=n%100;
	    int c= b/50;
	    int d= b%50;
	    int e= d/10;
	    int f= d%10;
	    int g= f/5;
	    int h= f%5;
	    int i= h/2;
	    int j= h%2;
	    int k = a+c+e+g+i+j;
	    cout<<k<<endl;
	    
	}
	return 0;
}
