#include <iostream>
#include<math.h>
#include<iomanip>
#include<stdlib.h>

using namespace std;
double f(double x)
{
    double a = x*x*x-x-1.0;
    return a;
}

int main()
{
    double a,b,c,fa,fb,fc;
    int i =0;
    cout<<"Enter the value of first boundary: \n"<<endl;
    cin>>a;
    cout<<"Enter the value of second boundary: \n"<<endl;
    cin>>b;
    fa = f(a);
    fb = f(b);
    if((fa*fb)>0)
    {
        cout<<"ERROR"<<endl;
        cout<<"Please run the program again and enter different values of a and b"<<endl;
    }
    else
    {
        cout<<"ESP = 0.00001"<<endl;
        cout<<"Iter______________C________________f(c)"<<endl;
        while (fabs(b-a)>=0.00001)
        {
            c = (a+b)/2.0;
            fc = f(c);
            cout<<++i<<"______________"<<c<<"________________"<<fc<<endl;
            if ((fa*fc)<0)
            {
                b = c;
            }
            else if ((fa*fc)>0)
            {
                a = c;
            }
            else if ((fa*fc)==0)
            {
                cout<<"The root of the equation is "<<c<<endl;
                break;
            }
        }
        cout<<"************************************************"<<endl;
        cout<<"The root of the equation is "<<setprecision(4)<<c<<endl;

    }
    return 0;
}
