/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: mgeiger
 *
 * Created on October 8, 2017, 12:38 PM
 */

#include <cstdlib>
#include <iostream> 
#include <string>

using namespace std;
#define className(x) #x
#define NUMBER_OF_WHEELS 4 
#define NUMBER_OF_LIGHTS 10

class Engine {
    //Engine Code Here
};

class Wheel {
    //Wheel Code Here
};

class Chassis {
    //Chassis Code Here
};

class Light {
    //Light Code Here
};

class Body {
    //Body Code Here
};

class Car {
    //Car Code Here
    //Cars are composed of an engine, chassis, body, wheels, lights
};

/*
 *  This is the test case for your code.
 *  Do not edit the main method.
 */
int main(int argc, char** argv) {

    Engine engine("Big Block");

    Chassis chassis("Normal");

    Body body("Slate Mist Blue");

    Light lights[] ={
        Light("Headlight"), Light("Headlight"), Light("Brake Light"),
        Light("Brake Light"), Light("Left Rear Turn"), Light("Right Rear Turn"),
        Light("Left Front Turn"), Light("Right Front Turn"), Light("Reverse Light"),
        Light("License Plate Light")
    };

    Wheel wheels[] ={
        Wheel("16inches"), Wheel("16inches"),
        Wheel("16inches"), Wheel("16inches")
    };


    Car car(engine, chassis, body, wheels, lights);

    car.print();

    return 0;
}

