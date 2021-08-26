/**
 @Author: Juan Carlos
 @Date: 17 Aug 2021
 @Name: ComplexNumber
 Copyright TDA 2021
*/

//basado en SOLID Convention

#ifndef ComplexNumber_h
#define ComplexNumber_h

//Biblioteca Standard
#include<stdio.h>

//User libraries

//Data types

struct _Complex_Number{
  float real;//32 bits
  float imaginary;
}

//Wrapper
typedef struct _Complex_Number* ComplexNumber;//pointer para ahorra memoria

//Interfaces

//Generator/Constructors
ComplexNumber newComplexNumber(float real, float imaginary);






#endif
