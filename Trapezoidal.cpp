#include<iostream>
#include<math.h>
using namespace std;

float funct(float a);


int main()
{
    char choice='y';
    float f,x,h,a,b,sum;

    cout<<"a & b ? ";
    cin>>a>>b;
    do{
        sum=0;
        x=a;
        cout<<"Enter value of h ? ";cin>>h;
        while(x<b)
        {
            sum+=(funct(x)+funct(x+h));
            x=x+h;
        }
        cout<<endl<<"The integration is: "<<sum*h/2<<endl;
        cout<<endl<<"wanna continue (y/n) ? ";cin>>choice;
    } while(choice=='y');

    return 0;
}

float funct(float x)
{
    return x*exp(x)-2;   // sin takes arguments in radian........
}