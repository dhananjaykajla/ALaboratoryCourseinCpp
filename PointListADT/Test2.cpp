#include<bits/stdc++.h>
#include"PointList.h"
using namespace std;
int main()
{
  string s;
  PointList List;
  while(std::cin>>s)
  {
    if(s=="Q")
    {
      break;
    }
    else if(s=="+")
    {
      Point newPoint;
      std::cin >> newPoint.x >> newPoint.y;
      List.append(newPoint);
    }
    else if(s=="@")
    {
      if(List.isEmpty())
      {
        std::cout << "EmptyList\n";
      }
      else
      {
        Point vertex = List.getCursor();
        cout << "(" << vertex.x << "," << vertex.y << ")" << '\n';
      }
    }
    else if(s=="N")
    {
      List.gotoNext();
    }
    else if(s=="P")
    {
      List.gotoPrior();
    }
    else if(s=="<")
    {
      List.gotoBeginning();
    }
    else if(s==">")
    {
      List.gotoEnd();
    }
    else if(s=="E")
    {
      if(List.isEmpty())
      {
        std::cout << "Empty\n";
      }
      else
      {
        std::cout << "Not Empty\n";
      }
    }
    else if(s=="F")
    {
      if(List.isFull())
      {
        std::cout << "Full\n";
      }
      else
      {
        std::cout << "Empty\n";
      }
    }
    else if(s=="C")
    {
      List.clear();
    }
    else
    {
      List.showStructure();
    }
  }
}
