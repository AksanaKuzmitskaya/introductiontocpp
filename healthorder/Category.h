#ifndef CATEGORY_H
#define CATEGORY_H
#include "Item.h"
#include <memory>
#include <vector>
using namespace std;

class Category {
 public:
  Category() {}
  Category(const string& name) : name_(name) {}
  Category(const string& name, const vector<shared_ptr<Item> >& items) : name_(name), items_(items) {}
  void Print() const;
  string GetName() {return name_;}
  void AddItem(const shared_ptr<Item>& item); 
  void AddItem(const string& name, double price, int calories); 
  
 private: 
  string name_;
  vector<shared_ptr<Item> > items_;
};
#endif
