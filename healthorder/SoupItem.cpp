#include <iostream>
#include "SoupItem.h"
using namespace std;

double SoupItem::GetPrice(SoupSize size) const {
  double price = 0;
  switch (size) {
    case SMALL : price = price_; break;
    case LARGE : price = price_ * 2; break;
    default : cout << "Size can be only SMALL or LARGE" << endl;
  }
  return price;
}

int SoupItem::GetCalories(SoupSize size) const {
  int calories = 0;
  switch (size) {
    case SMALL : calories = calories_; break;
    case LARGE : calories = calories_ * 2; break;
    default : cout << "Size can be only SMALL or LARGE" << endl;
  }
  return calories;
}

void SoupItem::Print() const {
  cout.precision(2);
  cout << "* " << name_ << endl;
  cout << "\tSMALL  " << " (" << fixed << GetCalories(SMALL) << " cal)\t\t" << "$" << GetPrice(SMALL) << endl;
  cout << "\tLARGE  " << " (" << fixed << GetCalories(LARGE) << " cal)\t\t" << "$" << GetPrice(LARGE) << endl;  
}
