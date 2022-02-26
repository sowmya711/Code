#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
int main()
{
    int T,N;
    std::string firstname,lastname;
    std::cin>>T;
    std::vector<std::pair <std::string,std::string>>vect;
    std::unordered_map<std::string,int> m;
    for(int i=0;i<T;i++)
    {
         std::cin>>N;
           std::vector<std::pair <std::string,std::string>>vect(N);
         for(int j=0;j<N;j++)
         {
               
           
              std::cin>>vect[j].first>>vect[j].second;
               m[vect[j].first]++;
         }
        
         for (auto elem : vect)
        {   
             if (m[elem.first] > 1)
            {
                std::cout<<elem.first<<" "<<elem.second<<std::endl;

            }
            else
              std::cout<<elem.first<<std::endl;
           
        }
         
}
         
}