// Introductory11.cpp - displays ending balance
// Created/revised by <Eric Watson> on <7/12/2024>

#include <iostream>
using namespace std;

int main() {
  double salePrice=0.0;
  double saleTaxRate=0.0;
  double salesTax=0.0;
  double cost=0.0;

  cout<< "Enter the sale price: ";
  cin>> salePrice
  cout<< "Enter the sales tax rate: ";
  cin>> saleTaxRate;

  salesTax=salePrice*saleTaxRate;
  cost=salePrice+salesTax

  cout<< "cost $" << cost <<endl;

  return 0;
} // end of main function
