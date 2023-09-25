#ifndef _deque_h
#define _deque_h

class Deque {

private:

  struct Node {
    int val;
    Node* next;
    
    Node(int ci, Node* n);
  };

  Node* top;

public:

  Deque();

  void push_front(int val);

  void push_back(int val);

  int pop_front();

  int pop_back();

  int peak_front();

  int peak_back();

  void removeAll();

  ~Deque();

};


#endif