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
   
     Arthmatic <int> aobj1(10, 11);     
     Arthmatic <float> aobj2(10.5f, 11.6f);      
    
    cout << aobj1.Addition() << "\n";
    cout << aobj2.Addition() << "\n";
    
 
    
     return EXIT_SUCCESS;
    
}