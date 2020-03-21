#include<iostream>

using namespace std;

int main(){
    cout<<"Nhap vao chieu dai mang: ";
    int length;
    cin>>length;

    int *array = new int[length]; //kich thuoc mang co the la bien so

    //do something

    delete[] array; //tra lai vung nho mang array cho hdh

    
    //thay doi kich thuoc vung nho da duoc cap phat
    int *p = new int[5];
	for (int i = 0; i < 5; i++)
	{
		cin >> *(p + i);
	}

	//re-allocate
	int *p_temp = p;
	p = new int[10];

	//copy data
	for (int i = 0; i < 5; i++)
	{
		*(p + i) = *(p_temp + i);
	}

	//dealocate old memory area
	delete[] p_temp;

	//keep using data
	//and then delete it

	delete[] p;

    return 0;
}