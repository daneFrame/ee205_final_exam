///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.cpp
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   DAY_MON_YEAR
///////////////////////////////////////////////////////////////////////////////
#include <stdexcept>
#include "Rectangle.h"

using namespace std;

double Rectangle::myRectangle(double newLength, double newWidth) {
    if(newLength <= 0 || newWidth <= 0){
        throw invalid_argument("length and width must be  > 0");
        return 0;
    }
    return 0;
}

double Rectangle::getLength() {
    return length;
}

double Rectangle::getWidth() {
    return width;
}

double Rectangle::compute_area() const {
    return length * width;
}