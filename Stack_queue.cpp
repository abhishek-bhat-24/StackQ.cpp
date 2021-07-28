#include<iostream>
#include<stack>
using namespace std;



class StackQ{
    stack<int>s1;
    stack<int>s2;
    public:
    void push(int x);
    int pop();
};

void StackQ::push(int x){
    s1.push(x);

}

int StackQ:: pop(){
    if(s1.empty()){
        cout<<"Que is empty ";
        return -1;
    }
    else{
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();

        }
        int r=s2.top();
        s2.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        return r;
    }
}

int main(){
    StackQ sq;
    int query;
    cin>>query;
    while(query){
        int tp;//type of query
        cin>>tp;
        if(tp==1){
            int ele;
            cin>>ele;
            sq.push(ele);
        }
        else if(tp==2){
            int r=sq.pop();
            cout<<r<<endl;
        }
        query--;
    }
    return 0;
}