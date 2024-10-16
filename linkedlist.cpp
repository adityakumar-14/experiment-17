#include <iostream>
using namespace std;

class link{
    public:
    int data ;
    
    link* next;

    link(int num){
        data= num;
        next= NULL;
    }
};

void insert_head(link* &head, int data){
    link* new_node = new link(data);
    new_node ->next =head;
    head = new_node;
}

void disp(link* head){
    link* temp = head;
    while(temp!=NULL){
        cout<<temp-> data<<"->";
        temp = temp->next; 
    }
    cout<<"NULL"<<endl;
}

int main(){
    link* head = NULL;
    insert_head (head,30);
    disp(head);

    insert_head(head, 32);
    disp(head);

    insert_head(head, 35);
    disp(head); 
}
