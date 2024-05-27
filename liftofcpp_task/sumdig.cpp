#include <iostream>
using namespace std;
int main() {
    int n,q,r,s=0;
    cout<<"enter a number:";
    cin>>n;
   do
   {
       q=n/10;
       r=n%10;
       n=n/10;
       s=s+r;
   }
   
   while (n>0);
      cout<<"the sum of digits is: "<<s;
 
}