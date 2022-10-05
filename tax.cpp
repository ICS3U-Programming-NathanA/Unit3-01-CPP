// Copyright (c) 2021 Nathan Araujo All rights reserved.
//
// Created by: Nathan Araujo
// Created on: Oct 4 2022
// This program calculates the tax and total when given the subtotal

#include <iostream>
#include <iomanip>

    // delcare the constant for HST
    const float HST = 0.13;

    // declare tax and total
    float subtotal, tax, total;

int main() {
    // get input from user
    std::cout << "Enter the subtotal: ";
    std::cin >> subtotal;

    // Calculate the tax and total
    tax = subtotal * HST;
    total = tax + subtotal;

    // rounds the total by 2 decimal places and display the results
    std::cout << "The tax is $" << std::fixed
    << std::setprecision(2)
    << std::setfill('0') << tax << "\n";
      // rounds the total by 2 decimal places and display the results
    std::cout << "The total is $" << std::fixed
    << std::setprecision(2)
    << std::setfill('0') << total << "\n";
  }
