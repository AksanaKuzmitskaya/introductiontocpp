#ifndef SALADITEM_H
#define SALADITEM_H
#include "Item.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class SaladItem : public Item { 
 public:
  SaladItem(const string& name, double price, int calories)
           : Item(name, price, calories) {}
  void Print () const {
    int length = 38 - name_.size();
    string spaces(length, ' ');
    cout << "* " << name_ << spaces << "$" << price_ << endl;
    cout << "  (" << calories_ << " cal)" << endl;
  } 
};
#endif
