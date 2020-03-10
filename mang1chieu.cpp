#include<iostream>
#include<ctime>
#include<cstdlib>

#define MAX 100

using namespace std;

void nhapMang(int a[], int &n);
void xuatMang(int a[], int n);
void themPhanTu(int a[], int &n, int index, int x);
void xoaPhanTu(int a[], int &n, int index);

int main(){
    int myArr[MAX];
    int arrSize;
    nhapMang(myArr,arrSize);
    xuatMang(myArr,arrSize);

    int vitri;
    int x;
    int idx2;
    cout<<"Nhap vi tri can them: "<<endl;
    cin>>vitri;
    cout<<"Nhap phan tu can them: "<<endl;
    cin>>x;
    themPhanTu(myArr,arrSize,vitri,x);
    xuatMang(myArr,arrSize);

    cout<<"Nhap vi tri can xoa: "<<endl;
    cin>>idx2;
    xoaPhanTu(myArr,arrSize,idx2);
    xuatMang(myArr,arrSize);

    return 0;
}

void nhapMang(int a[], int &n){
    srand(time(NULL));
    cout<<"Nhap so phan tu cua mang: "<<endl;
    cin>>n;
    for(int i=0; i<n;i++){
        a[i] = rand();
    }
}
void xuatMang(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;
    }
    
}
void themPhanTu(int a[], int &n, int index, int x){
    if(index>=0 && index <=n){
        for(int i=n; i>index;i--){
            a[i] = a[i-1];
        }
        a[index] = x;
        n++;
    }
}
void xoaPhanTu(int a[], int &n, int index){
    if(index>=0 && index<n){
        for(int i = index;i<n;i++){
            a[i] = a[i+1];
        }
        n--;
    }
}