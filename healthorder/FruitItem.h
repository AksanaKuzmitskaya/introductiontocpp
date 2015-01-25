#ifndef FRUITITEM_H
#define FRUITITEM_H
#include "Item.h"

class FruitItem : public Item {
public:
  enum FruitSize {SMALL, MEDIUM};
  FruitItem(const string& name, double price, int calories, FruitSize size = SMALL)
           : Item(name, price, calories), size_(size) {} 
  void Print() const;
  void SetSize(FruitSize size) {size_ = size;}
  double GetPrice() {return GetPrice(size_);}
  int GetCalories() {return GetCalories(size_);}
  
 private:
  double GetPrice(FruitSize size) const;
  int GetCalories(FruitSize size) const;
  
  FruitSize size_; 
};
#endif
