#include "CheckPrimeNumber.h" 
bool CheckPrimeNumber(int checknumber)
{
    if (checknumber < 2)
        return false;
    for (int i = 2; i <= checknumber / 2; i++)
        if (checknumber % i == 0)
            return false;
    return true;
}