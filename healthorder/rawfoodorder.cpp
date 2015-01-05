#include <iostream>
#include "rawfoodorder.h"
using namespace std;

void Category::print() const {
  string last(name_.size(), '-');
  cout << endl;
  cout << name_ << endl;
  cout << last << endl; 
  int length = 25; 
  cout << endl;
  for (int i = 0; i < items_.size() ; ++i) {
    length -= items_[i].getName().size(); 
    string spaces(length, ' ');
    cout << "* " << items_[i].getName() << spaces << "$" << items_[i].getPrice() << endl;
    cout << " (" << items_[i].getCalories() << " cal)" << endl;
  }
}

//void Category::addItem(const Item &item); 
