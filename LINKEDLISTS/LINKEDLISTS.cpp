// LINKEDLISTS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include"List.h"

List* list = new List;

int main()
{
	char i;
	int addingdata, deletingdata;
	while (true) {
		if (list->y == false) {
			cout << "Enter the first element of the first node:";
			cin >> addingdata;
			list->adddata(addingdata);
		}
		else {
			cout << "Press'a' to add data,Press 'd' to delete data,Press 'p' to print the list,Press 'x' to stop!" << endl;
			cin >> i;
			if (i == 'a')
			{
				cout << "Add a number:";
				cin >> addingdata;
				list->adddata(addingdata);
			}
			else if (i == 'd') {
				cout << "Delete a number:";
				cin >> deletingdata;
				list->deldata(deletingdata);
			}
			else if (i == 'p') {
				cout << "List Looks like!" << endl;
				list->printlist();
			}
			else if (i == 'x') {
				cout << "Stopped!" << endl;
				cout << "List looks like" << endl;
				list->printlist();
				cout << "Press 'x' to exit application and 'c' to continue:";
				cin >> i;
				if (i == 'x')
					exit(EXIT_FAILURE);
				else if (i == 'c')
					continue;
				else cout << "Invalid input!Try again." << endl;
				break;
			}
			else  cout << "Inavlid Input" << endl;
		}
	}
	system("Pause");
}

