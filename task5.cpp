#include<iostream>
using namespace std;
int main(){
    string name;
    float target;
    int days;
    cout<<"Enter the name of the person: "<<endl;
    cin>>name;
    cout<<"Enter the target weight loss in kilograms: "<<endl;
    cin>>target;
    days=target*15;
    cout<<name<<" will need "<<days<<" days to loss "<<target<<" kg of weight by the following doctor's suggestions:";

    return 0;
}