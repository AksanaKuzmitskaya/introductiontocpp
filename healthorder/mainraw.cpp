#include <iostream>
#include "rawfoodorder.h"
#include <string>
using namespace std;

void printTitle(string title) {
  title = "* " + title + " *";
  string last(title.size(), '-');
  cout << endl;
  cout << title << endl;
  cout << last << endl; 
}

void printMenu() {
  string menu = "MENU";
  string spaces(menu.size(), ' ');
  string second = "*  " + spaces + "  *";
  string first(second.size(), '*');  
  cout << endl;
  cout << first << endl;
  cout << second << endl;
  cout << "*  " << menu << "  *" << endl;
  cout << second << endl;
  cout << first << endl;  
}

int main() {
  printMenu();
  printTitle("Breakfast");
  printTitle("Lunch");
  printTitle("Dinner");
  Item greek(string("Greek salad"), 12.00, 345);
  vector<Item> items;
  items.push_back(greek);
  Category breakfast(string("Salads"), items);
 // enum menu_t {BREAKFAST, LUNCH, DINNER}
  char user_input;
  cout << endl;
  cout << "Please use B for Breakfast, L for Lunch and D for Dinner: Your choice? ";
  cin >> user_input;
  switch (user_input) {
    case 'B' : 
      breakfast.print();
      break; 
   /* case 'L' : 
      lunch.print();
      break;
    case 'D' : dinner.print();
      break;
    default : 
      cout << "Invalid choice" << endl;*/
  } 
}
