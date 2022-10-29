#include <iostream>
using namespace std;

struct Node
{
    char data;
    struct Node *next;
} *head = NULL;

void Push(char value)
{
    struct Node *t;
    t = new Node;
    if (t == NULL)
    {
        cout << "Stack overflow";
    }
    else
    {
        t->data = value;
        t->next = head;
        head = t;
    }
}

char Pop()
{
    struct Node *q;
    char x;
    if (head == NULL)
    {
        cout << "Stack is empty";
    }
    else
    {
        q = head;
        head = head->next;
        x = q->data;
    }
    return x;
}

void Display()
{
    struct Node *q;
    q = head;
    while (q != NULL)
    {
        cout << q->data << " ";
        q = q->next;
    }
    cout << endl;
}

int IsBalanced(char *exp)
{
    int i;
    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            Push(exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (head == NULL)
            {
                return 0;
            }
            Pop();
        }
    }
    if (head == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char *exp = "((a+b)*(c-d)2)";

    cout << IsBalanced(exp);
}