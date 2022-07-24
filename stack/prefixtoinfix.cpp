#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;
bool isoperator(char y)
{
	switch(y)
		{
			case '+':
			case '-':
			case '*':
			case '/':
			case '^':return true;
		}
			return false;	
		
		
}
string prefixtoinfix(string s)
{   char c;
    stack <string> st;
   
	for(int i=s.length()-1;i>=0;i--)
	{
		
		if(isoperator(s[i]))
		{
			string c1=st.top();
					st.pop();
			string c2=st.top();
			        st.pop();
			string temp="("+c1+s[i]+c2+")";    
			st.push(temp);    
		}
		else
		{
			st.push(string(1,s[i]));
		}
	}
	return st.top();
}
int main()
{
	string s;
	cin>>s;
	cout<<prefixtoinfix(s);
}
