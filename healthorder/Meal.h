#include "Category.h"
#include <string>
using namespace std;

class Meal {
 public: 
  Meal(string name) : name_(name) {}
  Meal(string name, const vector<Category>& categories) : name_(name), categories_(categories) {}
  void Print() const;
  void AddItemsFromFile(const string& file_name);
  shared_ptr<Item> FindItem(const string& item, const string& category);
  
 private:
  string name_;
  vector<Category> categories_;
};
