//
// Created by Fransiskus Agapa on 8/16/2022.
//

#ifndef ARRAYBASICMATH_MULTIPLY_H
#define ARRAYBASICMATH_MULTIPLY_H

#include <iostream>

using std::cout;
using std::endl;

void multiplyNumber(const int arrNumber[], const int& arrSize, const int& userNumber)
{
    int stNum;
    int ndNum;

    for(size_t i = 0; i <  arrSize; ++i)
    {
        for(size_t j = 0; j < arrSize; ++j)
        {
            if(arrNumber[i] * arrNumber[j] == userNumber)
            {
                stNum = arrNumber[i];
                ndNum = arrNumber[j];
            }
        }
    }

    cout << "\n[ " << userNumber << " is the result of multiplication operation of " << stNum << " and " << ndNum << " ]" << endl;


}
#endif //ARRAYBASICMATH_MULTIPLY_H
