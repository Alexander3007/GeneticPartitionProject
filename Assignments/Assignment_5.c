//
// Created by samya on 05/11/2021.
//
#include "Assignment_4.h"
#include "Assignment_5.h"
#include <stdlib.h>

int towerHeightDifference(set_t set, chromo_t chromo){
    return abs((heightOfTower(set, true, chromo) - heightOfTower(set, false, chromo)));
}