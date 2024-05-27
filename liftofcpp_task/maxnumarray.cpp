#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    int i,a[n],x[n],y[n],c=0;
for(i=0;i<n;++i)
{
    cout<<"enter element "<<i<<": ";
    cin>>a[i];
}
     for(i=0;i<n;++i)
 {
     for(int j=0;j<n;++j)
     {
         if (a[i]==a[j])
         c++;
     }
    x[i]=c;
    y[i]=a[i];
    c=0;
 }
 int m=x[0];
 for(i=0;i<n;++i)
 {
     if(x[i]>=m)
     {
     m=x[i];
     c=i;
     }
 }
cout<<y[c]<<" has maximum appearance in the array";
}