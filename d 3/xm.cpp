#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int fnt=0;
	    int gnt=0;
	    
	    int n;
	    cin>>n;
	    
	    for(int i=1;i<=n;i++)
	    {
	        int s;
	        
	        if(n%i==0)
	        {
	            s=n/i;
	            
	            if(i%2==0) fnt++;
	            
	            else gnt++;
	        }
	    }
	    
	    if(fnt<gnt) cout<<-1<<endl;
        else if(fnt==gnt) cout<<0<<endl;
        else cout<<1<<endl;
	}

}
