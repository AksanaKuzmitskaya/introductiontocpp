#include <iostream>
#include "FruitItem.h"
using namespace std;

double FruitItem::GetPrice(FruitSize size) const {
  double price = 0;
  switch (size) {
    case SMALL : price = price_; break;
    case MEDIUM : price = price_ * 1.5; break;
    default : cout << "Size can be only SMALL or MEDIUM" << endl;
  }
  return price;
}

int FruitItem::GetCalories(FruitSize size) const {
  int calories = 0;
  switch (size) {
    case SMALL : calories = calories_; break;
    case MEDIUM : calories = calories_ * 1.7; break;
    default : cout << "Size can be only SMALL or MEDIUM" << endl;
  }
  return calories;
}

void FruitItem::Print() const {
  cout.precision(2);
  cout << "* " << name_ << endl;
  cout << "\tSMALL  " << " (" << fixed << GetCalories(SMALL) << " cal)\t\t" << "$" << GetPrice(SMALL) << endl;
  cout << "\tMEDIUM  " << " (" << fixed << GetCalories(MEDIUM) << " cal)\t\t" << "$" << GetPrice(MEDIUM) << endl;  
}
