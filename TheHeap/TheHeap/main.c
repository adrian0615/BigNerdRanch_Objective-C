//
//  main.c
//  TheHeap
//
//  Created by Adrian McDaniel on 3/17/17.
//  Copyright © 2017 Adrian McDaniel. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//typedef struct declaration
typedef struct {
    float heightInMeters;
    int weightInKilos;
} Person;

// -> means dereference the pointer p to the struct and get me the member called heightInMeters or weightInKilos
float bodyMassIndex(Person *p) {
    return p->weightInKilos / (p->heightInMeters * p->heightInMeters);
}

int main(int argc, const char * argv[]) {
    
    //Allocate memory for the one Person struct
    Person *mikey = (Person *)malloc(sizeof(Person));
    
    //Fill in two members of the struct
    mikey->heightInMeters = 1.7;
    mikey->weightInKilos = 96;

    //Print out the BMI of the original Person
    float mikeyBMI = bodyMassIndex(mikey);
    printf("mikey has a BMI of %.2f\n", mikeyBMI);
    
    //Let the memory be recycled
    //If you alloc you must free!
    free(mikey);
    
    //Forget where it was
    mikey = NULL;
    
    return 0;
}
