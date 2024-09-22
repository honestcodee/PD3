#include<iostream>
using namespace std;
int main(){
int pounds,cost,area, cper, csq;
cout<<"enetr the size of fertilizer bag in pounds:"<<endl;
cin>>pounds;
cout<<"enetr the cost of the bag: $"<<endl;
cin>>cost;
cout<<"Enetr the area in square feet that can be covered by the bag:"<<endl;
cin>>area;
cper=cost/pounds;
csq=pounds*area;
cout<<"cost of fertilizing per pound: "<<cper;
cout<<"cost of fertilizing per square: "<<csq;


  return 0;
}