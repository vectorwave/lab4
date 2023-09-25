#include "Deque.h"
class Deque{
    private:
    struct Node
    {
        int val;
        Node* next;

        Node(int ci, Node* n){
            val = ci;
            next = n;
        }
    };

    Node* top;

    public:
    Deque(){
        top = nullptr;
    }

    void push_front(int val){
        Node* n = new Node(val, top);
        top = n;
    }

    void push_back(int val){
        if(top == nullptr){
            push_front(val);
            return;
        }
        Node* n = new Node(val, nullptr);
        Node* temp = top;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = n;
    }

    int pop_back(){
        if(top == nullptr){
            return -1;
        }
        Node* temp = top;
        while(temp->next->next != nullptr){
            temp = temp->next;
        }
        int val = temp->next->val;
        temp->next = nullptr;
        return val;
    }

    int pop_front(){
        if(top == nullptr){
            return -1;
        }
        int val = top->val;
        top = top->next;
        return val;
    }

    int peak_front(){
        if(top == nullptr){
            return -1;
        }
        return top->val;
    }

    int peak_back(){  
        if(top == nullptr){
            return -1;
        }
        Node* temp = top;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        return temp->val;
    }

    void removeAll(){
        while(top != nullptr){
            top = top->next;
        }

    }
    ~Deque(){
        removeAll();
    }
    
};