// Deque.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <deque>
using namespace std;
void printdeque(deque<int> deck);

int main()
{
	deque<int> myDeck;
	myDeck.push_back(1);
	myDeck.push_back(10);
	myDeck.push_back(100);
	cout << "First Print: " << endl;
	printdeque(myDeck);

	myDeck.push_front(20);
	myDeck.push_front(200);
	cout << "Next Print: " << endl;
	printdeque(myDeck);
	return 0;
}
void printdeque(deque<int> deck)
{
	for (int num : deck)
	{
		cout << num << endl;
	}
}

