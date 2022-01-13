//
// Created by Hamid on 13/01/2022.
//

#include "BigNumber.h"

//Base constructor
BigNumber::BigNumber() {
    this->digits = new unsigned short[1];
    this->digits[0] = 0;
}
//This constructor converts string to big number;
// @param s string that contains the number
BigNumber::BigNumber(string s) {
    this->digits = new unsigned short[s.length()];
    for (int i = 0; i < s.length(); i++)
        digits[i] = s[s.length() - i - 1] - '0';
}
