#include "Category.h"
#include "PrintUtil.h"
#include "DrinkItem.h"
#include "SoupItem.h"
#include "SaladItem.h"
#include "FruitItem.h"
#include "WrapItem.h"
#include <iostream>
using namespace std;

void Category::Print() const {
  PrintUtil print_small_title(name_);
  print_small_title.PrintSmallTitle();
  for (vector<shared_ptr<Item> >::const_iterator it = items_.begin(); it != items_.end(); ++it) {
    (*it)->Print();
  }
}

void Category::AddItem(const shared_ptr<Item>& item) {
  items_.push_back(item);
}

void Category::AddItem(const string& name, double price, int calories) {
  if (name_ == "Drinks") {
    items_.push_back(make_shared<DrinkItem> (name, price, calories)); 
  } else if (name_ == "Salads") {
    items_.push_back(make_shared<SaladItem> (name, price, calories)); 
  } else if (name_ == "Soups") {
    items_.push_back(make_shared<SoupItem> (name, price, calories)); 
  } else if (name_ == "Fruits") {
    items_.push_back(make_shared<FruitItem> (name, price, calories)); 
  } else if (name_ == "Wraps") {
    items_.push_back(make_shared<WrapItem> (name, price, calories)); 
  } else {
    cout << "Category of type" << name_ << " not supported." << endl;
  }
}
