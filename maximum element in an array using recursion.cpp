#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void maximumarr(int arr[],int n,int i,int &maximum)
{
	if(i==n)
	return;
	if(arr[i]>maximum)
	{
		maximum=arr[i];
	}
	maximumarr(arr,n,i+1,maximum);
}
int main()
{
	int arr[]={2,4,6,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int maxi=INT_MIN;
	maximumarr(arr,n,0,maxi);
	cout<<maxi;
}
