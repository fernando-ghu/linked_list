#include "NumberList.h"
#include <iostream>
using namespace std;

NumberList::~NumberList()
{
  ListNode* nodePtr;
  ListNode* nextNode;

  nodePtr = head;

  while(nodePtr != nullptr)
  {
    nextNode = nodePtr->next;
    delete nodePtr;
    nodePtr = nextNode;
  }
  
}

void NumberList::appendNode(double num)
{
  ListNode* newNode;
  ListNode* nodePtr;

  newNode=new ListNode;
  newNode->value = num;
  newNode->next = nullptr;

  if(!head)
    head = newNode;
  else
  {
    nodePtr = head;

    while(nodePtr->next)
      nodePtr=nodePtr->next;

    nodePtr->next = newNode;
  }
}
