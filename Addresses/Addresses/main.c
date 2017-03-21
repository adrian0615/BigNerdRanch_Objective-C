//
//  main.c
//  Addresses
//
//  Created by Adrian McDaniel on 3/17/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 17;
    
    //The address of the variable is the location in memory where the value for that variable is stored.  To get the variable's address, you use the & operator
    // %p is the token you can replace with with a memory address.
    printf("i stores it's value at %p\n", &i);
    return 0;
}
