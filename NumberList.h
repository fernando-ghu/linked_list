#ifndef NUMBERLIST_H
#define NUMBERLIST_H

class NumberList
{
  private:
    struct ListNode
    {
      double value;
      struct ListNode* next;
    };

    ListNode* head;

		int countNodes(ListNode*) const;
		void showReverse(ListNode*) const;

  public:
    NumberList()
      { head=nullptr; }

    ~NumberList();

    void appendNode(double);
    void insertNode(double);
    void displayList() const;
		void deleteNode(double);
		int numNodes() const
			{ return countNodes(head); }
		void displayBackwards() const
			{ showReverse(head); }
};
#endif
