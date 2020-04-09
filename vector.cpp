#include<iostream>
#include<vector>

using namespace std;

void show(const vector<int> &array){
    for (const auto &element : array)
    {
        cout<<element<<"\t";
    }
    
    cout<<"Capacity: "<<array.capacity()<<" Size: "<<array.size()<<endl;
}

int main(){

    vector<int> array;
    vector<int> array2 = {1,5,9,10};
    //vector<int> array{1,5,9,10};

    array2.resize(10); //thay doi do dai vector thanh 10 phan tu

    array.push_back(7);//them 1 phan tu vao cuoi vector
    show(array);

    array.push_back(8);
    show(array);

    array.push_back(9);
    show(array);

    array.push_back(5);


    //tra ve phan tu cuoi cung cua mang
   // cout<<"Phan tu duoc them cuoi cung la: "<<array.back()<<endl;

    array.pop_back();//xoa 1 phan tu vao cuoi vector
    show(array);

    array.pop_back();
    show(array);

    array.pop_back();
    show(array);

    array.pop_back();
    show(array);


}