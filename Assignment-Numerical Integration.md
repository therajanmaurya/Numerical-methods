# Assignment - Numerical Integration
#### Rajan Maurya (72004)
###### *V.1 - Algorithms for Computational Mathematics: Numerical Methods*
###### *B. Tech. (Information Technology and Mathematical Innovations)*
###### *Cluster Innovation Centre, University of Delhi*

## Trapezoidal rule

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

        cout<<"Integration of Function 2*X is : " << (h/2)*sum;

    }

#### Output

![Bisection Method](/home/rajan/Pictures/Trapizoidal.png)

## Simpson's rule

    #include <iostream>
    #include <cmath>

    using namespace std;
    /**
     - Created by rajan on 2/12/15.
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

#### Output

![Simpson'Rule](/home/rajan/Pictures/simpson.png)

## Gaussian_one_point_1D

    #include <iostream>
    #include <cmath>

    using namespace std;
    /**
     - Created by rajan on 2/12/15.
     */

    /**
     -  Function to integrate
     */
    float Ifunction(float x)
    {

        return (2*x);
    }


    /**
         - a is Upper limit
         - b is lower limit
         - n is number of interval for two point n=1
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

    cout<<"Integration of Function is X^2 : " << I;

}

#### Output

![Gaussian_one_point_1D Method](/home/rajan/Pictures/G11D.png)

## Gauss_one_point_2D

    #include <iostream>
    #include <cmath>

    using namespace std;
    /**
     - Created by rajan on 2/12/15.
     */

    /**
     -  Function to integrate
     */
    double Ifunction(double x , double y)
    {

    return (2*x + y*y);
}


    /**
         - a is Upper limit
         - b is lower limit
         - n is number of interval for two point n=1
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

    double I = ((b-a)*(d-c)*Ifunction(c1,c2));
    cout<<"Integration of Function is 2x + y*y : " << I;

}


#### Output

![G12D](/home/rajan/Pictures/G12D.png)


## Gauss Two point_1D

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

#### Output

![G21D](/home/rajan/Pictures/G21D.png)

## Gauss Two point_2D

     #include <iostream>
     #include <cmath>

        using namespace std;
        /**
         + Created by rajan on 2/12/15.
         */

    /**
     *  Function to integrate
     */
    double Ifunction(double a , double b , double c , double d , double t1 , double t2)
    {

        double x = (a+b)/2 + ((b-a)/2)*t1;
        double y = (c+d)/2 + ((d-c)/2)*t2;

        return (x*x*x + y*y);
    }


    /**
         * a is Upper limit
         * b is lower limit
         * n is number of interval for two point n=1
         */
    double  a,b,c,d,n = 1 , result = 0;
    double t11= -pow(1/3,0.5) , t12 = pow(1/3,0.5) , t21 = -pow(1/3,0.5) , t22 =  pow(1/3,0.5);

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

        result = result + Ifunction(a,b,c,d,t11 ,t21) + Ifunction(a,b,c,d,t11 ,t22) + Ifunction(a,b,c,d,t12 ,t21)
                +Ifunction(a,b,c,d,t12 ,t22);

        cout<<"Integration of Function is X*X*X + y*y : " << result;

}

#### Output

![G22d](/home/rajan/Pictures/G22d.png)

**THE END.**
