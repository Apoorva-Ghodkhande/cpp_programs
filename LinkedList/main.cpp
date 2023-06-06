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
std::cout <<temp->value<<std::endl;
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

void appendList(int value)
{
       Node* newNode=new Node(value);
    if(length==0)
    {
        head=newNode;
        tail=newNode;
    }
    else{
     
        tail->next=newNode;
        tail=newNode;

    }
    tail->next=nullptr;
    length++;
}

void deleteLast()
{

    if(length==0) return;
    Node* temp=head;
     if(length==1)
    {
        head=nullptr;
        tail=nullptr;
    }
    else{
        Node* pre=head;
         while(temp->next){
            pre=temp;
            temp=temp->next;
        }
tail=pre;
tail->next=nullptr;
    }
    delete temp;
    length--;
}

void prepend(int value)
{
    Node* newNode= new Node(value);

    if(length==0)
    {
     head=newNode;
     tail=newNode;
     tail->next=nullptr;
    }
    else{
        newNode->next=head;
        head=newNode;
    }
    length++;

}

void deleteFirst()
{
    if(length==0)return;
    Node* temp=head;
    if(length==1)
    {
     head=nullptr;
     tail=nullptr;
    }else
    {
    head=head->next;
    }
    length--;
    delete temp;
}

Node* get(int index)
{

if(index <0 || index>length) return nullptr;

    Node* temp=head;
    for(int i=0;i<index;i++)
    {
        temp=temp->next;
    }
    return temp;

}

bool set(int index, int value)
{
Node* temp=get(index);
if(temp){
    temp->value=value;
    return true;
}
return false;
}

bool insert(int index, int value){
    if(index <0 || index>length) return false;
    if(index==0){
        prepend(value);
        return true;
    }
    if(index==length){
        appendList(value);
        return true;
    }
    
        Node* newNode = new Node(value);
        Node* temp= get(index-1);
        newNode-> next=temp->next;
        temp->next=newNode;
        length++;
        return true;
}

void deleteNode(int index)
{
      if(index <0 || index>=length) return;
    if(index==0){
        deleteFirst();
    }
    if(index==length-1){
        deleteLast();
    }  
    Node* pre=get(index-1);
    Node* temp=pre->next;
pre->next=temp->next;
delete temp;
length--;
    
}

void reverse()
{
    Node* temp=head;
    head=tail;
    tail=temp;
    Node* before=nullptr;
    Node* after=temp->next;
    for(int i=0;i<length;i++){
        after=temp->next;
        temp->next=before;
        before=temp;
        temp=after;
    }
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
    
}
};

int main()
{
 LinkedList* list= new LinkedList(4);
 list->getHead();
 list->getTail();
 list->getLength();
 //list->printList();
list->appendList(9);
list->appendList(5);
//list->printList();
  //list->deleteLast();
 // list->prepend(1);
  //list->deleteFirst();
  //list->printList(); 
  list->set(1,15);
  list->insert(2,23);
   list->printList(); 
   //list->deleteNode(2);
      //list->printList(); 
std::cout<<std::endl;
list->reverse();
list->printList(); 
}
