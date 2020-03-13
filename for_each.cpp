#include<iostream>

using namespace std;

int main(){

    int arr[] = {2, 4, 6, 10, 5, 3};
    for (const auto &item : arr) //tham chieu hang khong lam thay doi gia tri cua bien
    {
        cout<<item<<" ";
    }
    cout<<endl;
    return 0;
}