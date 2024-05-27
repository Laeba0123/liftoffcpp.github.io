#include <iostream>
using namespace std;

int arr() {
    int n,i,j,c;
    double p;
    cout << "enter no. of elements:";
    cin>>n;
    int a[n];
    for( i=0;i<n;i++)
    {
        cout<<"enter "<<i<<"-s element :";
        cin>>a[i] ;
    }
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
        }
        cout<<a[i] <<"-s appearance is "<<c<<" times"<<endl;
    }
    return 0;
}
int main()
{
    arr();
    return 0;
}