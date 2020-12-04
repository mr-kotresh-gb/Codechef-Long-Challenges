/*
Question link ->    https://www.codechef.com/DEC20B/problems/EVENPSUM
Code By       ->    Kotresh G B
Date          ->    04/12/2020
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll	t, a, b;
    cin >> t;
	while(t--)
	{
		cin >> a >> b;
		ll e1 = a / 2;
		ll o1 = a - e1;
		ll e2 = b / 2;
		ll o2 = b - e2;
		cout << e1 * e2 + o1 * o2 << "\n";
	}
    return 0;
}
