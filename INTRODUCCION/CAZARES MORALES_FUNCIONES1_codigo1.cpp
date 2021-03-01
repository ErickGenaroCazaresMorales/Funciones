//2AV4 CAZARES MORALES ERICK GENARO
//TAREA FUNCIONES PARTE 1
#include<iostream>
#include<stdlib.h>
void suma(int a,int b)
{
    int c=a+b;
    	std::cout<<"El resultado de la operacion es:"<<c<<::std::endl;
}
int main()
{
    //VARIABLES
    int a,b;
    std::cout<<"Introduzca el primer numero :\n"; std::cin>>a;
	std::cout<<"Introduzca el segundo numero :\n"; std::cin>>b;
	suma(a,b);
	return 0;
}

