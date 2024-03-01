/*ESIT
Grupo:Tm13
Valencia Girón Karla
Este codigo servira para visualizar y resolver*/

#include <iostream>
 double x=0;

int main()
{
    std::cout<<"¿Cuantas onzas quieres convertir a gramos" << std::endl;
    std::cin>>x;
x=x*16/453.59;
std::cout <<"el peso en gramos es:"<<x;
std::cout <<"g";
    return 0;
}
