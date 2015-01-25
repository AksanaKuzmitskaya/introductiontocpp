#ifndef DRINKITEM_H
#define DRINKITEM_H
#include "Item.h"

class DrinkItem : public Item {
 public:
  enum DrinkSize {SMALL, MEDIUM, LARGE};
  DrinkItem(const string& name, double price, int calories, DrinkSize size = SMALL)
           : Item(name, price, calories), size_(size) {} 
  void Print() const;
  void SetSize(DrinkSize size) {size_ = size;}
  double GetPrice() {return GetPrice(size_);}
  int GetCalories() {return GetCalories(size_);}
  
 private:
  double GetPrice(DrinkSize size) const;
  int GetCalories(DrinkSize size) const;
  
  DrinkSize size_; 
};
#endif
