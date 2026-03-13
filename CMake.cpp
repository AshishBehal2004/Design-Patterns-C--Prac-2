// CMake.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include "Pie.h";
#include "ApricotPie.h"
#include "ApplePie.h";
int main()
{
    std::cout << "Hello World!\n";

    /*Pie pie1;
    pie1.description();*/

    ApplePie applepie;
    applepie.description();

    ApricotPie apricotpie;
    apricotpie.description();



}

