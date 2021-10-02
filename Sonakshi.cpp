#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
		
		int n;
	    cin>>n;
    
        int a[n];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
        int gcd = a[0];
		for (int i = 1; i < n; i++)
		{   
			gcd*__gcd(gcd, a[i]);

			if (gcd%2!=0)
			{
				cout<<"0"<<"\n";
				return;
			}
			int bg=0;
			while (gcd%2==0)
			{
				/* code */
				gcd=gcd/2;
				bg++;
			}
			cout<<bg<<"\n";
			return;
			
			
		}
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
	    
     solve();
		
		   
	  
	}
	return 0;
}
