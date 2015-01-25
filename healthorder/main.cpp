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
  PrintUtil chose_meal("For Breakfast type - B, for Lunch - L and for Dinner - D");
  chose_meal.PrintInteractiveTitle();
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
     cout << "Try again please" << endl;
   // chose_meal.SetTitle("Try again please");
   // chose_meal.PrintInteractiveTitle();
  }
  }
}
