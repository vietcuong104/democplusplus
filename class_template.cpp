#include<iostream>

using namespace std;

template<class Type>
class Point{
    private:
        Type x;
        Type y;
    public:
        Point(Type x, Type y):x(x),y(y){

        }
        Point(){}
        void print(){
            cout<<"x : "<<x<<endl;
            cout<<"y : "<<y<<endl;
        }
};

int main(){

    Point<int> p(5.5,10.5);
    p.print();

    return 0;
}