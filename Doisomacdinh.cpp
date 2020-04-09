#include<iostream>

using namespace std;

int add(int a, int b, int c=3){// c la doi so mac dinh
    return a+b+c;
}

//Nap chong ham
int main(){

    cout<<add(2 , 3)<<endl;//c = 3
    cout<<add(2 , 3 , 5)<<endl;//c = 5
}