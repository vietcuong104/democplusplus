#include<iostream>

using namespace std;

template<typename T>
void Swap(T &a, T &b){
    T tmp = a;
    a = b;
    b = tmp;
}
int main(){
    int a = 3, b = 5;
    float x = 10.4, y = 5.6;
    
    Swap(a,b);
    cout<<a<<" - "<<b<<endl;
    
    Swap(x,y);
    cout<<x<<" - "<<y<<endl;
}