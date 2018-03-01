#include "pch.h"
#include "../M03_ControlStructures/Delivery.h"

using namespace std;

const double STANARD_PRICE = 0.3;
const double EXCESS_PRICE = 0.4;
const double RANGE = 10.0;

TEST(StandardPriceTests, IsRegistered_StandardDistance)
{
    const auto isRegistered = true;
    const auto distance = RANGE - 1.0;
    auto expected = distance * STANARD_PRICE;

    const auto actual = Delivery(isRegistered, distance).GetStandardPrice();
    EXPECT_EQ(expected, actual);
}

TEST(StandardPriceTests, NotRegistered_StandardDistance)
{
    const auto isRegistered = false;
    const auto distance = RANGE - 1.0;
    auto expected = distance * STANARD_PRICE;

    const auto actual = Delivery(isRegistered, distance).GetStandardPrice();
    EXPECT_EQ(expected, actual);
}

TEST(TotalPriceTests, IsRegistered_ZeroDistance)
{
    const auto isRegistered = true;
    const auto distance = 0.0;
    auto expected = 0.0;

    const auto actual = Delivery(isRegistered, distance).GetTotalPrice();
    EXPECT_EQ(expected, actual);
}

TEST(TotalPriceTests, IsRegistered_WithinRange)
{
    const auto isRegistered = true;
    const auto distance = RANGE - 1.0;
    auto expected = distance * STANARD_PRICE;

    const auto actual = Delivery(isRegistered, distance).GetTotalPrice();
    EXPECT_EQ(expected, actual);
}

TEST(TotalPriceTests, IsRegistered_OutsideRange)
{
    const auto isRegistered = true;
    const auto distance = RANGE + 1.0;
    auto expected = distance * STANARD_PRICE;

    const auto actual = Delivery(isRegistered, distance).GetTotalPrice();
    EXPECT_EQ(expected, actual);
}

TEST(TotalPriceTests, NotRegistered_ZeroDistance)
{
    const auto isRegistered = false;
    const auto distance = 0.0;
    auto expected = 0.0;

    const auto actual = Delivery(isRegistered, distance).GetTotalPrice();
    EXPECT_EQ(expected, actual);
}

TEST(TotalPriceTests, NotRegistered_WithinRange)
{
    const auto isRegistered = false;
    const auto distance = RANGE - 1.0;
    auto expected = distance * STANARD_PRICE;

    const auto actual = Delivery(isRegistered, distance).GetTotalPrice();
    EXPECT_EQ(expected, actual);
}

TEST(TotalPriceTests, NotRegistered_OutsideRange)
{
    const auto isRegistered = false;
    const auto distance = RANGE + 1.0;
    auto expected = 10.0 * STANARD_PRICE + 1.0 * EXCESS_PRICE;

    const auto actual = Delivery(isRegistered, distance).GetTotalPrice();
    EXPECT_EQ(expected, actual);
}