#ifndef WRAPITEM_H
#define WRAPITEM_H
#include "Item.h"

class WrapItem : public Item {
 public:
  enum WrapType {CHOCOLATE, WALNUT, COCONUT};
  WrapItem(const string& name, double price, int calories, WrapType type = CHOCOLATE)
           : Item(name, price, calories), type_(type) {} 
  void Print() const;
  void SetType(WrapType type) {type_ = type;}
  double GetPrice() {return GetPrice(type_);}
  int GetCalories() {return GetCalories(type_);}
  
 private:
  double GetPrice(WrapType type) const;
  int GetCalories(WrapType type) const;
  
  WrapType type_; 
};
#endif
