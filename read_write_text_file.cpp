#include <iostream>
#include <fstream>

using namespace std;

int main(){

    //ofstream outFile;
    fstream outFile;
    string fileName = "heyGuy.txt";

    //outFile.open(fileName);
    outFile.open(fileName, ios::out);
    
    if(outFile.is_open()){
        outFile<<"This is a tutorial for testing function writing a text file with C++ program"<<endl;
        outFile<<12344321<<endl;
        outFile<<"Khong sao ma em day roi roi..."<<endl;
        outFile.close();
    }
    else{
        cout<<"Could'nt found this file..."<<endl;
    }

    fstream inFile;
    inFile.open(fileName, ios::in);

    if(inFile.is_open()){
        while (inFile)
        {
           string line;
           getline(inFile,line);
           cout<<line<<endl;
        }
        inFile.close();
        
    }
    else{
        cout<<"Cannot opne file: "<<fileName<<endl;
    }
    return 0;
}