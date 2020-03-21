#include <iostream>

using namespace std;

int main(){
    // int *p;
    // int value = 5;
    // p = &value;

    // cout<<"&value is: "<<&value<<endl;
    // cout<<"value of p is: "<<p<<endl;
    // cout<<"&p is: "<<*p;

    // *p = 100;
    // cout<<"\nvalue changed is: "<<value;

    int arr[] = {1,2,3,4};
    int *q = &arr[0];
    cout<<"value of arr[] is: "<<arr<<endl;
    cout<<"value of q is: "<<q<<endl;
    cout<<"&q is: "<<&q<<endl;

    q++;
    cout<<"value of q is: "<<q<<endl;
    cout<<"&q is: "<<*q<<endl;

    q+=2;
    cout<<"value of q is: "<<q<<endl;
    cout<<"&q is: "<<*q<<endl;
   
    q--;
    cout<<"value of q is: "<<q<<endl;
    cout<<"&q is: "<<*q<<endl;

    (*q) +=3 ;
    cout<<"value of q is: "<<q<<endl;
    cout<<"&q is: "<<*q<<endl;   

    //duyet mang bang con tro
    for (int* ptr = arr; ptr < arr + sizeof(arr)/sizeof(*arr); ptr++)
    {
        cout<<*ptr<<" | ";
    }
    

}