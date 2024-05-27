#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter number of elements: ";
    cin>>n;
    int a[n],b[n];
for(int i=0;i<n;++i)
{
    cout<<"enter element "<<i<<": ";
    cin>>a[i];
}
cout<<"copied elements to array b :"<<endl;
for(int i=0;i<n;++i)
{
    b[i]=a[i];
    cout<<b[i]<<" ";
}
}