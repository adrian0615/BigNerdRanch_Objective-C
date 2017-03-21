//
//  main.c
//  PBR
//
//  Created by Adrian McDaniel on 3/17/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double pi = 3.14;
    double integerPart;
    double fractionPart;
    
    //Pass the address of integerPart as an argument
    //function modf() takes in a double, calculates the integer part and the fraction part of the double, and sends the integer part to a address for storage and returns the fraction part.
    fractionPart = modf(pi, &integerPart);
    
    //Now you can find the value stored in integerPart
    printf("integerPart = %.0f, fractionPart = %.2f\n", integerPart, fractionPart);
    
    return 0;
}

//Pass-By-Reference
