#include <iostream>
#include "WrapItem.h"
using namespace std;

double WrapItem::GetPrice(WrapType type) const {
  double price = 0;
  switch (type) {
    case CHOCOLATE : price = price_; break;
    case WALNUT : price = price_ * 1.3; break;
    case COCONUT : price = price_ * 1.1; break;
    default : cout << "Type can be only CHOCOLATE, WALNUT or COCONUT" << endl;
  }
  return price;
}

int WrapItem::GetCalories(WrapType type) const {
  int calories = 0;
  switch (type) {
    case CHOCOLATE : calories = calories_; break;
    case WALNUT : calories = calories_ * 1.2; break;
    case COCONUT : calories = calories_ * 1.1; break;
    default : cout << "Type can be only CHOCOLATE, WALNUT or COCONUT" << endl;
  }
  return calories;
}

void WrapItem::Print() const {
  cout.precision(2);
  cout << "* " << name_ << endl;
  cout << "\tCHOCOLATE  " << " (" << fixed << GetCalories(CHOCOLATE) << " cal)\t\t" << "$" << GetPrice(CHOCOLATE) << endl;
  cout << "\tWALNUT  " << " (" << fixed << GetCalories(WALNUT) << " cal)\t\t" << "$" << GetPrice(WALNUT) << endl;  
  cout << "\tCOCONUT  " << " (" << fixed << GetCalories(COCONUT) << " cal)\t\t" << "$" << GetPrice(COCONUT) << endl; 
}
