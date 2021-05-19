#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,pos,res;
	cin>>n>>pos;//5=101//11101
     res= n^(pos-1)<<1;           
/*	if(res)
	{
		cout<<"set";
	}
	else
	{
		cout<<"unset";
	}*/
	cout<<res;

}
