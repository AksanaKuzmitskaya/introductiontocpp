#ifndef ITEM_H
#define ITEM_H

#include <string>
using namespace std;

class Item {
 public:
  Item();
  Item(const string& name, double price, int calories) : name_(name), price_(price), calories_(calories) {} 
  virtual ~Item() {}
  virtual void Print() const = 0;
  const string GetName() const {return name_;}
  bool operator==(const Item& item) {return name_ == item.name_;}
  virtual double GetPrice() {return price_;};
  virtual int GetCalories() {return calories_;};
 
 protected: 
  string name_;
  double price_;
  int calories_;
};
#endif
