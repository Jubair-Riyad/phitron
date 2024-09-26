#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int val;
    node *next;

    node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(node *&head, int v)
{
    node *newNode = new node(v);
    newNode->next = head;
    head = newNode;
}

void insert_at_position(node *head, int pos, int v)
{
    node *newNode = new node(v);
    node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_at_tail(node *&head, int v)
{
    node *newNode = new node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void delete_at_position(node *head, int pos)
{
    node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void print_linked_list(node *head)
{
    node *temp=head;
    cout << "Your Linked List: ";
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node* head = NULL;
    while (true)
    {
        int op;
        cout << "Option 1: Insert At Head" << endl;
        cout << "Option 2: Insert At Position" << endl;
        cout << "Option 3: Insert At Tail" << endl;
        cout << "Option 4: Delete At Position" << endl;
        cout << "Option 5: Print Linked List" << endl;
        cout << "Option 6: Terminate" << endl;
        cout << endl << "Enter Option: ";
        cin >> op;
        if (op == 1)
        {
            int v;
            cout << endl << "Enter Value: ";
            cin >> v;
            insert_at_head(head, v);
        }
        else if (op == 2)
        {
            int pos, v;
            cout << "Enter Position: ";
            cin >> pos;
            cout << "Enter Value: ";
            cin >> v;
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
                insert_at_position(head, pos, v);
            }
        }
        else if (op == 3)
        {
            int v;
            cout << "Enter Value: ";
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 4)
        {
            int pos;
            cout << "Enter Position: ";
            cin >> pos;
            delete_at_position(head, pos);
        }
        else if (op == 5)
        {
            print_linked_list(head);
        }
        else if (op == 6)
        {
            break;
        }
    }

    return 0;
}
