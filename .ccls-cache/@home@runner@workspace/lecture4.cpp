#include <bits/stdc++.h>
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

void sumOfFirstNumber1(int n,int sum){
    if(n<0){
        cout<<"sum of n terms:"<<sum;
      return;  
    } 
    sum = sum+n;
    n--;
    sumOfFirstNumber1(n,sum);
}

int sumOfFirstNumber2(int n){
    if(n==0) return 0;
    return n+ sumOfFirstNumber2(n-1);
}

int factorial(int n){
    if(n==1)return 1;
    return n*factorial(n-1);
}

void reverseArrUsingRec(int l, int r, int arr[]){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    reverseArrUsingRec(l+1,r-1,arr);
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
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
    cout<<endl;

    //fifth Problem
    cout<<"\nSum of first N numbers using parameterised way\n";
    sumOfFirstNumber1(4,0);
    cout<<endl;

    //sixth problem
    cout<<"\nSum of first n numbers using function return\n";
    int sum =sumOfFirstNumber2(4);
    cout<<"sum of n :"<<sum;
    cout<<endl;

    //seventh Problem
    cout<<"\nFactorial of N numbers:"<< factorial(4);
    cout<<endl;

    //eight Problem
    cout<<"\nReverse an array using recursion\n";
    int arrRevRec[] = {1,2,3,4,5,6};
    reverseArrUsingRec(0,5,arrRevRec);
    printArray(arrRevRec,6);
    return 0;
}
