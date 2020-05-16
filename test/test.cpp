#include <Circle.hpp>
#include <Triangle.hpp>
#include <geometry.hpp>
#include <gtest/gtest.h>

TEST(PERIMETER, PerimeterCorrect)
{
    Circle circle(1, make_pair(0, 0));
    ASSERT_FLOAT_EQ(6.28, circle.CircleP);

    Circle circle(0.5, make_pair(0, 0));
    ASSERT_FLOAT_EQ(3.14, circle.CircleP);

    Circle circle(0.008, make_pair(0, 0));
    ASSERT_FLOAT_EQ(0.05, circle.CircleP);

    Circle circle(6.28, make_pair(0, 0));
    ASSERT_FLOAT_EQ(39.45, circle.CircleP);
}

TEST(AREA, AreaCorrect)
{
    Circle circle(3, make_pair(0, 0));
    ASSERT_FLOAT_EQ(28.26, circle.CircleA);

    Circle circle(0.1, make_pair(0, 0));
    ASSERT_FLOAT_EQ(0.0314, circle.CircleA);

    Circle circle(2, make_pair(0, 0));
    ASSERT_FLOAT_EQ(12.56, circle.CircleA);

    Circle circle(1.978, make_pair(0, 0));
    ASSERT_FLOAT_EQ(12.2852, circle.CircleA);
}