//
// Created by haoranx98 on 12/25/22.
//

#ifndef CALCULATEDIGITS_NUMBER_H
#define CALCULATEDIGITS_NUMBER_H


class Number {
public:
    Number();

    Number(int num);

    int num;
    int amount;
    bool valid;

    bool is_valid();
};


#endif //CALCULATEDIGITS_NUMBER_H
