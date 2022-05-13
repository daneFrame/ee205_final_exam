///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#include "Shape.h"

class Rectangle : public Shape{

protected:
    double length = 0;
    double width = 0;

public:
   double myRectangle(double newLength, double newWidth);
   double getWidth();
   double getLength();

   double compute_area() const;
};
