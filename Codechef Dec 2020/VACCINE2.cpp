/*
Question link ->    https://www.codechef.com/DEC20B/problems/VACCINE2
Code By       ->    Kotresh G B
Date          ->    04/12/2020
*/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
    	ll n, d;
    	cin >> n >> d;
    	ll a[n], risk = 0, norisk = 0;
    	for(int i = 0; i < n; i++)
    	{
    		cin >> a[i];
    		if(a[i] >= 80 || a[i] <= 9)
    		risk++;
    		else
    		norisk++;
    	}
        ll sum = ceil((double) risk / (double)d) + ceil((double)norisk / (double)d);
        cout << sum << "\n";
    }
}
