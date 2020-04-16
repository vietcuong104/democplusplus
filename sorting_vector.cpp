#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Test
{
    int id;
    string name;

public:
    Test(int id, string name): id(id),name(name){
    }

    void print(){
        cout<<id<<" : "<<name<<endl;
    }
    /* //function to sort 2 strings name
    bool operator<(const Test &other) const{
        return name < other.name;
    } */
    friend bool compare(const Test &a, const Test &b);
};

bool compare(const Test &a, const Test &b){
    return a.name <b.name;
}
int main(){
    vector<Test> tests;

    tests.push_back(Test(10, "Kenny"));
    tests.push_back(Test(50, "Jennie"));
    tests.push_back(Test(20, "Lisa"));
    tests.push_back(Test(15, "Rose"));

    sort(tests.begin(),tests.end(),compare);

    for (auto &i : tests)
    {
        i.print();
    }

    return 0;
    
}
