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

  public:
    NumberList()
      { head=nullptr; }

    ~NumberList();

    void appendNode(double);



};
#endif
