#ifndef LLtry
#define LLtry

#include<iostream>
#include<Windows.h>  //to be able to use system("cls") method
#include<conio.h>   //to be able to use getch() method
using namespace std;

struct node
{
	int x;
	node* next;
};

void search(node* r, int k)
{
	node* iter;
	iter = r;
	int index = 1;
	bool semaphore = false;
	while (iter != NULL)
	{
		if (iter->x == k)
		{
			cout << "The element (" << k << ") is at " << index << " position.\n";
			semaphore = true;
			return;
		}
		else
		{
			iter = iter->next;
			index++;
		}

	}
	if (semaphore == false)
	{
		cout << "Sorry, The element you look for is not in Linked List\n";
		return;
	}
}

void print(node* r)
{
	while (r != NULL)
	{
		cout << r->x << " ";
		r = r->next;
	}
	cout << "\n";
}

void addNode(node* &r, int k)
{
	node* iter;
	iter = r;
	if (r == NULL)
	{
		node* box;
		box = new node;
		box->x = k;
		box->next = NULL;
		r = box;
		//return r;
	}

	while (iter->next != NULL)
	{
		iter = iter->next;
	}
	node* box = new node;
	iter->next = box;
	box->x = k;
	box->next = NULL;
	//return r;
}

void addNodeOrdered(node* &r, int k) //the return type was node* initially
{
	if (r == NULL) //when Linked List is empty
	{
		node* temp = new node;
		temp->next = NULL;
		temp->x = k;
		r = temp;
	}
	else if ((r->x) > k) //Adding something smaller than head's x
	{
		node* temp;
		temp = new node;
		temp->x = k;
		temp->next = r;
		r = temp;
		//return temp;
	}
	else
	{
		node* iter;
		iter = r;
		while ((iter->next != NULL) && ((iter->next->x) < k))
		{
			iter = iter->next;
		}
		node* temp = new node;
		temp->x = k;
		temp->next = iter->next;
		iter->next = temp;
		//return r;
	}
}
void deleteNode(node* &r, int k)
{
	node* q;
	q = NULL;
	node* p;
	p = r;

	while ((p != NULL) && (p->x != k))
	{
		q = p;
		p = p->next;
	}

	if (p == NULL)
	{
		cout << k << " doesn't even exist in Linked List, no delete operation\n";
		//	return r;
		return;
	}
	if (q == NULL)
	{
		r = p->next;
		delete p;
		return;
	}
	else
	{
		q->next = p->next;
	}
	delete p;
	return;
	//return r; no need this with call by reference
}


#endif // !1
