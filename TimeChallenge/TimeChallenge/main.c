//
//  main.c
//  TimeChallenge
//
//  Created by Adrian McDaniel on 3/17/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>
#include <time.h>

struct tm later;

int main(int argc, const char * argv[]) {
    long secondsSince1970 = time(NULL);
    printf("It has been %ld seconds since 1970\n", secondsSince1970);
    long newSeconds = time(NULL) + 4000000;
    
    localtime_r(&secondsSince1970, &later);
    printf("The current date is %d-%d-%d\n", later.tm_mon + 1, later.tm_mday, later.tm_year + 1900);
    
    localtime_r(&newSeconds, &later);
    printf("The future date is %d-%d-%d\n", later.tm_mon + 1, later.tm_mday, later.tm_year + 1900);
    
    return 0;
}
