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
     * n is number of interval
     * h is interval gap
     * sum is area under the curve
     */
    float x,a,b,n,h,sum = 0;

    int main()
    {
        cout<<"Enter Upper and lower limit [a,b] :"<<endl;
        cin>>a>>b;
        cout<<"a : "<<a<<" b : "<<b<<endl;
        cout<<"Enter n number of interval : "<<endl;
        cin>>n;

        h = (a-b)/n;

        x = h;
        sum = Ifunction(a) + Ifunction(b);

        while (x <a)
        {

            sum += 2*Ifunction(x);
            cout<<"Area at : "<<x<<" :"<< sum << endl;
            x+=h;

        }

        cout<<"Integration of Function X^2 is : " << (h/2)*sum;

    }