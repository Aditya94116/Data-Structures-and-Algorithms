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
cout<<"enter first element"<<" ";
cin>>first->data;
first->next=NULL;
head=first;
for(int i=0;i<4;i++)
{
	struct node*newnode=new struct node;
	cout<<"enter next element"<<" ";
	cin>>newnode->data;
	newnode->next=NULL;
	head->next=newnode;
	head=newnode;
}
head=first;
while(head!=NULL)

{
	cout<<head->data;
	head=head->next;
}



head=first;
struct node*remove_duplicates;
while(head->next!=NULL)
{
	if(head->data==head->next->data)
	{
		head->next=head->next->next;
	}
	else
	{
		
	
	head=head->next;}
}
cout<<"\nremove duplicate"<<" ";
head=first;
while(head!=NULL)
{
	cout<<head->data<<" ";
	head=head->next;
}
}







