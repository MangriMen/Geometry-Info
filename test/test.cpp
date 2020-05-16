#include <Circle.hpp>
#include <Triangle.hpp>
#include <geometry.hpp>
#include <gtest/gtest.h>

TEST(PERIMETER, PerimeterCorrect)
{
    Circle circle1(1, make_pair(0, 0));
    ASSERT_NEAR(6.2831, circle1.CircleP, 0.0001);

    Circle circle2(0.5, make_pair(0, 0));
    ASSERT_NEAR(3.14, circle2.CircleP, 0.0001);

    Circle circle3(0.008, make_pair(0, 0));
    ASSERT_NEAR(0.05, circle3.CircleP, 0.0001);

    Circle circle4(6.28, make_pair(0, 0));
    ASSERT_NEAR(39.45, circle4.CircleP, 0.0001);
}

TEST(AREA, AreaCorrect)
{
    Circle circle5(3, make_pair(0, 0));
    ASSERT_NEAR(28.2743, circle5.CircleA, 0.0001);

    Circle circle6(0.1, make_pair(0, 0));
    ASSERT_NEAR(0.0314, circle6.CircleA, 0.0001);

    Circle circle7(2, make_pair(0, 0));
    ASSERT_NEAR(12.56, circle7.CircleA, 0.0001);

    Circle circle8(1.978, make_pair(0, 0));
    ASSERT_NEAR(12.2852, circle8.CircleA, 0.0001);
}