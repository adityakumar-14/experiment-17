#include<iostream>
using namespace std;
class link{
    public:
    int data;
    link* next;

    link(int num) {
        data = num;
        next = NULL;
    }
};
int main(){
    link* l1 = new link(6);
    cout<<l1->data<<" "<<l1->next;
}

/* output
6 0 */
