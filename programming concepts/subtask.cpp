#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m,k,i;
	cin>>t;
	while(t--)
	{   
	    cin>>n>>m>>k;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]==1)
	        count++;
	        else if(a[i]==0)
	        break;
	    }
	    if(count==n)
	    cout<<100<<endl;
	 
	    else if(count==m || (count>m&&count!=n))
	    cout<<k<<endl;
	    else
	    cout<<0<<endl;
	    
	}
	return 0;
}
