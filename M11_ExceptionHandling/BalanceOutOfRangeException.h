#pragma once
#include <stdexcept>

class BalanceOutOfRangeException : public std::out_of_range
{
public:
    explicit BalanceOutOfRangeException(const std::string& message);
};
