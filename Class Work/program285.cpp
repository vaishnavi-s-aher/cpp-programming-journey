#include<iostream>
#include<cstdlib>
using namespace std;

class Arthmatic
{
    public:
        double no1;
        double no2;

        Arthmatic(double A, double B);
        double Addition();
        double substraction();
};

Arthmatic::Arthmatic(double A, double B)
{
    no1 = A;
    no2 = B;
}

double Arthmatic::Addition()
{
    double Ans;
    Ans = no1 + no2;
    return Ans;
}

double Arthmatic::substraction()
{
    double Ans;
    Ans = no1 - no2;
    return Ans;
}

int main()
{
    Arthmatic aobj1(10.5, 11.5);
    Arthmatic aobj2(20.5, 21.6);

    cout << aobj1.Addition() << "\n";
    cout << aobj2.Addition() << "\n";

    cout << aobj1.substraction() << "\n";
    cout << aobj2.substraction() << "\n";

    return EXIT_SUCCESS;
}