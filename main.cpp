#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
 	NumberList list;
 	list.appendNode(1.0);
 	list.appendNode(2.0);
 	list.appendNode(3.0);
 	list.appendNode(4.0);

	cout << "\nNumber of nodes in"
	 << " the list:\n";
 	cout << list.numNodes();
	cout << "\n";

	cout << "\nNodes in the list:\n";
	list.displayList();	

	cout << "\nNodes in reverse"
		<< " order:\n";
	list.displayBackwards();
	cout << "\n";
 	return 0;
}
