#include "Avalanche.h"
#include "Computer.h"
#include <stdlib.h>
#include <iostream>
#include <time.h>
using namespace std;

void Avalanche::Avalance_move(){
    for(int i=1;i<computer_times;i++){
        computer_strategy[i+1]='R';
    }
}

