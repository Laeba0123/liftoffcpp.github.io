
#include<iostream>
using namespace std;

int main()
{
    string str;
    int a,d,s;

    a=d=s=0;

    cout << "Enter a string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); ++i)
   {
       if(str[i]>='a' && str[i]<='z'  || str[i]>='A' && str[i]<='Z'  )
       {
       a++;
       }
       else if(str[i]>='0' && str[i]<='9'  )
       
       {
           d++;
       }
       else if(str[i]==' ')
       s++;
   }
       
       cout<<"alphabes:"<<a<<endl;
cout<<"digits:"<<d<<endl;
cout<<"spaces:"<<s<<endl;
   }