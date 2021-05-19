#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,set_count=0;
	cin>>n;//5=101,7=111
	while(n>0)
	{
	 if(n&1)
	  {
		set_count=set_count+1;
      }
      n=n>>1;
	}
	cout<<set_count;
	
}
