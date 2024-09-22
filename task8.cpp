#include<iostream>
using namespace std;
int main(){
int veg,frt,totkg,totfrt,earn;
cout<<"enetr vegetables price per kilogram:(in coins):"<<endl;
cin>>veg;
cout<<"enetr fruit price per kilogram:(in coins):"<<endl;
cin>>frt;
cout<<"enter total kg of vegetables:"<<endl;
cin>>totkg;
cout<<"enter total kg of fruits:"<<endl;
cin>>totfrt;
earn=(veg*totkg)+(frt*totfrt);
cout<<"Total number in rupees: "<<earn;

    return 0;
}