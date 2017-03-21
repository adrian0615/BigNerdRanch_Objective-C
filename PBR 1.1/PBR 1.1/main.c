//
//  main.c
//  PBR 1.1
//
//  Created by Adrian McDaniel on 3/17/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>
#include <math.h>

void metersToFeetAndInches(double meters, unsigned int *ftPtr, double *inPtr) {
    //This function assumes meters are non-negative.
    
    //Convert the numbers of meters into floating-point number of feet
    double rawFeet = meters * 3.281;
    
    //How many complete feet as an unsigned int?
    unsigned int feet = (unsigned int)floor(rawFeet);
    
    //Store the number of feet at the supplied address
    //Always check to make sure pointers are Non-NULL before you dereference them!!!
    if (ftPtr) {
        printf("Storing %u to the address %p\n", feet, ftPtr);
        *ftPtr = feet;
    }
    
    //Calculate inches
    double fractionalFoot = rawFeet - feet;
    double inches = fractionalFoot * 12.0;
    
    //Store the number of inches at the supplied address
    //Always check to make sure pointers are Non-NULL before you dereference them!!!
    if (inPtr) {
        printf("Storing %.2f to address %p\n", inches, inPtr);
        *inPtr = inches;
    }
}

int main(int argc, const char * argv[]) {
    double meters = 3.0;
    unsigned int feet;
    double inches;
    
    //parameters are the double "meters", the address of feet, and the address of inches
    metersToFeetAndInches(meters, &feet, &inches);
    printf("%.1f meters is equal to %d feet and %.1f inches.", meters, feet, inches);
    
    return 0;
}
