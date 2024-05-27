#include<iostream>
using namespace std;
int main()
{
       char opr;
    int num1,num2;
    int sub,sum,mult;
     cout<<"enter operand :";
    cin>>num1>>num2;
   cout<<"enter operator :+ , - , * , % , / :";
    cin>>opr;
   
    
    switch(opr)
       {
           case '+':
               sum = num1+num2;
             cout<<"THE SUM OF TWO NOS ARE : "<<sum;
               break;
           case '-':
               if (num1 > num2)
               {
                   sub = num1 - num2;
                 cout<<"the difference of two numbers : "<<sub;
               }
               else
               {
                   sub = num2 - num1;
                 cout<<"the difference of two numbers : "<<sub;
               }
               break;
           case '*' :
               mult = num1 * num2;
             cout<<"the multiplication of two numbers are :"<<mult;
               break;
           case '/' : 
             cout<<"the quotient of two numbers : "<<(num1/num2);
               break;
           case '%' :
               
             cout<<"the remainder of the two numbers are :"<< (num1 % num2);
               break;
           default:
             cout<<"invalid operation";
               
       }
          return 0;
    }
