#include<iostream>

using namespace std;

int main(){

    int num;
    srand(time(NULL));
    int s = rand()%10 + 1;
    do
    {
        cout<<"Nhap so duong N: "<<endl;
        cin>>num;
        if(s<num) {
            cout<<"Nho hon "<<num<<" co ma! Nhap lai di ban..."<<endl;
        }
        else if(s>num)
        {
            cout<<"Lon hon "<<num<<" co ma! Nhap lai di ban..."<<endl;
        }
        
    } while (num!=s);
    cout<<"wow...Ban da doan dung roi..."<<endl;
}