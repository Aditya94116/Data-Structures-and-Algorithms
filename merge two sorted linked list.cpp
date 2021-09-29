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
cout<<" linked list 1:"<<" ";
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
	cout<<head->data<<" ";
	head=head->next;
}

	
struct node*second=new struct node;
cout<<"\nlinked list 2:"<<" ";
cin>>second->data;
second->next=NULL;
head=second;
for(int i=0;i<4;i++)
{
	struct node*newnode=new struct node;
	cout<<"enter next element"<<" ";
	cin>>newnode->data;
	newnode->next=NULL;
	head->next=newnode;
	head=newnode;
}
head=second;
while(head!=NULL)
{
	cout<<head->data<<" ";
	head=head->next;
}

struct node*p,*q;

cout<<"\nmerge two sorted linked list "<<" ";
while(p!=NULL and q!=NULL)
{
	if(p->data==q->data)
	{
		cout<<p->data<<" ";
		p=p->next;
		q=q->next;
	}
	else if(p->data<q->data)
	{
		cout<<p->data;
		p=p->next;
	}
	else 
	{
		cout<<q->data;
		q=q->next;
	}
}
while(p!=NULL)
{
	cout<<p->data<<" ";
	p=p->next;
}
while(q!=NULL)
{
	cout<<q->data<<" ";
	q=q->next;
}

}




