#include <iostream>
#include "Factory.h"
#include "Menu.h"
#include "Triangle.h"
#include "Tetragon.h"
using namespace std;

void Factory::AddObject()
{
  cout << "_______________________\n";
  cout << "Выберите тип объекта\n";
  cout << "1. Треугольник" << endl;
  cout << "2. Четырехугольник" << endl;
  int item = Menu::SelectItem(2);

  string name;
  cout << "Введите имя объекта:";
  cin >> name;
  cin.get();
  Polygon* pNewObj;
  double x=0,y=0;
  Point p1;
  Point p2;
  Point p3;
  Point p4;
  switch(item)
  {
    case 1:
      cout << "Введите 3 точки (по часовой(x,y)):" << endl;
      cin >> x;
      cin >> y;
       p1.SetAll(x,y);
      cin >> x;
      cin >> y;
       p2.SetAll(x,y);
      cin >> x;
      cin >> y;
       p3.SetAll(x,y);
      pNewObj = new Triangle(p1, p2, p3, name);
      break;
    case 2:
      cout << "Введите 4 точки (по часовой(x,y)):" << endl;
      cin >> x >> y;
       p1.SetAll(x,y);
      cin >> x >> y;
       p2.SetAll(x,y);
      cin >> x >> y;
       p3.SetAll(x,y);
      cin >> x >> y;
       p4.SetAll(x,y);
      pNewObj = new Tetragon(p1, p2, p3, p4, name);
      break;
  }
  pObj.push_back(pNewObj);
  cout << "Object added." << endl;
}

void Factory::DeleteObject()
{
  int nItem = pObj.size();
  if(!nItem)
  {
    cout << "There are no objects" << endl;
    cin.get();
    return;
  }
  cout << "..................................\n";
  cout << "Delete one of the following Object:\n";
  for (int i = 0; i < nItem; i++)
  {
    cout << i + 1 << ". " << pObj[i]->GetName() << endl;
  }
  int item = Menu::SelectItem(nItem);
  string objName = pObj[item - 1]->GetName();
  pObj.erase(pObj.begin() + item - 1);
  cout << "Object " << objName << " deleted. " << endl;
  cin.get();
}

void Factory::Show()
{
  int nItem = pObj.size();
  if(!nItem)
  {
    cout << "There are no objects." << endl;
    cin.get();
    return;
  }
  cout << "-----------------------------------\n";
  cout << "Select one of the following object:\n";
  for (int i = 0; i < nItem; i++)
  {
    cout << i + 1 << ". " << pObj[i]->GetName() << endl;
  }
  int item = Menu::SelectItem(nItem);
  string objName = pObj[item - 1]->GetName();
  pObj[item - 1]->Show();
}

void Factory::Move()
{
  int nItem = pObj.size();
  if(!nItem)
  {
    cout << "There are no objects." << endl;
    cin.get();
    return;
  }
  cout << "-----------------------------------\n";
  cout << "Select one of the following object:\n";
  for (int i = 0; i < nItem; i++)
  {
    cout << i + 1 << ". " << pObj[i]->GetName() << endl;
  }
  int item = Menu::SelectItem(nItem);
  string objName = pObj[item - 1]->GetName();
  cout << "Enter kak move object (x y):" << endl;
  double x = 0,y = 0;
  cin >> x >> y;
  Point p(x,y);
  pObj[item - 1]->Move(p);
  pObj[item - 1]->Show();
}

void Factory::Compare()
{
  int nItem = pObj.size();
  if(!nItem || nItem == 1)
  {
    cout << "Not enought objects." << endl;
    cin.get();
    return;
  }
  cout << "-----------------------------------\n";
  cout << "Select two of the following object:\n";
  for (int i = 0; i < nItem; i++)
  {
    cout << i + 1 << ". " << pObj[i]->GetName() << endl;
  }
  int item1 = Menu::SelectItem(nItem);
  int item2;
  do
  {
    item2 = Menu::SelectItem(nItem);
    if(item1 == item2)
      cout << "Please enter enother object" << endl;
  } while(item1 == item2);
  string objName1 = pObj[item1 - 1]->GetName();
  string objName2 = pObj[item2 - 1]->GetName();
  float side1 = pObj[item1 - 1]->GetSide();
  float side2 = pObj[item2 - 1]->GetSide();
  pObj[item1 - 1]->Show();
  pObj[item2 - 1]->Show();
  cout << "Side " << objName1 << " = " << side1 << endl;
  cout << "Side " << objName2 << " = " << side2 << endl;
  float side0;
  if(side1>side2)
  {
    cout << objName1 << " Bolshe chem " << objName2 << " na " << side1 - side2 << endl;
  }
  else
  {
    if(side1<side2)
    {
      cout << objName2 << " Bolshe chem " << objName1 << " na " << side2 - side1 << endl;
    }
    else
      cout << "Sides ravni" << endl;
  }
}
