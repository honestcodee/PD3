#include<iostream>
using namespace std;
int main(){
int n,w,h, cal;
cout<<"enter the number of square meter you can paint:"<<endl;
cin>>n;
cout<<"Width of the single wall:"<<endl;
cin>>w;
cout<<"height of the single wall:"<<endl;
cin>>h;
cal=n/(w*h);
cout<<"the number of walls you can paint:"<<cal;


    return 0;
}