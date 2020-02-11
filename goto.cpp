#include<iostream>

using namespace std;

int main(){
checkduong:
    int n;
    cout<<"Nhap so nguyen duong N: "<<endl;
    cin>>n;
    if(n<0){
        goto checkduong;
    }
    cout<<"So nguyen duong N la: "<<n<<endl;
}