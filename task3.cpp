#include<iostream>
using namespace std;
int main(){
float ivel,fvel,acc,time;
cout<<"enetr the initial velocity:"<<endl;
cin>>ivel;
cout<<"enetr acceleration:"<<endl;
cin>>acc;
cout<<"enter time"<<endl;
cin>>time;
fvel=(acc*time)+ivel;
cout<<"final velocity:"<<fvel;
    return 0;
}