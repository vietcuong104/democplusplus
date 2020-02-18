#include<iostream>
#include<random>

using namespace std;

int main(){

    int num;
    // srand(time(NULL));
    // int s = rand()%10 + 1;
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<int> uni(1,10);
    auto s = uni(rng);
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