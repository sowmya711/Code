#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() 
{
 int t,n;
 cin >>t;
 while(t--)
 {
 int i;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 sort(a,a+n);
 cout<<a[0]+a[1]<<"\n";
 }return 0;
}