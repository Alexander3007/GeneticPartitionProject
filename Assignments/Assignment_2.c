//
// Created by samya on 02/11/2021.
//


#include<stdlib.h>
#include "Assignment_2.h"
#include "Assignment_1.h"

void generateRandomChromosomes(set_type set, chromo_type *chromo) {
    for(int i=0; i < chromoLength; i++){
        chromo -> genes[i] = (rand() > (RAND_MAX / 2) );
    }
}

