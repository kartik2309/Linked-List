#pragma once
#include<iostream>

using namespace std;

class List
{
	struct node {
		int data;
		node* next;
	};
	typedef struct node* nodeptr;
	nodeptr head, curr, temp;
public:
	List();
	~List();
	void adddata(int addata);
	void deldata(int deletedata);
	void printlist();
	bool y = false;
};

