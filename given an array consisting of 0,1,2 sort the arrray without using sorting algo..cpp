#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int arr[]={0,0,1,2,0,1,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	int count0=0;
	int count1=0;
	int count2=0;
	for(int a=0;a<n;a++)
	{
		switch(arr[a])
		{
			case 0:count0++;
			break;
			case 1:count1++;
			break;
			case 2:count2++;
			break;
		}
	}
	for(int i=0;i<count0;i++)
	cout<<0<<" ";
	for(int j=0;j<count1;j++)
	cout<<1<<" ";
	for(int k=0;k<count2;k++)
	cout<<2<<" ";
}
