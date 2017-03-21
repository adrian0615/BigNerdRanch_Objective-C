//
//  main.c
//  CountDown
//
//  Created by Adrian McDaniel on 3/16/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 99;

    do {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
        
        if (i % 3 == 0 && i % 5 == 0) {
            printf("Found one!\n");
        }
        i--;
    } while (i > -1);
    return 0;
}
