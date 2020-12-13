/*
Question link ->    https://www.codechef.com/DEC20B/problems/HXOR
Code By       ->    Kotresh G B
Date          ->    13/12/2020
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n, x, k, o, fg, r;
    	cin >> n >> x;
    	ll a[n];
    	for(ll y = 0; y < n; y++)
        cin >> a[y];
    	
		int i = 0;
    	for(ll g = x; g > 0 && i < n - 1; g--)
    	{
        	fg = 0;
        	ll p = log(a[i]) / log(2);
        	r = pow(2, p);
            a[i] = a[i] ^ r;
        	for(ll j = i + 1; j < n; j++)
			{
            	if((a[j] ^ r) < a[j])
				{
                	a[j]= a[j]^r;
                	fg = 1;
                	break;
            	}
        	}

        	if(fg == 0)
			{
            	a[n - 1] ^= r;
        	}
         
			while(a[i] <= 0)
			{
        		i++; 
        	}
        	o = g + 1;
    	}

		if(o > 0)
		{
        	if(n < 3 && o % 2 >0)
			{
            	a[n - 2] ^= 1;
            	a[n - 1] ^= 1;
        	}
    	}
    	for(ll h = 0; h < n; h++)
		{
			cout << a[h] << " ";
		}
    	cout << endl;
	}
 return 0;
}
