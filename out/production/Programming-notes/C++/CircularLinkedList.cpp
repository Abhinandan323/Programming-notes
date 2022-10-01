#include<iostream>
using namespace std;
  
struct Node
{
   int data;
   struct Node *next;
};
struct Node *insertInEmpty(struct Node *last, int new_data)
{
   if (last != NULL)
   return last;
  
   struct Node *temp = new Node;
  
   temp -> data = new_data;
   last = temp;
  
   last->next = last;
  
   return last;
}
struct Node *insertAtBegin(struct Node *last, int new_data)
{
   if (last == NULL)
   return insertInEmpty(last, new_data);
  
   struct Node *temp = new Node;
   temp -> data = new_data;
   temp -> next = last -> next;
   last -> next = temp;
  
   return last;
}
struct Node *insertAtEnd(struct Node *last, int new_data)
{
   if (last == NULL)
   return insertInEmpty(last, new_data);
   struct Node *temp = new Node;
   temp -> data = new_data;
   temp -> next = last -> next;
   last -> next = temp;
   last = temp;
  
   return last;
}
struct Node *insertAfter(struct Node *last, int new_data, int after_item)
{
   if (last == NULL)
   return NULL;
  
   struct Node *temp, *p;
   p = last -> next;
   do
   {
      if (p ->data == after_item)
      {
         temp = new Node;
         temp -> data = new_data;
         temp -> next = p -> next;
         p -> next = temp;
        
         if (p == last)
         last = temp;
         return last;
       }
   p = p -> next;
 } while(p != last -> next);
  
   cout << "The node with data "<<after_item << " is not present in the list." << endl;
   return last;
  
}
void traverseList(struct Node *last) {
   struct Node *p;
   if (last == NULL) {
      cout << "Circular linked List is empty." << endl;
      return;
      }
p = last -> next; 
do {
      cout << p -> data << "==>";
      p = p -> next;
      } while(p != last->next);
   if(p == last->next)
   cout<<p->data;
   cout<<"\n\n";
   }
void deleteNode(Node** head, int key)
{
   if (*head == NULL)
   return;
  
   if((*head)->data==key && (*head)->next==*head) {
      free(*head);
      *head=NULL;
      }
Node *last=*head,*d;
if((*head)->data==key) {
   while(last->next!=*head) 
   last=last->next;
  
   last->next=(*head)->next;
   free(*head);
   *head=last->next;
   }
while(last->next!=*head&&last->next->data!=key) {
   last=last->next;
}
if(last->next->data==key) {
      d=last->next;
      last->next=d->next;
      cout<<"The node with data "<<key<<" deleted from the list"<<endl;
      free(d);
      cout<<endl;
      cout<<"Circular linked list after deleting "<<key<<" is as follows:"<<endl;
      traverseList(last);
      }
   else
   cout<<"The node with data "<< key << " not found in the list"<<endl;
   }
int main()
{
   struct Node *last = NULL;
  
   last = insertInEmpty(last, 30);
   last = insertAtBegin(last, 20);
   last = insertAtBegin(last, 10);
   last = insertAtEnd(last, 40);
   last = insertAtEnd(last, 60);
   last = insertAfter(last, 50,40 );
   cout<<"The circular linked list created is as follows:"<<endl;
   traverseList(last);
   deleteNode(&last,10);
   return 0;
}
