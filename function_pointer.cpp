#include<iostream>

using namespace std;

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
bool asc(int a, int b){
    return a>b;
}
bool dsc(int a, int b){
    return a<b;
}
void selection_sort(int *arr, int n, bool (*function_sort)(int, int)){//truyen vao ham con tro
    for (int i = 0; i < n-1; i++)
    {   int min_idx = i;
        for (int j = i+1; j < n; j++)
        {
            if(function_sort(arr[min_idx],arr[j])){
                min_idx = j;
            }
        }
        swap(arr[min_idx],arr[i]);
    }
    
}

void printArray(int arr[], int n){

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int array[] = {11,22,13,65,27,06};
    int n = sizeof(array)/sizeof(int);
    
    //sap xep tang
    selection_sort(array,n,asc);
    printArray(array,n);

    //sap xep giam
    selection_sort(array,n,dsc);
    printArray(array,n);
}