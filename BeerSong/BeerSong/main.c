//
//  main.c
//  BeerSong
//
//  Created by Adrian McDaniel on 3/16/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//
//Recursion!!!!!!!!!!1

#include <stdio.h>

void singSongFor(int numberOfBottles) {
    if (numberOfBottles == 0) {
        printf("There are simply no more bottles of beer on the wall.\n\n");
    } else {
        printf("%d bottles of beer on the wall. %d bottles of beer.\n", numberOfBottles, numberOfBottles);
        int oneFewer = numberOfBottles - 1;
        printf("Take one down, pass it around, %d, bottles of beer on the wall.\n\n", oneFewer);
        singSongFor(oneFewer); //This function calls itself!
        
        //Print a message just before the function ends
        printf("Put a bottle in the recycling, %d empty bottles in the bin. \n", numberOfBottles);
    }
}

int main(int argc, const char * argv[]) {
    singSongFor(5);
    return 0;
}
