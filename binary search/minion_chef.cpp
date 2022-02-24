#include<iostream>
#include<algorithm>
#include <cstdlib>
int T,N;
long int H;
bool validfunc(long long int K,long long int A[])
{
	long long int timetaken=0;
	for(int i=0;i<N;i++)
	{
          timetaken+=(A[i]+K-1)/K;
          
	}
	return (timetaken<=H);
}
int main()
{
	
	std::cin>>T;
	if(T>=1&&T<=10)
	{
	while(T--)
	{
           std::cin>>N;
           std::cin>>H;
          	long long int A[N],maximum=0;
           		for(int i=0;i<N;i++)
           		{
                 std::cin>>A[i];
                 maximum=std::max(A[i],maximum);
          		}
                 
               long long int l=1,r=maximum,ans=r,mid;
                while(l<=r)
                {
                	mid=(l+r)/2;
                	if(validfunc(mid,A))
                	{
                		ans=std::min(ans,mid);
                		r=mid-1;
                	}
                	else
                	{
                		l=mid+1;
                	}
                }



      	

           std::cout<<ans<<std::endl;
	}
	}

}