#include<iostream>
#include<cstdlib>
using namespace std;

class Arthmatic
{
    public:
        double no1;
        double no2;

        Arthmatic(int A, int B)
        {
            no1 = A;
            no2 = B;
        }

        double Addition()
        {
            double Ans;
            Ans = no1 + no2;
            return Ans;
        }

        double substraction()
        {
            double Ans;
            Ans = no1 - no2;
            return Ans;
        }
};

int main()
{
    
    Arthmatic *aobj = new Arthmatic(11,10);
    
    cout<<aobj->Addition()<<endl;
    

    return EXIT_SUCCESS;
}