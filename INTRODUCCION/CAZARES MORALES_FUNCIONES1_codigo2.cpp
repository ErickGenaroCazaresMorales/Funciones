//2AV4 CAZARES MORALES ERICK GENARO
//TAREA FUNCIONES PARTE 1
#include<iostream>
#include<stdlib.h>
int Max(int a,int b);
int main()
{
    //VARIABLES
    int num1,num2,num3;
    std::cout<<"Introduzca el primer numero :\n"; std::cin>>num1;
    std::cout<<"Introduzca el primer numero :\n"; std::cin>>num2;
    std::cout<<"Introduzca el primer numero :\n"; std::cin>>num3;
    int max1 = Max(num1,num2);
    int max2 = Max(max1,num3);
    std::cout<<"El numero maximos es:"<<max2<<::std::endl;
    return 0;
}
int Max(int a,int b)
{
    int c;
    if (a>b)
    {
        c=a;
    }
    else
    {
        c=b;
    }
    return c;
}
