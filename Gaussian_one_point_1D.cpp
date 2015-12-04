#include <iostream>
#include <cmath>

using namespace std;
/**
 * Created by rajan on 2/12/15.
 */

/**
 *  Function to integrate
 */
float Ifunction(float x)
{

    return (2*x);
}


/**
     * a is Upper limit
     * b is lower limit
     * n is number of interval for two point n=1
     */
float w = 1 ,a,b,n = 1;

int main()
{

    cout<<"Enter Upper limit b :"<<endl;
    cin>>b;
    cout<<"Enter Lower limit a :"<<endl;
    cin>>a;
    cout<<"a : "<<a<<" b : "<<b<<endl;

    double I = ((b-a)*Ifunction((a+b)/2));

    cout<<"Integration of Function is 2*X : " << I;

}