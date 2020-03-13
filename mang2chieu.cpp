#include<iostream>
#include<cstdlib>
#include<ctime>

#define ROW 20
#define COL 30

using namespace std;

void nhapMang(int a[ROW][COL], int &row, int &col);
void xuatMang(int a[ROW][COL], int row, int col);
int tongDong(int a[ROW][COL], int iRow, int col );

int main(){
    int myArr[ROW][COL];
    int row, col, iRow;
    int sum = 0;
    nhapMang(myArr,row,col);
    xuatMang(myArr,row,col);

    cout<<"Nhap hang can tinh tong: ";
    cin>>iRow;
    sum = tongDong(myArr,iRow,col);
    cout<<"Tong dong thu "<<iRow<<" la: "<<sum<<endl;

}

//ham nhap mang 2 chieu
void nhapMang(int a[ROW][COL], int &row, int &col){

    srand(time(NULL));
    cout<<"Nhap so phan tu hang: ";
    cin>>row;
    cout<<"Nhap so phan tu cot: ";
    cin>>col;

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            a[i][j] = rand() % 100;
        }
      
    }
    
}

//ham xuat mang 2 chieu
void xuatMang(int a[ROW][COL], int row, int col){

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
      
    }
}

//ham tinh tong dong
int tongDong(int a[ROW][COL], int iRow, int col ){
    int sum = 0;
    for (int i = 0; i < col; i++)
    {
        sum+= a[iRow-1][i];
    }
    return sum;
}