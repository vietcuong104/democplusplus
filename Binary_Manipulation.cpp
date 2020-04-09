#include<iostream>
#include<fstream>

using namespace std;

struct Person
{
    char name[50];
    int age;
    double height;

};


int main(){

    Person person = {"Akiho Yoshizawa", 30, 155.5};
    string fileName = "test_bin_file.bin";

    //write binary file
    ofstream ofs;
    ofs.open(fileName,ios::binary); 

    if(ofs.is_open()){
        ofs.write(reinterpret_cast<char *>(&person), sizeof(Person));
        ofs.close();
    }
    else{
        cout<<"Could not create file: "<<fileName<<endl;
    }
    
    //read binary file
    Person someone = {};
    ifstream ifs;
    ifs.open(fileName,ios::binary); 

    if(ifs.is_open()){
        ifs.read(reinterpret_cast<char *>(&someone), sizeof(Person));
        ifs.close();
    }
    else{
        cout<<"Could not read file: "<<fileName<<endl;
    }

    cout<<someone.name<<" "<<someone.age<<" "<<someone.height<<endl;
    return 0;
}
