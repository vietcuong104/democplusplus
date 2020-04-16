#include <queue>
#include <iostream>
#include <stack>

using namespace std;

class Test
{
private:
    string name;

public:
    Test(string name):name(name){\

    }

    ~Test(){
        //cout<<"Object destroyed"<<endl;
    }
    void print(){
        cout<<name<<endl;
    }
};
int main(){
    //LIFO
    stack<Test> testStack;

    testStack.push(Test("Mike"));
    testStack.push(Test("Dan"));
    testStack.push(Test("Lee"));

    if(testStack.empty()){
        cout<<"Empty stack"<<endl;
    }
    else{
        cout<<"Stack size: "<<testStack.size()<<endl;
        cout<<"ready to work"<<endl;
    }
    Test test1 = testStack.top();
    cout<<"The element in top is: ";
    test1.print();
    cout<<endl;

    while (!testStack.empty())
    {
        testStack.top().print();
        testStack.pop();
    }
    cout<<endl;


    // char s[10];
    // stack<char> myStack;
    // if(myStack.empty()){
    //     cout<<"Ready to work"<<endl;
    // }
    // cin>>s;
    // for(int i=0;i<10;i++){
    //     if(s[i]=='('){
    //         myStack.push(s[i]);
    //     }
    //     if(s[i]==')'){
    //         myStack.pop();
    //     }
    // }
    // if(myStack.empty()){
    //     cout<<"String is valid"<<endl;
    //     cout<<myStack.size()<<endl;
    // }
    // else{
    //     cout<<"String is invalid"<<endl;
    //     cout<<myStack.size()<<endl;
    // }

    //FIFO
    queue<Test> testQueue;

    testQueue.push(Test("Mike"));
    testQueue.push(Test("Dan"));
    testQueue.push(Test("Lee"));

    if(testQueue.empty()){
        cout<<"Empty Queue"<<endl;
    }
    else{
        cout<<"Queue size: "<<testQueue.size()<<endl;
        cout<<"ready to work"<<endl;
    }
    Test test2 = testQueue.front();
    cout<<"The element in top is: ";
    test1.print();
    cout<<endl;
    
    while (!testQueue.empty())
    {
        testQueue.front().print();
        testQueue.pop();
    }

    return 0;
}