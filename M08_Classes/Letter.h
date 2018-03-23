#pragma once
#include <string>

class Letter
{
    std::string _title;
    std::string _recipient;
    static int _count;
public:
    void setRecipient(const std::string& title, const std::string& recipient);
    void displayGreeting() const;
    static void displayCount();
};
