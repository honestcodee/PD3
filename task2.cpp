#include<iostream>
using namespace std;
int main(){
 int m,n,s;
 cout<<"enter number of minutes:"<<endl;
 cin>>m;
 cout<<"enter the3 frames per second:"<<endl;
 cin>>s;
 n=(m*60)*s;
 cout<<"total number of frames: "<<n;
    return 0;
}
