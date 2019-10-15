#include <iostream>
#include "Triangle.h"
#include "Tetragon.h"
#include "Menu.h"
using namespace std;

int main()
{
  Factory factory;
  Menu menu;
  int item;

//Главный цикл
  bool done = false;
  while (!done)
  {
    switch (menu.SelectJob())
    {
      case 1: factory.AddObject();       break;
      case 2: factory.DeleteObject();       break;
      case 3: factory.Show();        break;
      case 4: factory.Move();          break;
      case 5: factory.Compare();   break;
      case 6: cout << "Конец работы." << endl;
              done = true;   break;
    }
  }
}
