//2AV4 CAZARES MORALES ERICK GENARO
//TAREA FUNCIONES PARTE 1
#include<iostream>
#include<stdlib.h>
int factorial(int a);
int main()
{
    int num1;
     std::cout<<"Introduzca el numero :\n"; std::cin>>num1;
     int fact=factorial(num1);
     std::cout<<"El resultado es :\n"<<fact<<::std::endl;
     return 0;
}
int factorial(int a)
{
    int i;
    int c=1;
    for (i=1;i<=a;i++)
    {
        c*=i;
    }
    return c;
}
