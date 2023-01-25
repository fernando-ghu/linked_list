#include <iostream>
#include "NumberList.h"
using namespace std;

int main()
{
 NumberList list;
 list.appendNode(1.3);
 list.appendNode(2.2);
 list.displayList();
 cout << "\n";
 list.insertNode(0.2);
 list.displayList();
 cout << "\n";
 list.deleteNode(1.3);
 list.displayList();

 cout << "\nNumber of nodes in"
	 << " the list\n";
 cout << list.numNodes();
 cout << "\n";
 return 0;
}
