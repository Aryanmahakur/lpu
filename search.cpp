#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=nullptr;
    }
};
class linkedlist{
    private:
    node* head;
    public:
    linkedlist(){
    head=nullptr;
    }

   
    node* insert(int data){
        node* newnode= new node(data);
        if(head==nullptr){
            head=newnode;
            return head;
        }
        node* curr= head;
        while (curr->next!=nullptr)
        {
          curr=curr->next;
        }
       
        curr->next=newnode;
        return head;
        
    }
    void display(){
      node* temp =head;
      if(head==nullptr){
        return;
      }
      while (temp!=nullptr)
      {
        cout<<temp->data<<" ";
        temp=temp->next;
      }
      
    }
    void search(int data){
        int i=0;
        bool found=false;
        node* curr=head;
        while(curr!=nullptr){
            if(curr->data==data){
                cout<<"found "<<curr->data<< " at index "<<i<<endl;
                found=true;
                return;
            };
            

            i++;
            curr=curr->next;
        }
        if(!found){
            cout<<"not present"<<endl;
        }
    }
   
   
};
int main(){
 
    linkedlist li;
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        li.insert(a);
    }
   int t;
   cout<<"enter t"<<endl;
   cin>>t;
  
    li.search(t);
    li.display();
    return 0;
}