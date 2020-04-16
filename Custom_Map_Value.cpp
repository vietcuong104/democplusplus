#include<iostream>
#include<map>

using namespace std;

class People{
    private:
        string name;
        int age;
    
    public:
    People(){
        // name = "";
        // age = 0;

    }

    People(string name,int age){
        this -> name = name;
        this -> age = age;
    }
    void print(){
        cout<<name<<" : "<<age<<endl;
    }
};


int main(){

    map<int, People> info;
    info[0] = People("Trang", 26);
    info[1] = People("Phuong", 25);
    info[2] = People("Cuong", 28);

    for(map<int, People>::iterator it = info.begin(); it != info.end(); it++){
        cout<< it -> first<<" : "<<flush;
        it -> second.print();
    }
}