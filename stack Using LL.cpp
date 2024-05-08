#include<iostream>
using namespace std;
template<typename T>
class node{
public:
    T data;
    node<T> *next;
    node(T data){
        this->data=data;
        next=NULL;
    }
};
template<typename T>
class stack{
    node<T> *head;
    int size;
public:
    stack(){
        head=NULL;
        size=0;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        if(size==0){
            return true;
        }
        else{
            return false;
        }
    }
    void push(T element){
        node<T> *newNode=new node<T>(element);
        newNode->next=head;
        head=newNode;
        size++;
    }
    T pop(){
        if(isEmpty()){
            return 0;
        }
        T ans=head->data;
        node<T> *temp=head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }
    T top(){
        if(isEmpty()){
            return 0;
        }
        return head->data;
    }

};
int main(){
    stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    s.push(103);
    s.push(104);

    cout<<s.top()<<endl;

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;
}
