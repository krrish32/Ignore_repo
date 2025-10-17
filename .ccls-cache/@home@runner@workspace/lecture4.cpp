#include <iostream>
using namespace std;

void printNameNTimes(int i,int n){
    if(i>n)return;  //base case
    cout<<"Krrish"<<endl;
    printNameNTimes(i+1,n); // recursive call
}

int main() {

    printNameNTimes(0, 4);
    return 0;
}
