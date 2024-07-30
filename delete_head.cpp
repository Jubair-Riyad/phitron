#include <iostream>
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

void insert_at_head(node *&head, int val)
{
    node *newNode = new node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_position(node *head, int pos, int val)
{
    node *newNode = new node(val);
    node *temp = head;
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void insert_at_tail(node *&head, int val)
{
    node *newNode = new node(val);
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

void delete_head(node *&head)
{
    node *temp = head;
    head = head->next;
    delete temp;
}

void delete_at_position(node *head, int pos)
{
    node *temp = head;
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
    }
    node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void print_linked_list(node *head)
{
    cout << endl << "Your Linked List: ";
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert Head" << endl;
        cout << "Option 2: Insert at Position" << endl;
        cout << "Option 3: Insert at tail" << endl;
        cout << "Option 4: Delete Head" << endl;
        cout << "Option 5: Delete at Position" << endl;
        cout << "Option 6: Print Linked List" << endl;
        cout << "Option 7: Terminate" << endl;

        int op;
        cout << "Enter Option: ";
        cin >> op;

        if (op == 1)
        {
            int val;
            cout << "Enter Value: ";
            cin >> val;
            insert_at_head(head, val);
        }
        else if (op == 2)
        {
            int pos, val;
            cout << endl << "Enter Position: ";
            cin >> pos;
            cout << endl << "Enter Value: ";
            cin >> val;
            if (pos == 0)
            {
                insert_at_head(head, val);
            }
            else
            {
                insert_at_position(head, pos, val);
            }
        }
        else if (op == 3)
        {
            int val;
            cout << endl << "Enter Value: ";
            cin >> val;
            insert_at_tail(head, val);
        }
        else if (op == 4)
        {
            delete_head(head);
        }
        else if (op == 5)
        {
            int pos;
            cout << endl << "Enter Position: ";
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else
            {
                delete_at_position(head, pos);
            }
        }
        else if (op == 6)
        {
            print_linked_list(head);
        }
        else if (op == 7)
        {
            break;
        }
    }
    
    return 0;
}
