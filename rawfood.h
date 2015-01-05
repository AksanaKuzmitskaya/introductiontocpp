#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Item {
  string name_;
  
 protected: 
  double price_;
  int calories_;
  
 public:
  Item (const string &name, double price, const int calories) : name_(name), price_(price), calories_(calories) {}
  string getName() const {return name_;}
  double getPrice() const {return price_;}
  int getCalories() const {return calories_;}
};

class Meal {
  vector<Item> items_;
  double total_price_;
  int total_calories_;
  
 public:
  Meal (const vector<Item> &items) : items_(items), total_price_(0), total_calories_(0) {
    for (int i = 0; i < items.size(); ++i) {
      total_price_ += items[i].getPrice();
      total_calories_ += items[i].getCalories();
    }
  }
  double getTotalPrice() const {return total_price_;}
  int getTotalCalories() const {return total_calories_;}
  void addItem(const Item &item) {
    items_.push_back(item);
    total_price_ += item.getPrice();
    total_calories_ += item.getCalories();
  } 
};

class Address {
  int zip_;
  string street_;
  string city_;
  
 public:
  Address();
  Address(int zip, string street, string city) : zip_(zip), street_(street), city_(city) {}
};

class Account {
  string first_name_;
  string last_name_;
  Address bill_address_;
  Address delivery_address_;
  string card_number_;
  
 public:
 // Account (const string &name, const string &address) : name_(name), address_(address) {}
  void setName (const string &first_name, const string &last_name) {
    first_name_ = first_name; 
    last_name_ = last_name;
  }
};

class Order {
  vector<Meal> meals;
  double tax_;
  double order_price_;
  
 public:
   Order ();
   void printOrder() {
   
   } 
};

class Category {
  string name_;
  vector<Item> items_;
 
 public:
  Category(const string &name) : name_(name) {}
  Category(const string &name, const vector<Item> &items) : name_(name), items_(items) {}
  void print() const;
  string getName() {return name_;}
  void addItem(const Item &item); 
};

class Menu {
  vector<Category> breakfast;
  vector<Category> lunch;
  vector<Category> dinner;
 
 public:
  Menu () {}
  void printMenu() {
    string menu = "MENU";
    string spaces(menu.size(), ' ');
    string second = "* " + spaces + " *";
    string first(second.size(), '*');  
    cout << endl;
    cout << first << endl;
    cout << second << endl;
    cout << "* " << menu << " *" << endl;
    cout << second << endl;
    cout << first << endl;
  } 
};
