#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
stack<int> s;
void insertfrombottom(int x)
{
	
	
    if(s.size() == 0)
    s.push(x);
  
	else
	{
		
		int a=s.top();
		s.pop();
		insertfrombottom(x);
		s.push(a);
		
	}

}
void reverse()
{	if(s.size()>0)

{
		int x=s.top();
	s.pop();
	reverse();
	insertfrombottom(x);
}
}
int main()
{
	int n;
	
	cin>>n;
	for(int i=0;i<n;i++)
	{   int x;
	cin>>x;
		s.push(x);
	}
	reverse();
	while(s.size()>0)
	{
		int t=s.top();
		cout<<t;
		s.pop();
	}
}
