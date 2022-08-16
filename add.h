//
// Created by Fransiskus Agapa on 8/16/2022.
//

#ifndef ARRAYBASICMATH_ADD_H
#define ARRAYBASICMATH_ADD_H

#include <iostream>

using std::cout;
using std::endl;

void addNumber(const int arrNum[],const int& arrSize, const int& userNum)
{
    int stNum;
    int ndNum;

    for(size_t i = 0; i < arrSize; ++i)
    {
        for(size_t j = 0; j < arrSize; ++j)
        {
            if(arrNum[i] + arrNum[j] == userNum)
            {
                stNum = arrNum[i];
                ndNum = arrNum[j];
            }
        }
    }

    cout << "\n[ " << userNum << " is the result of addition operation of " << stNum << " and " << ndNum << " ]"<< endl;
}


#endif //ARRAYBASICMATH_ADD_H
