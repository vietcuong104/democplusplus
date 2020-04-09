#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream inputFile;
    string fileName = "parsing_text.txt";

    inputFile.open(fileName);
    if(inputFile){

        while (inputFile)
        {
            string line;
            getline(inputFile, line, ':');

            int pop;
            inputFile>>pop;

            inputFile>>ws;//parsing the blank space
            
            if(!inputFile) break;//parsing duplicate at the end;

            cout<<"'"<<line<<"'"<<"---"<<"'"<<pop<<"'"<<endl;
        }
        
    }
    else{
            cout<<"Could not file this file..."<<endl;
        }
}