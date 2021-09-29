#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node*next;
};
int main()
{
	struct node*head;
	struct node*first=new struct node;
	struct node*second=new struct node;
	struct node*third=new struct node;
	struct node*fourth=new struct node;
	struct node*fifth=new struct node;
	cout<<"enter first element"<<" ";
	cin>>first->data;
	first->next=second;
	cout<<"enter second element"<<" ";
	cin>>second->data;
	second->next=third;
	cout<<"enter third element"<<" ";
	cin>>third->data;
	third->next=fourth;
	cout<<"enter fourth element"<<" ";
	cin>>fourth->data;
	fourth->next=fifth;
	cout<<"enter fifth element"<<" ";
	cin>>fifth->data;
	fifth->next=third;
	head=first;
	struct node*p=head,*q=head;
	
		while(p and q and q->next!=NULL)
		{
			p=p->next;
			q=q->next->next;
			if(p==q)
			{
				cout<<"detect loop\n";
				break;
			}
		}
		p=head;
		while(p!=q)
		{
			p=p->next;
			q=q->next;
		}
		cout<<"starting point of the loop is "<<p->data;
	
	
}
