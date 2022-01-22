#include<iostream>
using namespace std;
void acceptElementOfarray(int[], int size);
void displayElementOfarray(int[], int s);
void summationOfarray(int c[],int a[],int b[],int x);
void displaySum(int ss [],int size);
int main(){
    //int x[4];
    int b[4];
    int a[4];
    int sum[4];
    //acceptdata
    acceptElementOfarray(a,4);
    acceptElementOfarray(b,4);
    //dispay element's of a:
    cout<<" elements of a:"<<endl;
    displayElementOfarray(a,4);
    cout<<endl;
    //display elements of b:
   cout<<"elements of b:"<<endl;
    displayElementOfarray(b,4);
    cout<<endl;
    //summation of array:
    summationOfarray(sum,a,b,4);
    //display the sum;
    displaySum(sum,4);
    return 0;
}
//function for accept array elements:
void acceptElementOfarray(int z[], int size){
    for(int i=0;i<size;i++){
        cout<<"Enter "<<i<<"th element";
        cin>>z[i];
    }
}
//function for display elements;
void displayElementOfarray(int z[], int size){
    for(int i=0;i<size;i++){
        cout<<z[i]<<" :";
        
    }
    cout<<endl;
}
//function for add two array;
void summationOfarray(int c[],int a[],int b[],int x){
   
    for(int i=0;i<x;i++){
         c[i]=a[i]+b[i];
    }
}
void displaySum(int ss [],int size){
    cout<<"the sum of array's elements:"<<endl;
    for(int i=0;i<size;i++){
        cout<<ss[i]<<" ";
    }
    cout<<"\n";
}