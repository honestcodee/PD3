#include<iostream>
using namespace std;
int main(){
    int n, sum;
cout<<"enter a 4-digit number:"<<endl;
cin>>n;
sum=(n%10)+((n/10)%10)+((n/100)%10)+((n/1000)%10);
cout<<"the sum od individual numbers is:"<<sum;
    return 0;
}