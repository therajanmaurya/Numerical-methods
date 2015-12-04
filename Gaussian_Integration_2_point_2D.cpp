#include <iostream>
#include <cmath>

using namespace std;
/**
 * Created by rajan on 2/12/15.
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

        result = Ifunction(a,b,c,d,t11 ,t21) + Ifunction(a,b,c,d,t11 ,t22) + Ifunction(a,b,c,d,t12 ,t21)
                +Ifunction(a,b,c,d,t12 ,t22);

        cout<<"Integration of Function is X*X*X + y*y : " << result;

}