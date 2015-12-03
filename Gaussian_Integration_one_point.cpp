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

        return (x*x);
    }

    float Tx(float x1 , float a , float b)
    {

        return ((1-x1)*a + (1+x1)*b)/2;
    }


/**
     * a is Upper limit
     * b is lower limit
     * n is number of interval for two point n=2
     * h is interval gap
     * w is the weight w1 w2 both one so assume w as single
     * sum is area under the curve
     */
    float w = 1 ,a,b,n = 2,h,sum = 0 ;
    double x1 = -0.05 , x2 = 0.05;

    int main()
    {

        cout<<"Enter Upper limit b :"<<endl;
        cin>>b;
        cout<<"Enter Lower limit a :"<<endl;
        cin>>a;
        cout<<"a : "<<a<<" b : "<<b<<endl;

        cout<<x1<<"  "<<x2;
        float tx1 = Tx(x1 , a , b);
        float tx2 = Tx(x2 , a , b);

        float Ix = w*(Ifunction(tx1) + Ifunction(tx2));

        //final Integration is I

        float I = ((b-a)*Ix)/2;


        cout<<"Integration of Function is X^2 : " << I;

    }