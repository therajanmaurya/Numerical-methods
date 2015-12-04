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

        return (x*x*x);
    }


    /**
     * a is Upper limit
     * b is lower limit
     * n is number of interval
     * h is interval gap
     * sum is area under the curve
     */
    float x,a,b,n,h,sum = 0;

    int main()
    {
        cout<<"Enter Upper limit a :"<<endl;
        cin>>a;
        cout<<"Enter Lower limit b :"<<endl;
        cin>>b;
        cout<<"a : "<<a<<" b : "<<b<<endl;
        cout<<"Enter n number of interval : "<<endl;
        cin>>n;

        h = (a-b)/n;

        x = h;
        sum = Ifunction(a) + Ifunction(b);

       for (int i=1 ; i<n ; i++)
        {
            if(i%2 == 0)
            {

                sum += 2*Ifunction(x);

            } else
            {

                sum += 4*Ifunction(x);

            }
            cout<<"Area at : "<<x<<" :"<< sum << endl;
            x+=h;
        }

        cout<<"Integration of Function is X*X*X : " << (h/3)*sum;

    }