//
// Created by Mahdiyar on 10/21/2023.
//
#include <stdio.h>
#define number long long int

//#ifndef UNTITLED_CALCULATOR1_H
//#define UNTITLED_CALCULATOR1_H
//
//#endif //UNTITLED_CALCULATOR1_H



// this functions check that numbers are prime or not we need this func for generating our prime number list
int isPrime(int n){
    if ((n%3 == 0 && n != 3) || (n%5 == 0 && n != 0)) return 0;
    for (int i = 5; i <= n/2; i+=2){
        if ((n%i) == 0){ return 0;}
    }

    return 1;

}

// with this function we create a list of Xnd prime numbers
void PrimeListGenerator(number min, number max, char *filename){
    //  number n = 9223372036854775807;


    /*  we need to open a text file and saves our prime number to this file,
        because we don't want to create prime number list every time.         */
    FILE *primeFile = fopen(filename, "w");


    // we check every number less that number n and --snip--
    for (number i = min+1; i <= max+1; i+=2){

        // --snip-- if number was prime we show it in console and put it into prime list and prime txt file.
        if (isPrime(i)){
            printf("Number: %d\tXnd: %d\n", i, max-i);
            fprintf(primeFile,"%d\n", i);
        }
    }

    fclose(primeFile);

}