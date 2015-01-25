#include <iostream>
#include "DrinkItem.h"
using namespace std;

double DrinkItem::GetPrice(DrinkSize size) const {
  double price = 0;
  switch (size) {
    case SMALL : price = price_; break;
    case MEDIUM : price = price_ * 1.4; break;
    case LARGE : price = price_ * 1.7; break;
    default : cout << "Size can be only SMALL, MEDIUM or LARGE" << endl;
  }
  return price;
}

int DrinkItem::GetCalories(DrinkSize size) const {
  int calories = 0;
  switch (size) {
    case SMALL : calories = calories_; break;
    case MEDIUM : calories = calories_ * 1.5; break;
    case LARGE : calories = calories_ * 2; break;
    default : cout << "Size can be only SMALL, MEDIUM or LARGE" << endl;
  }
  return calories;
}

void DrinkItem::Print() const {
  cout.precision(2);
  cout << "* " << name_ << endl;
  cout << "\tSMALL  " << " (" << fixed << GetCalories(SMALL) << " cal)\t\t" << "$" << GetPrice(SMALL) << endl;
  cout << "\tMEDIUM " << " (" << fixed << GetCalories(MEDIUM) << " cal)\t\t" << "$" << GetPrice(MEDIUM) << endl;
  cout << "\tLARGE  " << " ("  << fixed << GetCalories(LARGE) << " cal)\t\t" << "$" << GetPrice(LARGE) << endl;  
}
