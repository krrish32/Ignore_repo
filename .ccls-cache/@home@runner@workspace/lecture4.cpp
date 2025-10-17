#include <iostream>
using namespace std;

void printNameNTimes(int i,int n){
    if(i>n)return;  //base case
    cout<<"Krrish"<<endl;
    printNameNTimes(i+1,n); // recursive call
}

//print 1 to N
void printOneToN(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    printOneToN(i+1,n);
}

//print N to 1
void printNToOne(int i,int n){
    if(i<1) return;
    cout<<i<<endl;
    printNToOne(i-1,n);
}

void printOneToNUsingBackTracking(int i,int n){
    if(i>n) return;
    printOneToNUsingBackTracking(i+1,n);
    cout<<i<<endl;
}

int main() {
    //first Problem
    cout<<"Print Name N times\n";
    printNameNTimes(0, 4);
    cout<<endl;

    //second Problem
    cout<<"Print 1 to N\n";
    printOneToN(1, 4);
    cout<<endl;

    //third problem
    cout<<"Print N to 1\n";
    printNToOne(4, 4);
    cout<<endl;

    //fourth problem
    cout<<"Print 1 to N using backtracking\n";
    printOneToNUsingBackTracking(1, 4);
    return 0;
}
