#include<iostream>

using namespace std;

int add(int a, int b){
    return a+b;
}

double add(double a, double b){
    return a+b;
}

//Nap chong ham
int main(){

    cout<<add(2 , 3)<<endl;//chay ham add int
    cout<<add(2.3 , 3.5)<<endl;//chay ham add double
}