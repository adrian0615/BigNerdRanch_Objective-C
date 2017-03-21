//
//  main.c
//  Numbers
//
//  Created by Adrian McDaniel on 3/16/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long x = 255;

    //d is for decimal
    //if printing an unsigned decimal number use %u
    printf("x is %ld\n", x);
    
    //o is for octal
    printf("In octal, x is %lo\n", x);
    
    //x is for hexadecimal
    printf("In hexadecimal, x is %lx\n", x);
    
    return 0;
}
