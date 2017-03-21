//
//  main.c
//  Degrees
//
//  Created by Adrian McDaniel on 3/16/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>


//Global Variable
float lastTemperature;

//Static Variable Example
//static float lastTemperature

float fahrenheitFromCelsius(float cel) {
    lastTemperature = cel;
    float fahr = cel * 1.8 + 32;
    printf("%f Celsius is %f Fahrenheit\n", cel, fahr);;
    return fahr;
}

int main(int argc, const char * argv[]) {
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC);
    printf("Water freezes at %f degrees Fahrenheit.\n", freezeInF);
    printf("The last temperature converted was %f.\n", lastTemperature);
    return 0;
}
