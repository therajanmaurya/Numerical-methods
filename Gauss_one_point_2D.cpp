#include <iostream>
#include <cmath>

using namespace std;
/**
 * Created by rajan on 2/12/15.
 */

/**
 *  Function to integrate
 */
float Ifunction(double x , double y)
{

    return (2*x + y*y);
}


/**
     * a is Upper limit
     * b is lower limit
     * n is number of interval for two point n=1
     */
float w = 1 ,a,b,c,d,n = 1;

int main()
{

    cout<<"Enter Upper limit of x b :"<<endl;
    cin>>b;
    cout<<"Enter Lower limit of x a :"<<endl;
    cin>>a;
    cout<<"Enter Upper limit of y d :"<<endl;
    cin>>d;
    cout<<"Enter Lower limit of y c :"<<endl;
    cin>>c;
    cout<<"a : "<<a<<" b : "<<b << " c : " <<c << " d : " <<d<<endl;

    double c1 = (a+b)/2;
    double c2 = (c+d)/2;

    double I = ((b-a)*(d-c)*Ifunction((c1+c2)));
    cout<<"Integration of Function is 2x + y*y : " << I;

}