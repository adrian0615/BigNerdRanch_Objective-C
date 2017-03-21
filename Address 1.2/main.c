//
//  main.c
//  Address 1.2
//
//  Created by Adrian McDaniel on 3/17/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 17;

    int *addressOfI = &i;
    printf("i stores it's value at %p\n", addressOfI);
    
    //you can use a  * operator on the lefthand side to  assign a new value or data in the address location
    *addressOfI = 89;
    printf("Now i is %d\n", i);
    
    //The sizeof() function returns a value type of size_t.  %zu is the placeholder token for size_t.
    printf("An int is %zu bytes\n", sizeof(int));
    printf("A pointer is %zu bytes\n", sizeof(int *));
    return 0;
}
