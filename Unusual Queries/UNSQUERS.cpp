#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
	int n,q,s,L,R,x,y,last=0;
	cin>>n>>q>>s;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<q;i++)
	{
		cin>>x>>y;
		L = (x+(s*last)-1)%n+1;
		R = (y+(s*last)-1)%n+1;
		if(L>R)
		{
			swap(L,R);
		}
		
 		int p[n][n]={'\0'};
 		for(int i=0;i<n;i++)
 		{
 			for(int j=i+1;j<n;j++)
 			{
 				int q=0,m[n]={'\0'};
 				for(int k=i;k<j-1;k++)
 				{
 					int ans=1;
 					int temp=a[k];
					for(int l=k+1;l<j-1;l++)
 					{
 						if(a[l]>temp)
 						{
 							temp = a[l];
 							ans++;
 						}
 					}
 					m[q++]=ans;
 				}
 				sort(m,m+q);
				p[i][j]=m[q-1];
 			}
 		}
		
 		for(int i=0;i<n;i++)
 		{
			for(int j=0;j<n;j++)
 			{
 				cout<<p[i][j]<<" ";
 			}
 			cout<<endl;
 		}
		
		
		int temp=0,ans=0;
		int b[R-L+1]={'\0'},l=0;
		for(int i=L-1;i<R;i++)
		{
			ans = 1;
			temp = a[i];
			for(int j=i+1;j<R;j++)
			{
				if(a[j]>temp)
				{
					temp = a[j];
					ans++;
				}
			}
			b[l++] = ans;
		}
		sort(b,b+l);
		cout<<b[l-1]<<endl;
		last = b[l-1];
		
	}
			
	return 0;
}
