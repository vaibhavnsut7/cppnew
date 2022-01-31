#include<iostream>
using namespace std;

const int MAX=10;
class stack{
protected:
    int arr[MAX];
    int top;
public:
    stack(){
        top=-1;
    }
    void push(int num){
        top+=1;
        arr[top]=num;
    }
    int pop(){
        int num;
        num=arr[top];
        top--;
        return num;
    }
};

class newstack:public stack{
public:
    bool isfull(){
        if (top==MAX-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isempty(){
        if (top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    newstack stk;
    if (!stk.isfull()){
        stk.push(10);
    }
    else{
        cout<<"stack is full"<<endl;
    }
    if (!stk.isfull()){
        stk.push(20);
    }
    else{
        cout<<"stack is full"<<endl;
    }
    if (!stk.isfull()){
        stk.push(30);
    }
    else{
        cout<<"stack is full"<<endl;
    }
    if (!stk.isfull()){
        stk.push(40);
    }
    else{
        cout<<"stack is full"<<endl;
    }
    //-----------pop--------------//
    int n;
    if (!stk.isempty()){
        n=stk.pop();
        cout<<"item popped "<<n<<endl;
    }
    else{
        cout<<"stack empty"<<endl;
    }
    if (!stk.isempty()){
        n=stk.pop();
        cout<<"item popped "<<n<<endl;
    }
    else{
        cout<<"stack empty"<<endl;
    }
    if (!stk.isempty()){
        n=stk.pop();
        cout<<"item popped "<<n<<endl;
    }
    else{
        cout<<"stack empty"<<endl;
    }
    if (!stk.isempty()){
        n=stk.pop();
        cout<<"item popped "<<n<<endl;
    }
    else{
        cout<<"stack empty"<<endl;
    }
    return 0;
}
