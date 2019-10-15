#include <iostream>
#include "Triangle.h"
#include "Tetragon.h"
#include "Menu.h"
using namespace std;

Menu::Menu(){}

int Menu::SelectJob() const
{
  cout << "=============================\n";
  cout << "Select one of the following job modes: \n";
  cout << "1. Add object" << endl;
  cout << "2. Delete object" << endl;
  cout << "3. Show object" << endl;
  cout << "4. Move object" << endl;
  cout << "5. Sravnit sides" << endl;
  cout << "6. Exit" << endl;
  int item = SelectItem(6);
  return (item);
}

int Menu::SelectItem(int nItem)
{
  cout << "---------------------\n";
  int item;
  while (true)
  {
    cin >> item;
    if((item > 0) && (item <=nItem) && (cin.peek() == '\n'))
    {
      cin.get(); break;
    }
    else
    {
      cout << "Error(must be number from 1 to )"
        << nItem << "):" << endl;
      cin.clear();
      while(cin.get() != '\n') {};
    }
  }
  return item;
}
