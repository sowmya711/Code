#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
stack <char> s;
void reversewords(string str)
{
	for(int i=0;i<str.length();i++)
	{
		if(str[i]!=' ')
		s.push(str[i]);
		else
		{	while(s.empty()==false)
			{
		
				cout<<s.top();
				s.pop();
			}
				cout<<" ";
		}
	}
		 while (s.empty()==false) {
        cout << s.top();
        s.pop();
    
	}
}

int main()
{	string str;
	getline(cin,str);
	reversewords(str);
	
}
