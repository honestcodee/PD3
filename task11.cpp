#include<iostream>
using namespace std;
int main(){
int age,move, avg;
cout<<"enter the persons age:";
cin>>age;
cout<<"Enter number of times they've moved";
cin>>move;
avg=age/(move+1);
cout<<"the average number of years lived in the same house:"<<avg;

    return 0;
}