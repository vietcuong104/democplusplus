#include<iostream>

using namespace std;

void dosomething(){
    int *ptr = new int;
}/*sau moi lan chay ham nay ket thuc thi con tro se tu dong bi huy tuy nhien ptr tro den dia chi vung nho duoc cap phat dong, khi con tro bi huy thi vung
 nho tren se ko the xac dinh, ket qua la chuong trinh ko the giai phong vung nho tren - van de tren duoc goi la RO RI BO NHO*/

int main(){

    int *ptr = new int; //cap phat dong mot so nguyen va gan dia chi cho con tro ptr nam giu
    *ptr = 10;

    delete ptr; //trao tra lai vung nho ma ptr dang tro den cho he dieu hanh, ptr la con tro lo lung

    ptr =  nullptr;// gan ptr thanh con tro null
}