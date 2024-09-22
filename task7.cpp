#include<iostream>
using namespace std;
int main(){
string mname;
int adtik, chtik, nad, nch, donate, amount, charity, remain;
cout<<"enetr the movie name:"<<endl;
cin>>mname;
cout<<"enetr the adult ticket price:"<<endl;
cin>>adtik;
cout<<"enetr the child ticket price:"<<endl;
cin>>chtik;
cout<<"enetr the number of adult tickets sold:"<<endl;
cin>>nad;
cout<<"enetr the number of child tickets sold:"<<endl;
cin>>nch;
cout<<"enter the percentage to be donated to the charity:";
cin>>donate;
amount=(adtik*nad)+(chtik*nch);
charity=amount*(donate/100);
remain=amount-charity;
cout<<"movie:"<<mname;
cout<<"total amount generated:"<<amount;
cout<<"donated to charity "<<donate<<" % :"<<charity;
cout<<"remaining amount: "<<remain;
    return 0;
}