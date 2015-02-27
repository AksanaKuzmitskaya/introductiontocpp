#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include <string>
#include "DrinkItem.h"
#include "SaladItem.h"
#include "FruitItem.h"
#include "SoupItem.h"
#include "WrapItem.h"
#include "Category.h"
#include "PrintUtil.h"
#include "Meal.h"
#include "Order.h"
#include <algorithm>
using namespace std;

int main () {
  PrintUtil menu("MENU");
  menu.PrintBigTitle();
  Meal breakfast("BREAKFAST");
  breakfast.AddItemsFromFile("breakfast.txt");
  Meal lunch("LUNCH");
  lunch.AddItemsFromFile("lunch.txt");
  Meal dinner("DINNER");
  dinner.AddItemsFromFile("dinner.txt");
  menu.SetTitle("For Breakfast type - B, for Lunch - L and for Dinner - D");
  menu.PrintInteractiveTitle();
  char answer;
  while (true) {
  cin >> answer;
  answer = toupper(answer);
    if (answer == 'B') {
      breakfast.Print();
      menu.SetTitle("Chose Category: for Drinks type - D, for Salads - S and for Fruits - F");
      menu.PrintInteractiveTitle();
      cin >> answer;
      while (true) {
        answer = toupper(answer);
        if (answer == 'D') {
          string item; 
          int number;
          while (true) {
            menu.SetTitle("Type first word of the item you want to choose");
            menu.PrintInteractiveTitle();
            cin >> item;
            transform(item.begin() + 1, item.end(), item.begin() + 1, ::tolower);
            item[0] = toupper(item[0]);
            menu.SetTitle("How many items?");
            menu.PrintInteractiveTitle();
            cin >> number;
            cout << number << endl;
            Order new_order;
            new_order.AddItem(breakfast.FindItem(item, "Drinks"), number);
            new_order.Print();
          }
        } else if (answer == 'S') {
        
        } else if (answer == 'F') {
          
        } else {
          menu.SetTitle("Try again please");
          menu.PrintInteractiveTitle();
        }
      }
      break;
    } else if (answer == 'L') {
      lunch.Print();
      menu.SetTitle("Chose Category: for Drinks type - D, for Wraps - W and for Fruits - F");
      menu.PrintInteractiveTitle(); 
      break;
    } else if (answer == 'D') {
      dinner.Print();
      menu.SetTitle("Chose Category: for Drinks type - D, for Soups - SO and for Salads - SA");
      menu.PrintInteractiveTitle(); 
      break;
    } else {
       menu.SetTitle("Try again please");
       menu.PrintInteractiveTitle();
    }
  }
  
}
