#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here
	int t,n,i,d;
	cin>>t;
	while(t--)
	{
	    cin>>n>>d;
	    int a[n];
	    for(i=0;i<n;i++)
	    cin>>a[i];
	     int not_risk=0,min_not_risk,min_risk,risk=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>9&&a[i]<80)
	        not_risk++;
	        else
	        risk++;
	    }
	    int ans;
	    ans=not_risk/d+risk/d;
	    if(not_risk%d!=0)
	    ans++;
	    if(risk%d!=0)
	    ans++;
	    cout<<ans<<endl;
	}
	return 0;
}
