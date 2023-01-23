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



  return 0;
}
