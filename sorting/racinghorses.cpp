#include <iostream>
#include <cstdlib>
#include<algorithm>
using namespace std;

int main() {
	int T,N;
	long long int mindif;
	std::cin>>T;
	while(T--)
	{
	    
	    std::cin>>N;
	    long int a[N];
	    for(int i=0;i<N;i++)
	    {
	        std::cin>>a[i];
	    }
	    sort(a,a+N);
	    mindif=abs(a[0]-a[1]); 
	    for(int i=1;i<N;i++)
	    {
	        if(abs(a[i]-a[i+1])<mindif)
	        mindif=abs(a[i]-a[i+1]);
	    }
	    
	    cout<<(mindif)<<endl;
	}
	return 0;
}