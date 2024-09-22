#include<iostream>
using namespace std;
int main(){
   int n,sum;
   cout<<"enetr the number of sides of a polygon"<<endl;
   cin>>n;
   sum=(n-2)*180;
   cout<<"the sum of internal angles of a "<<n<<"-sided polygon is "<<sum<<" degrees";

    return 0;
}
