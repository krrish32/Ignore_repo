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
}

int main() {
    //first 
    printNameNTimes(0, 4);
    return 0;
}
