//
//  main.c
//  Addresses 1.1
//
//  Created by Adrian McDaniel on 3/17/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 17;
    
    //Where the int is stored
    int *addressOfI = &i;
    printf("i stores it's value at %p\n", addressOfI);
    printf("this function starts at %p\n", main);
    
    //the value pulled from where the int was stored
    printf("the int stored at addressOfI is %d\n", *addressOfI);
    return 0;
}


/*Notice that the asterick is used two different ways in this example:

When you declared addressOfI to be an int *.  That is, you told the compiler "It will hold an address where an int can be stored."

When you read the int value that is stored at the address stored in addressOfI. (Pointers are also called references.  Thus, using the pointer to read data at the address is sometimes called deferencing the pointer.)

*/
