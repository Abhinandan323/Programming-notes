#include<iostream>
using namespace std;

struct node
{
    int data;   //to get the data of the current element
    node* link; // Self referential structure
};
class stack
{
    node* top;
    public:
    stack()  // Constructor 
    {
        top=NULL;
    }
    void push();
    void pop();
    void display();
    ~stack(); //Destructor
};
void stack:: push()
{
    node*temp=new node; // To push a node, we first create it
    cout<<"Enter data: \n";
    cin>>temp->data;
    temp->link=top;
    top=temp; // we make the top point to the newly inserted node
}
void stack::pop()
{
    if(top!=NULL)
    {
        node *temp=top; // we make temp point to the last node that is to be deleted (LIFO)
        cout<<temp->data<<"deleted \n";
        top=temp->link; // move the top to the second last node which no becomes the last node
        delete temp; // to delete the last node physically
    }
    else
    cout<<"Stack is empty. \n";
}
void stack:: display()
{
    node*temp=top;  // we assign temp the address of the last node
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->link; // move temp to the next node in the stack
    }
}
stack:: ~stack()
{
    while(top!=NULL)
    {
        node*temp=top;
        top=top->link;
        delete temp;
    }
}
int main()
{
    stack s; //constructor called
    int choice;
    do
    {
       cout<<"1.Push 2.Pop 3.Display 4.Quit\n";
       cin>>choice;
       switch(choice)
       {
           case 1:s.push();
           break;
           case 2:s.pop();
           break;
           case 3:s.display();
           break;
           case 4:cout<<"Quitting...\n";
           break;
           default:cout<<"Enter valid choice.\n";
       }
    } while (choice!=4);
} // the destructor gets called and releases the memory occupied. 
