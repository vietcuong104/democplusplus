#include<iostream>
#include<map>

using namespace std;

int main(){

    map<string, int> info;
    info["Trang"] = 26;
    info["Cuong"] = 28;
    info["Phuong"] = 25;

    //insert an element to map;
    info.insert(pair<string, int> ("Ngoc",25));

    for(map<string, int>::iterator it = info.begin(); it != info.end(); it++){
        cout<< it -> first<<" : "<< it -> second<<endl;
    }

    if(info.find("Phuong") != info.end()){
        cout<<"Exist this person in the database...";
    }
    else{
        cout<<"Key not found...";
    }
}