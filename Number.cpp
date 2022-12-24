//
// Created by haoranx98 on 12/25/22.
//

#include "Number.h"

Number::Number(){
    this -> amount = 0;
    this -> valid = false;
}

Number::Number(int num){
    this -> num = num;
    this -> amount = 1;
    this -> valid= true;
}

bool Number::is_valid(){
    return this->valid;
}