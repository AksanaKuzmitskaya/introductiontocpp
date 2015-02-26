#include <iostream>
#include "Order.h"

void Order::Print() const {
  for (auto it = items_.begin(); it != items_.end(); ++it) {
    (it->first);
  }
} 

void Order::AddItem(const shared_ptr<Item>& item) {
  items_[item]++;
  total_price_ += item->GetPrice();
}

double Order::GetTax() {
  return total_price_ * 0.8;
}

double Order::GetTotal() {
  return GetTax() + total_price_;
}
