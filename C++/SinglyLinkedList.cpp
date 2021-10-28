#include<iostream>
using namespace std;

//Single node, using template for high reusibility within the code
template <class T>
class SNode{
public:
    const T& getElement() const{return this.element;}
    SNode<E>* getNext() const {return this.next;}
private:
    T element;
    SNode<T>* next;
friend class SLinkedList<T>;

}

///Here we are creating a Node for Linked List
template <class T>
class SLinkedList
{
public:
    //Constructor
    SLinkedList();

    //Copy constructor
    SLinkedList(SLinkedList<T>&);

    //Destructor
    ~SLinkedList();

    //Assignment overload
    SLinkedList<T>& operator=(SLinkedList<T>&);

    //returns true if list is empty
    bool empty() const;

    //returns element at the head
    const T& front();


    void InsertAtTail(SLinkedList* &head,int value);
    void InsertAtHead(SLinkedList* &head,int value);
    void Display(SLinkedList* head);
    bool Search(SLinkedList* head,int Value);
    void removeFront();

    SLinkedList* getHead() const { return head; };   // return head address
    SLinkedList* getTail() const { return tail; };


private:
    SNode<T>* head;
    SNode<T>* tail;
    
};

template <class T>
const T& SLinkedList::front(){
    return this.head->element;
}

///Constructor
template <class T>
SLinkedList::SLinkedList():head(NULL),tail(NULL){}



//operator = overloading
template <class T>
SLinkedList<T>& SLinkedList<T>::operator=(SLinkedList<T>& rhs) // assignment operator
{

    if(this != rhs)//protection against multinclusion
    {
        //empty list
        while(head != NULL){removeFront();}
        for(SNode<T>* curr = rhs.head; curr != NULL; curr = curr.getNext()){


        }


    }

}

///Destructor avoiding memory leak, deletes every element in the array until head == NULL
SLinkedList::~SLinkedList(){
    while(!empty()){

        delete removeFront();
    }
}

///Removes element at head and reassigns the pointer to the next element in the list 
SLinkedList::removeFront(){

    Node *old = head;
    head = old->next;

    if(head == NULL){tail = NULL};
    delete old;

}

///Here we are returning true if list is empty, otherwise false
SLinkedList::empty(){

    return head == NULL;
}

///Here we are inserting a node at the End of the Linked List.
template <class T>
SLinkedList::void InsertAtTail(const T& value)
{

    SNode<T>* n = new SNode<T>;
    n.element = value;
    n.next = NULL;

    if(tail==NULL)
    {
        n.next = tail;
        tail = n;
        head = n;
        return;
    }
    else
    {
        tail.next = n;
        tail = tail.next;
        tail.next = NULL;
    }
}

///Here we are inserting node at the start of linked list.
SLinkedList::void InsertAtHead(SLinkedList* &head,int value)
{
    Node* n=new Node(value);

    n->next=head;
    head=n;
}

///Here we are displaying the whole linked list.
SLinkedList::void Display(SLinkedList* head)
{
    Node* n=head;
    while(n!=NULL)
    {
        cout<<n->Data<<"->";
        n=n->next;
    }
    cout<<"NULL"<<endl;

}

///Here we are searching for a particular element in the linked list.
SLinkedList::bool Search(SLinkedList* head,int Value)
{
    Node* n=head;
    while(n->next!=NULL)
    {
        if(n->Data==Value)
            return true;
        n=n->next;
    }
    return false;

}

int main()
{
    SLinkedList *head=NULL;

    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtTail(head,4);
    InsertAtTail(head,5);
    Display(head);
    InsertAtHead(head,0);
    InsertAtHead(head,9);
    Display(head);
    cout<<Search(head,4)<<endl;;
    cout<<Search(head,10)<<endl;
}
