#include<iostream>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,u,d,c=1,l=1;
	    cin>>n>>u>>d;
	    int h[n];
	    int x;
	    for(int j=0;j<n;j++)
	    {
	        cin>>h[j];
	    }
	    for(int j=0;j<n;j++)
	    {
	        if(h[j]<h[j+1])
	        {
	            x = h[j+1] - h[j];
	            if(abs(x)<=u)
	            {
	                c++;
	                continue;
	            }
	            else{
	                break;
	            }
	        }
	        else if(h[j]>=h[j+1])
	        {
	            x = h[j] - h[j+1];
	            if(abs(x)<=d)
	            {
	                c++;
	                continue;
	            }
	            else if(l==1)
	            {
	                c++;
	                l--;
	            }
	           
	           else{
	               break;
	           }
	            
	        }
	        
	    }
	    
	    cout<<c<<endl;
	    
	}
	return 0;
}
