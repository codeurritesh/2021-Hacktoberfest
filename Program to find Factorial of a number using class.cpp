/* C++ Program to find Factorial of a number using class */

#include<iostream>
using namespace std;

class factorial
{
        private:
                        int n,n1,f=1;
        public:
                void input();
                void calc();
                void display();
};

void factorial::input()
{
        cout<<"\nEnter any number :: ";
        cin>>n;
}

void factorial::calc()
{
        n1=n;
        if(n==0||n==1)
        cout<<"\nFactorial of Number [ "<<n<<" ] is :: 1\n";
        else
        {
                while(n>0)
                {
                        f=f*n;
                        n--;
                }
        }

}

void factorial::display()
{
                cout<<"\nFactorial of [ "<<n1<<" ] is :: "<<f<<"\n";
}

int main ()
{
        factorial f;
        f.input();
        f.calc();
        f.display();

        return 0;
}
