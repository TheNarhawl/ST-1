// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(checkPrime, BasicPrimes)
{
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_TRUE(checkPrime(5));
}

TEST(checkPrime, BasicNotPrimes)
{
  EXPECT_FALSE(checkPrime(1));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(9));
}

TEST(nPrime, FirstPrime)
{
  EXPECT_EQ(2u, nPrime(1));
}

TEST(nPrime, ThirdPrime)
{
  EXPECT_EQ(5u, nPrime(3));
}

TEST(nPrime, FifthPrime)
{
  EXPECT_EQ(11u, nPrime(5));
}

TEST(nextPrime, AfterComposite)
{
  EXPECT_EQ(5u, nextPrime(4));
}

TEST(nextPrime, AfterPrime)
{
  EXPECT_EQ(13u, nextPrime(11));
}

TEST(sumPrime, LessThanTwo)
{
  EXPECT_EQ(0u, sumPrime(2));
}

TEST(sumPrime, UpToTen)
{
  EXPECT_EQ(17u, sumPrime(10));
}

TEST(sumPrime, UpToTwenty)
{
  EXPECT_EQ(77u, sumPrime(20));
}
