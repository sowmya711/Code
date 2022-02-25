#include <iostream>
#include<cmath>
#include<algorithm>
int main() {
	
	long long n, d;
	std::cin>>n>>d;
	long long lengths[n];
	int pairs = 0;
	for(int i = 0; i < n; i++){
	    std::cin>>lengths[i];
	}
	std::sort(lengths,lengths+n);
	
	for(int i = 0; i < n-1; i++)
	{
	    
	        int difference = lengths[i+1] - lengths[i];
	        if(difference <= d)
	        {
	            pairs += 1;
	            i++;
	        }
	    
	}
	std::cout<<pairs<<std::endl;
	return 0;
}