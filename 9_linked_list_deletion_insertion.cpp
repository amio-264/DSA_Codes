#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void delete_head(Node *&head)
{
    Node *deleteNode = head; // create a node to push the head back
    head = head->next;       // push the head to next
    delete deleteNode;       // delete the created node
}

void delete_any_pos(Node *&head, int index)
{
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
}

void delete_value(Node *&head, int x)
{
    if (head->val == x)
    {
        Node *deletenode = head;
        head = head->next;
        delete deletenode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        if (tmp->next->val == x)
        {
            Node *deletenode = tmp->next;
            tmp->next = tmp->next->next;
            delete deletenode;
            break;
        }
        tmp = tmp->next;
    }
}

void delete_tail(Node *&head, Node *&tail, int index)
{
    Node *temp = head;
    for (int i = 1; i < index; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = head;
    temp->next = temp->next->next;
    delete deleteNode;
    tail = temp;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int x;
    while (1)
    {
        cin >> x;
        if (x == -1)
        {
            break;
        }
        insert_at_tail(head, tail, x);
    }
    delete_head(head);
    // delete_any_pos(head, 2);
    delete_tail(head, tail, 3);
    print_linked_list(head);
    return 0;
}