#include<iostream>
#include<algorithm>
#include <cstdlib>
int main()
{
	int T,K;
	std::cin>>T;
	while(T--)
	{  int N,K;
       std::cin>>N;
       std::cin>>K;
      
       K=(K < N - K) ? K : N - K;
       long long  int w[N],sum1=0,sum2=0;
       for(int i=0;i<N;i++)
       {
       	std::cin>>w[i];
       }
       std::sort(w,w+N);
       for(int i=0;i<K;i++)
       	sum1+=w[i];
       for(int i=K;i<N;i++)
       	sum2+=w[i];
       std::cout<<abs(sum1-sum2)<<std::endl;
       
	}
}