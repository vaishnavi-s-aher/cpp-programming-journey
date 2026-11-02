#include<iostream>
using namespace std;

template<class T>
class Arthmatic
{
    public:
        T no1;
        T no2;

       Arthmatic(int A, int B);
       T Addition();
       T substraction();
        
};



template<class T>
Arthmatic :: Arthmatic(T A, T B)   // error
{
    no1 = A;
    no2 = B;
}

template<class T>
T  Arthmatic:: Addition()      // error
{
    T Ans;
    Ans = no1 + no2;
    return Ans;
}

template<class T>
T Arthmatic:: substraction()   // error 
{
    T Ans;
    Ans = no1 - no2;
    return Ans;
}

int main()
{
    
    Arthmatic <int> *aobj = new Arthmatic<int>(11,10); // error 

    
    cout << aobj->Addition() << endl;
    

    return EXIT_SUCCESS;
}