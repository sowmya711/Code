#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
int S[100];
void calculatespan(int a[],int n)
{
	stack <int> s;
	s.push(0);
	
	S[0]=1;
	int i;
	for( i=1;i<n;i++)
	{
		while(!s.empty()&& a[s.top()]<=a[i])
		{
			s.pop();
		}
		if(s.empty())
		{
			S[i]=i+1;
		}
		else
		{
			S[i]=i-s.top();
		}
	}
	s.push(i);
	
}
int main()
{
	int n,a[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	calculatespan(a,n);
	for(int i=0;i<n;i++)
	{
		cout<<S[i];
	}
}
