#ifndef SOUPITEM_H
#define SOUPITEM_H
#include "Item.h"

class SoupItem : public Item {
 public:
  enum SoupSize {SMALL, LARGE};
  SoupItem(const string& name, double price, int calories, SoupSize size = SMALL)
           : Item(name, price, calories), size_(size) {} 
  void Print() const;
  void SetSize(SoupSize size) {size_ = size;}
  double GetPrice() {return GetPrice(size_);}
  int GetCalories() {return GetCalories(size_);}
  
 private:
  double GetPrice(SoupSize size) const;
  int GetCalories(SoupSize size) const;
  
  SoupSize size_; 
};
#endif
