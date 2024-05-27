#include <iostream>
using namespace std;
int  main()
{
    int m,n;
    int i,j;
    cout << "enter number of elements in array 1 and 2 : ";
    cin >>m >>n;
     int nums1[m],nums2[n],nums3[m+n];
    for(i=0;i<m;i++)
    {   
        cout << "enter"<<i<<"th element : ";
        cin >> nums1[i];
    }
    for(j=0;j<n;j++)
    {   
        cout << "enter"<<j<<"-th element : ";
        cin >> nums2[j];
    }
    for(i=0;i<(m+n);i++)
    {
        if(i<m)
        nums3[i]=nums1[i];
        else
        nums3[i]=nums2[i-m];
    }
    for(i=(m+n);i>0;--i)
    {
        cout<<nums3[i]<<" ";
    }
}


  