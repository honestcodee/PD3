#include<iostream>
using namespace std;
int main(){
int i,p,chance;
cout<<"enetr the imposter count:"<<endl;
cin>>i;
cout<<"enetr player count:"<<endl;
cin>>p;
chance=100*(i/p);
cout<<"chances of being an imposter:"<<chance<<"%";
    return 0;
}