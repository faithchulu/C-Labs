#include <iostream>
using namespace std;

int main (){

    // double int (code=*115#)
    string code = "*115#";

   do{
        cout << "Enter code" << endl;
        cin >> code;
    }
    while( code != "*115#");
    
    cout<<"1. Cash withdraw "<<endl;
    cout<<"2. Cash deposit"<<endl;
    return 0;
}