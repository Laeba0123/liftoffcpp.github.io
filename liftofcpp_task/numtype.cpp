#include <iostream>
using namespace std;
int main() {
int n;
cout<<"enter a number:";
cin>>n;
if(n<0)
cout<<n<<" is negative ";
else if(n>0)
cout<<n<<" is positive ";
else
cout<<n<<" is zero ";
}