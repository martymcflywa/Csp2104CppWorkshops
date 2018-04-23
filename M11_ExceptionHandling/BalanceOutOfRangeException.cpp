#include "stdafx.h"
#include "BalanceOutOfRangeException.h"

BalanceOutOfRangeException::BalanceOutOfRangeException(const std::string& message) : 
    out_of_range(message)
{
}
