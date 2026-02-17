#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = nullptr;
    }
};
// insertation
void insert_at_head(Node* &head,Node* &tail,int val)
{
     Node* newNode = new Node(val);
    if(head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void insert_at_any_pos(Node* head,Node*tail, int val,int idx)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i = 0; i<idx-1;i++)
        tmp = tmp->next;
    
    newNode->next= tmp->next;
    tmp->next= newNode;

}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head == nullptr)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}


// deletation



void delete_at_head(Node* &head)
{
    if(head == nullptr) return;
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
}
void delete_at_any_pos(Node* head,Node*tail,int idx)
{
    
    Node* tmp = head;
    for(int i = 0; i<idx-1;i++)
        tmp = tmp->next;
    Node* deleteNode = tmp->next;
    tmp->next= tmp->next->next;
   delete deleteNode;

}
void delete_at_tail(Node* &head,Node* &tail)
{
    Node* tmp = head;
    while(tmp->next->next != nullptr)
    {
        tmp= tmp->next;
    }
    Node* deleteNode = tmp->next;
    delete deleteNode;
    tmp->next =nullptr;
    tail = tmp;
    
}

void output(Node* head)
{
    Node* tmp = head;
    while(tmp != nullptr)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main()
{
    Node* head = nullptr;
    Node* tail = nullptr;
    
    int val;
    
    while(true){
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head,tail,val);
    }

    // int inh;
    // cin >> inh;
    // insert_at_head(head,tail,inh);
    int x,idx; cin >> x >> idx;
    // insert_at_any_pos(head,tail,x,idx);
    // delete_at_head(head);
    // delete_at_tail(head,tail);
    delete_at_any_pos(head,tail,idx);
    output(head);
    return 0;
}