#include <iostream>
#include "Order.h"

void Order::Print() const {
  for (auto it = items_.begin(); it != items_.end(); ++it) {
    cout << ((*it).first->GetName()) << endl;
    cout << ((*it).first->GetPrice()) << " - price" << endl;
    cout << (it->second) << " - quantity" << endl;
    cout << GetTax() << "- tax" << endl;
    cout << GetTotal() << "- total" << endl;
  }
} 

void Order::AddItem(const shared_ptr<Item>& item, const int number) {
  items_[item] += number;
  total_price_ += item->GetPrice() * number;
}

double Order::GetTax() const {
  return total_price_ * 0.08;
}

double Order::GetTotal() const {
  return GetTax() + total_price_;
}
