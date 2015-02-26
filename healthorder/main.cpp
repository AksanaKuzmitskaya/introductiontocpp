#include <iostream>
#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <ctype.h>
#include "DrinkItem.h"
#include "SaladItem.h"
#include "FruitItem.h"
#include "SoupItem.h"
#include "WrapItem.h"
#include "Category.h"
#include "PrintUtil.h"
#include "Meal.h"
#include "Order.h"
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
      break;
    } else if (answer == 'L') {
      lunch.Print();
      break;
    } else if (answer == 'D') {
      dinner.Print();
      break;
    } else {
       menu.SetTitle("Try again please");
       menu.PrintInteractiveTitle();
    }
  }
  
}
