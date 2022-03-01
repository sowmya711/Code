#include <iostream>
#include<string>
#include<cstring>
int main()
{
    int T;
    std::cin>>T;
    while(T--)
    {    int k=0;
        std::string x,y;
        std::cin>>x;
        std::cin>>y;
        for(int i=0;i<x.size();i++)
        {
            if(x[i]!=y[i]&&x[i]!='?'&&y[i]!='?')
            {
           
            std::cout<<"No"<<std::endl;
            k=0;
            break;
            }
            else
            k=1;
        } 
       if(k==1)
       std::cout<<"Yes"<<std::endl;
    }

    return 0;
}