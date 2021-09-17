#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={2,3,4,6,1},smallest=INT_MAX;
	int n=sizeof(arr)/sizeof(arr[0]);
	int minimum=INT_MAX;
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
		{
			minimum=arr[i+1];
		}
		else 
		{
			minimum=arr[i];
		}
		smallest=min(smallest,minimum);
	}
	cout<<smallest;
}



