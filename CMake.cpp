    // CMake.cpp : This file contains the 'main' function. Program execution begins and ends there.


    #include <iostream>
    #include "Pie.h"
    #include "ApricotPie.h"
    #include "ApplePie.h"
    #include "RaspberryPie.h"

    int main()
    {
        std::cout << "Hello World!\n";

        /*Pie pie1;
        pie1.description();*/

        ApplePie applepie;
        //applepie.description();

        ApricotPie apricotpie;
        //apricotpie.description();

        //empty pie pointer pointing to pie class
        Pie* pieptr = nullptr;

        RaspberryPie raspberryPie;
        //raspberryPie.description();

        int pieChoice = 0;
        std::cout << "Enter a type of pie u want(from 1-3): ";
        std::cin >> pieChoice;
        std::cout << "\n";
        std::cout << "You choose: " << pieChoice << "\n";

        if (pieChoice == 1) {
            pieptr = new ApplePie();
        
        }
        else if (pieChoice == 2) {
            pieptr = new ApricotPie();
        }
        else if (pieChoice == 3) {
            pieptr = new RaspberryPie();
        }
        pieptr->description(); 

        return 0;


    }

