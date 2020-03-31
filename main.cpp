#include <iostream>
#include <unordered_set>

using namespace std;

//untested and alpha stage
int featureFunction(unordered_set<int> mySet, int value){
    
    if( mySet.find(value) != mySet.end() ){
        cout<<"found value!"<<endl;
    } else {
        cout<<"Value not in set."<<endl;
    }

    return 0;
}

/*
    printTest function
*/
int printTest(int argOne){

    int i = 0;

    for( i = 0; i < argOne; ++i ){
        cout<<i<<" :piggie"<<((i>1) ? "s" : "")<<endl;
    }

    return 0;
}

/*
    Moving forward with development branch.
*/

/*
    Main function
*/
int main(int argc, char *argv[]){

    //variables
    int i = 0;
    int var1 = 10;
    int var2 = 100;
    unordered_set<int> mySet;

    mySet.insert(1);
    mySet.insert(2);
    mySet.insert(3);
    mySet.insert(4);

    //code begins
    if( var1 > 5 ){
        cout<<"var1 greater than 5"<<endl;
    } else {
        cout<<"var1 is not greater than 5"<<endl;
    }

    printTest(10);
    featureFunction(mySet, 4);

    return 0;
}