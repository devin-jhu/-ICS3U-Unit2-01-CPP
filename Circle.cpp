// Copyright (C) 2022 Devin Jhu All rights reserved
//
// Created by Devin Jhu
// Created on February 2022
// This calculates the area and perimeter
// Currently calculating a 15mm radius circle

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the area and perimeter
    std::cout << "If a circle has a radius of 15mm: " << std::endl;
    std::cout << std::endl;
    std::cout << "Area is " << (M_PI * pow(15, 2)) << " mm²." << std::endl;
    std::cout << "Perimeter is " << (2 * M_PI * 15) << " mm." << std::endl;
}
