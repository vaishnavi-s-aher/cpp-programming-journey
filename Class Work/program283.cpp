#include<iostream>
using namespace std;

template<class T>
class Arthmatic
{
    public:
        T no1;
        T no2;

        Arthmatic(int A, int B)
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
    
    Arthmatic *aboj = new Arthmatic(11,10); // error 

    aobj = Arthmatic(10,11);        // error 
    
    cout<< aobj -> addition()<<endl;
    

    return EXIT_SUCCESS;
}