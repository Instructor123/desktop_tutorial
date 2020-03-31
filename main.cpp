#include <iostream>

using namespace std;

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

    //code begins
    if( var1 > 5 ){
        cout<<"var1 greater than 5"<<endl;
    } else {
        cout<<"var1 is not greater than 5"<<endl;
    }

    return 0;
}