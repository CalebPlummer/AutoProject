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
private:
    double type;
public:
    Engine(){}
    Engine(string engineType)
    {
        if(engineType == "Big Block")
        {
            type = 1.0;
        }
        else
        {
            cout << "Please enter a correct engine type" << endl;
        }
    }

    void print()
    {
        cout << "Engine: " << type << endl;
    }
};

class Wheel {
private:
    string size;
public:
    Wheel(){}
    Wheel(string wheelSize)
    {
        size = wheelSize;
    }
    
    void print()
    {
        cout << "Wheel: " << size << endl;
    }
};

class Chassis {
private: 
    string type;
public: 
    Chassis(){}
    Chassis(string chassisType)
    {
        type = chassisType;
    }
    
    void print()
    {
        cout << "Chassis: " << type << endl;
    }
};

class Light {
private: 
    int type;
public:
    Light(){}
    Light(string lightType)
    {
        if(lightType == "Headlight")
        {
            type = 1;
        }
        else if(lightType == "Brake Light")
        {
            type = 2;
        }
        else if(lightType == "Left Rear Turn" || lightType == "Right Rear Turn")
        {
            type = 3;
        }
        else if(lightType == "Left Front Turn" || lightType == "Right Front Turn")
        {
            type = 4;
        }
        else if(lightType == "Reverse Light" || lightType == "License Plate Light")
        {
            type = 5;
        }
    }
    
    void print()
    {
        cout << "Light: " << type << endl;
    }
};

class Body {
private: 
    string type;
public: 
    Body(){}
    Body(string bodyType)
    {
        type = bodyType;
    }
    
    void print()
    {
        cout << "Body: " << type << endl;
    }
};

class Car {
private:
    Engine engine;
    Chassis chassis;
    Body body;
    Wheel wheels[NUMBER_OF_WHEELS];
    Light lights[NUMBER_OF_LIGHTS];
public:
    Car(Engine engine, Chassis chassis, Body body, Wheel wheels[], Light lights[])
    {
        this->engine = engine;
        this->body = body;
        this->chassis = chassis;
        for(int i = 0; i < NUMBER_OF_LIGHTS; i++)
        {
            this->lights[i] = lights[i];
        }
        for(int i = 0; i < NUMBER_OF_WHEELS ; i++)
        {
            this->wheels[i] = wheels[i];
        }
        
    }
    void print()
    {
        engine.print();
        cout << endl;
        chassis.print();
        cout << endl;
        body.print();
        cout << endl;
        for(Wheel loop : wheels)
        {
            loop.print();
        }
        cout << endl;
        for(Light loop : lights)
        {
            loop.print();
        }
        
    }
};

/*
 *  This is the test case for your code.
 *  Do not edit the main method.
 */
int main(int argc, char** argv) {

    Engine engine("Big Block");
    
    Chassis chassis("Normal");

    Body body("Slate Mist Blue");

    Light lights[] = {
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

