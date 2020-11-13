#include <iostream>
#include <queue>

using namespace std;

int main() {
	int t;
	cin>>t;
	
	queue<int>mag;
	queue<int>iron;
	    
	while(t--){
	    int n,k=0,i=0,j=0,m=0;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    int p=k+1;
	    int l=0,r=0,count=0;
	
	    for(int i=0; i<n; i++){
	        if(s[i]=='M')
	        mag.push(i);
	        if(s[i]=='I')
	        iron.push(i);
	        
	        if(s[i]=='X' || i==n-1){
	            int l,r,sheet=0,q;
	            while(!mag.empty() && !iron.empty()){
	                sheet=0;
	                l=min(mag.front(), iron.front());
	                r=max(mag.front(), iron.front());
	                
	                for(q=l; q<=r; q++){
	                    if(s[q]==':')
	                    sheet++;
	                }
	                if((p-abs(l-r) -sheet)>0){
	                    count++;
	                    mag.pop();
	                    iron.pop();
	                }
	                
	                else if(mag.front() < iron.front()){
	                    mag.pop();
	                }
	                
	                else{
	                 iron.pop();   
	                }
	            }
	            
	            while(!mag.empty())
	            mag.pop();
	            
	            while(!iron.empty())
	            iron.pop();
	        }
	    }
	        cout <<count<< std::endl;
	}
	return 0;
}
