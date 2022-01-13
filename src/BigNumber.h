//
// Created by Hamid on 13/01/2022.
//

#ifndef STRING
#define STRING
#include <string>
using std::string;
#endif

#ifndef BIG_NUMBER_BIGNUMBER_H
#define BIG_NUMBER_BIGNUMBER_H


class BigNumber {
public:
    BigNumber ();
    explicit BigNumber(string s);
private:
    unsigned short* digits;
};


#endif //BIG_NUMBER_BIGNUMBER_H
