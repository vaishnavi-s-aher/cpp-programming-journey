#include<stdio.h>

typedef  unsigned int UINT;       // unsingened int i = 11
typedef unsigned long int ULONG;  // unsingened int i = 51;

int main()
{

    UINT i = 11;
    ULONG J = 51;

    printf("inside typedef demo:\n");
    printf("%d",sizeof(i));
      printf("%d",sizeof(J));
    return 0;
}