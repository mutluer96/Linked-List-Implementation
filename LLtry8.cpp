#include<iostream>
#include<Windows.h>  //to be able to use system("cls") method
#include<conio.h>   //to be able to use getch() method
#include"LLtry.h"
using namespace std;



void main()
{
	node* root;
	root = NULL;
	char situation;
	int SomethingToAdd;
	int SomethingToDelete;
	int SomethingToSearch;

	while (true)
	{
		Sleep(260);

		system("cls");

		cout << "\t\t Welcome to Linked List Implementation\n";
		cout << "1) Add 2)Delete" << endl;
		cout << "3) Search 4)Print" << endl;
		cout << "5)Exit Program" << endl;
		cout << "To move on enter the number and hit the enter\n";
		cin >> situation;
		if ((int)situation == 49)
		{
			cout << "Please insert the data to add\n";
			cin >> SomethingToAdd;
			//root = addNodeOrdered(root, SomethingToAdd);

			while (!cin) // to make sure input is integer
			{
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Please insert a number to add and try again\n";
				cin >> SomethingToAdd;
			}
			addNodeOrdered(root, SomethingToAdd);

		}
		else if ((int)situation == 50)
		{
			cout << "Please insert the data to delete\n";
			cin >> SomethingToDelete;
			//fflush(stdin);
			//root = deleteNode(root, SomethingToDelete);

			while (!cin)// to make sure input is integer
			{
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Please insert a number and try again\n";
				cin >> SomethingToDelete;
			}
			deleteNode(root, SomethingToDelete);

		}
		else if ((int)situation == 51)
		{
			cout << "Please insert the data to search\n";
			cin >> SomethingToSearch;

			while (!cin) // to make sure input is integer
			{
				cin.clear();
				cin.ignore(256, '\n');
				cout << "Please insert a number to search and try again\n";
				cin >> SomethingToSearch;
			}
			search(root, SomethingToSearch);

			_getch();

		}
		else if ((int)situation == 52)
		{
			system("cls");
			print(root);
			cout << "\n to get to menu hit a key ";
			_getch();

		}
		else if ((int)situation == 53)
		{
			cout << "Good By";
			Sleep(215);
			break;
		}
		else
		{
			cout << "Invalid number!\n";
			Sleep(230);
			system("cls");
			cin.clear();
			cin.ignore(256, '\n');
		}

	}
	system("Pause");
}

