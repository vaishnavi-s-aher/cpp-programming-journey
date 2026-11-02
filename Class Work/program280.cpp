#include<iostream>
using namespace std;

template<class T>

class Arthmatic
{
    public:
        T no1;
        T no2;

        Arthmatic(T A, T B)
        {
            no1 = A;
            no2 = B;
        }

        T Addition()
        {
            T Ans;
            Ans = no1 + no2;
            return Ans;
        }

        T substraction()
        {
            T Ans;
            Ans = no1 - no2;
            return Ans;
        }
};

int main()
{
   
     Arthmatic <double> aobj1(10.5, 11.5);          
    
    cout << aobj1.Addition() << "\n";
    
    cout << aobj1.substraction() << "\n";
    

    return EXIT_SUCCESS;
    
}