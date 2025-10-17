#include <iostream>
using namespace std;

void printNameNTimes(int i,int n){
    if(i>n)return;  //base case
    cout<<"Krrish"<<endl;
    printNameNTimes(i+1,n); // recursive call
}

void printOneToN(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    printOneToN(i+1,n);
}

int main() {
    //first Problem
    printNameNTimes(0, 4);

    //second Problem
    printOneToN(1, 4);

    return 0;
}
