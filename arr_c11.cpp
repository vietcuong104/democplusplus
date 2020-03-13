#include<iostream>
#include<array>
#include<algorithm>

#define MAX 10

using namespace std;

void printArr(const array <int, MAX> &arr){
    for (const auto &item : arr) //tham chieu hang khong lam thay doi gia tri cua bien
    {
        cout<<item<<" ";
    }
    cout<<endl;
}

int main(){

    array <int, MAX> arr = {2, 5, 8, 3, 11};
    printArr(arr);

    //sap xep tang dung thu vien sort() co san
    sort(arr.begin(), arr.end());
    printArr(arr);

    //sap xep giam 
    sort(arr.rbegin(), arr.rend());
    printArr(arr);
}