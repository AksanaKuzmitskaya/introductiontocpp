#include "Meal.h"
#include "PrintUtil.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

void Meal::Print() const {
  PrintUtil print_title(name_);
  print_title.PrintTitle();
  for (vector<Category>::const_iterator it = categories_.begin(); it != categories_.end(); ++it) {
    (*it).Print();
  }
  cout << endl;
}

void Meal::AddItemsFromFile(const string& file_name) {
  ifstream fin(file_name);
  string line;
  string buf;
  double price;
  int calories;
  string name;
  Category temp;
  bool is_first = true;
  if (fin.is_open()) {
    while (getline(fin, line)) {
      stringstream line_stream(line);
      getline(line_stream, buf, ',');
      if (buf == "Category") {
        getline(line_stream, buf);
        if (!is_first) {
          categories_.push_back(temp);
        }
        temp = Category(buf);
        is_first = false;
      } else {
        name = buf;
        getline(line_stream, buf, ',');
        price = stod(buf);
        getline(line_stream, buf);
        calories = stoi(buf);
        temp.AddItem(name, price, calories);
      }
    }
    categories_.push_back(temp);
    fin.close();
  }
}
