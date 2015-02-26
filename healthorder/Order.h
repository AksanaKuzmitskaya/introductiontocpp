#ifndef ORDER_H
#define ORDER_H
#include "Item.h"
#include <string>
#include <memory>
#include <unordered_map>

class Order { 
 public:
  Order() : total_price_(0.0), delivered_(false) {}
  void Print() const;
  void AddItem(const shared_ptr<Item>& item);
  void AddSurname(const string& surname) {surname_ = surname;}
  void AddAddress(const string& address) {address_ = address;} 

 private:
  double GetTotal();
  double GetTax();
  string surname_;
  string address_;
  unordered_map<shared_ptr<Item>, int> items_;
  double total_price_;
  double tax_;
  bool delivered_;
};
#endif
