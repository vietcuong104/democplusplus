#include<iostream>

using namespace std;

int main(){

    //con tro hang: const int *ptr  -  thay doi duoc dia chi tro toi, ko thay doi duoc gia tri
    int value = 5;
    int const *ptr = &value;// con tro hang ptr

    int value2 = 6;
    ptr = &value2;//con tro co the tro den dia chi khac


    //hang con tro: int *const ptr  -  thay doi duoc gia tri, ko thay doi duoc dia chi tro toi
    int val = 10;
    int *const ptr2 = &val;
    *ptr2 = 20;

    //hang con tro hang: const int *const ptr - ko thay doi duoc dia chi ptr tro toi lan gia tri cua ptr
}