//Pawri meme
#include <iostream>
#include<string.h>
using namespace std;

int main() {
    int n;
    std::string s;
    std::cin >>n;
    while(n--)
    { std::cin>>s;
      for(int j=0;j+4<s.length();j++)
      {
          if(s.substr(j,5)=="party")
          {
              s[j+2]='w';
              s[j+3]='r';
              s[j+4]='i';
          }
      }
      std::cout<<s;
    }
	return 0;
}
