#include <iostream>



class Node{

    public:
    int value;
    Node* next;

    Node(int value){
    this->value=value;
    }
    };

class LinkedList{
private:
Node* head;
Node* tail;
int length;

public:
LinkedList(int value){
Node* newNode=new Node(value);
head=newNode;
tail=newNode;
length=1;
}

 void printList()
{
Node* temp=head;
while(temp)
{
std::cout << ' '<<temp->value<<std::endl;
temp=temp->next;
}
}

void getHead()
{
    std::cout<<"Head:"<< head->value<<std::endl;
}

void getTail()
{
    std::cout<<"Tail:"<< tail->value<<std::endl;
}

void getLength()
{
    std::cout<<"Length:"<< length <<std::endl;
}

void appendList()
{
    
}

~LinkedList()
{
    Node* temp=head;
    while(head)
    {
     head=head->next;
     delete temp;
     temp=head;
    }
    {
        /* code */
    }
    
}
};

int main()
{
 LinkedList* list= new LinkedList(4);
 list->getHead();
 list->getTail();
 list->getLength();
 list->printList();

    
}
