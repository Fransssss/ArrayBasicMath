//
// Created by Fransiskus Agapa on 8/16/2022.
//

#ifndef ARRAYBASICMATH_SUBTRACT_H
#define ARRAYBASICMATH_SUBTRACT_H


void subtractNumber(const int arrNumber[], const int& arrSize, const int& userNumber)
{
    int stNum;
    int ndNum;

    for(size_t i = 0; i < arrSize; ++i)
    {
        for(size_t j = 0; j < arrSize; ++j)
        {
            if(arrNumber[i] - arrNumber[j] == userNumber)
            {
                stNum = arrNumber[i];
                ndNum = arrNumber[j];
            }
        }
    }

    cout << "\n[ " << userNumber << " is the result of subtraction operation of " << stNum << " and " << ndNum << " ]" << endl; ;

}

#endif //ARRAYBASICMATH_SUBTRACT_H
