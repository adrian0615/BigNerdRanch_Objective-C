//
//  main.c
//  Coolness 1.1
//
//  Created by Adrian McDaniel on 3/16/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    for (int i = 0; i < 12; i++) {
        printf("%d. Adrian is Cool\n", i);
        //i++ means i + 1
        //i-- means i - 1
    }
    
    int j;
    for (j = 0; j < 12; j++) {
        if (j % 3 == 0) {
            continue;
        }
        printf("Checking i = %d\n", j);
        if (j + 90 == j * j) {
            break;
        }
    }
    printf("The answer is %d.\n", j);
    return 0;
}

