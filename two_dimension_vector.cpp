#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<vector<int>> vec(3, vector<int>(5,6)); // khoi tao vector 2 chieu 3 hang 5 cot, kieu int

    for(int row = 0; row <vec.size(); row++){
        for(int col = 0; col< vec[row].size(); col++){
            cout<<vec[row][col]<<" ";
        }
        cout<<endl;
    }

    return 0;
}