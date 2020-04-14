#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);

    //insert an element into list
    list<int>::iterator it = numbers.begin();
    it++;
    it = numbers.insert(it,5);
    cout<<"Element actually: "<<*it<<endl;

    //erase an element from list
    list<int>::iterator er = numbers.begin();
    er++;
    er = numbers.erase(er);

    for(list<int>::iterator it = numbers.begin();it!=numbers.end();){
       if(*it==3){
           numbers.insert(it,8);
       }
       if(*it==2){
           it = numbers.erase(it);
       }
       else{
           it++;
       }
    }

    for(list<int>::iterator it = numbers.begin();it!=numbers.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //erase from position start to position destination;
    list<int>::iterator pos1 = numbers.begin();
    list<int>::iterator pos2 = numbers.begin();
    pos2++;
    pos2++;
    cout<<"This Element: "<<*pos2<<endl;
    numbers.erase(pos1,pos2);
    for(list<int>::iterator it = numbers.begin();it!=numbers.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    //sort
    numbers.sort();
    for(list<int>::iterator it = numbers.begin();it!=numbers.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //merge() two list sorted, the new list will be automatic sorted;
    list<int> numbers_2;
    numbers_2.push_back(10);
    numbers_2.push_back(9);
    numbers_2.push_back(4);
    numbers_2.sort();

    numbers.merge(numbers_2);
    for(list<int>::iterator it = numbers.begin();it!=numbers.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

}