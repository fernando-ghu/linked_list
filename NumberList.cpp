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

void NumberList::insertNode(double num)
{
  ListNode* nodePtr;
  ListNode* prevNode = nullptr;
  ListNode* newNode;

  /* Allocation of a new node */
  newNode = new ListNode;
  newNode->value = num;

  /* Inserting a node into an empty list */
  if(!head)
  {
    head = newNode;
    newNode->next = nullptr;
  }
  else
  {
    nodePtr = head;
    prevNode = nullptr;
  
    while(nodePtr != nullptr && nodePtr->value < num)
    {
      prevNode = nodePtr;
      nodePtr = nodePtr->next;
    }
    if(prevNode == nullptr)
    {
      head = newNode;
      newNode->next = nodePtr;
    }
    else
    {
      prevNode = newNode;
      newNode->next = nodePtr;
    }
  }
}

void NumberList::displayList() const
{
  ListNode* nodePtr;

  nodePtr = head;

  while(nodePtr)
  {
    cout << nodePtr->value << endl;
    nodePtr = nodePtr->next;
  }
}

void NumberList::deleteNode(double num)
{
	ListNode* nodePtr;
	ListNode* previousNode;

	if(!head)
		return;

	if(head->value == num)
	{
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else
	{
		nodePtr = head;
		while(nodePtr != nullptr && nodePtr->value != num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if(nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

int NumberList::countNodes(ListNode* nodePtr) const
{
	if (nodePtr != nullptr)
		return 1 + countNodes(nodePtr->next);
	else
		return 0;
}

void NumberList::showReverse(ListNode* nodePtr) const
{
	if(nodePtr)
	{
		showReverse(nodePtr->next);
		cout << nodePtr->value << " ";
	}
}
