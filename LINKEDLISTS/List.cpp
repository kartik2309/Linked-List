#include "stdafx.h"
#include "List.h"
#include<array>

List::List()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
}

List::~List()
{
}

void List::adddata(int addata) {
	y = true;
	nodeptr n = new node;
	n->next = NULL;
	n->data = addata;
	if (head != NULL)
	{
		curr = head;
		while (curr->next != NULL)
			curr = curr->next;
		curr->next = n;
	}
	else
		head = n;
}

void List::deldata(int deletedata)
{
	nodeptr delptr = NULL;
	curr = head;
	temp = head;
	while (curr != NULL && curr->data != deletedata) {
		temp = curr;
		curr = curr->next;
	}
	if (curr == NULL) {
		cout << "Your item " << deletedata << " was not found in the list" << endl;
		delete delptr;
	}
	else {
		delptr = curr;
		curr = curr->next;
		temp->next = curr;
		if (delptr == head) {
			head = head->next;
			temp = NULL;
		}
		delete delptr;
	}
}

void List::printlist()
{
	curr = head;
	while (curr != NULL) {
		cout << curr->data << endl;
		curr = curr->next;
	}
}
