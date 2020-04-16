#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){

    map<string, vector<int> > person;

    person["Anna"].push_back(9);
    person["Anna"].push_back(10);
    person["Bella"].push_back(8);
    person["Bella"].push_back(8);

    for (map<string, vector<int>>::iterator it = person.begin(); it != person.end(); it++)
    {
        string name = it -> first;
        cout<<name<<": "<<flush;
        vector<int> scores = it -> second;
        for(int i = 0; i<scores.size();i++){
            cout<<scores[i]<<" "<<flush;
        }
        cout<<endl;
    }
    return 0;
}