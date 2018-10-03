#include<bits/stdc++.h>
using namespace std ; 
 
typedef long long lli;
int main()
{
	int ti ; 
	cin >> ti ; 
	while(ti--)
	{
		lli n ;
		cin >> n ; 
		lli a[n] ; 
		for (lli i =0 ; i < n ;i ++)
		cin >> a[i] ;
		lli b[n] ; 
		b[0] = a[0] ; 
		lli c[n] ; 
		for (lli i =1 ; i< n ; i++)	
		{
		b[i] = a[i] + b[i-1] ; 
	 
		}
		
		c[0] = b[n-1] ;
		for (lli i =1 ; i< n ; i++)	
		{
		c[i] = b[n-1] - b[i-1] ; 
	 	}
	 	 
	 	
	 	for (lli i =0 ; i< n ; i++)	
		{
		c[i] = c[i] + b[i] ; 
	 	}
		
		cout << (min_element(c,c+n)-c)+1 <<endl  ; 
	}
} 