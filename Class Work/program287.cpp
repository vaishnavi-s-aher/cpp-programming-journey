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
Arthmatic<T> :: Arthmatic(T A, T B)   
{
    no1 = A;
    no2 = B;
}

template<class T>
T  Arthmatic<T>:: Addition()      
{
    T Ans;
    Ans = no1 + no2;
    return Ans;
}

template<class T>

T Arthmatic <T>:: substraction()   
{
    T Ans;
    Ans = no1 - no2;
    return Ans;
}

int main()
{
    
    Arthmatic <int> *aobj = new Arthmatic<int>(11,10); 

    
    cout << aobj->Addition() << endl;
    

    return EXIT_SUCCESS;
}