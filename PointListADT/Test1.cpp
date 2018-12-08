#include <bits/stdc++.h>
#include "PointList.h"
using namespace std;
int main()
{
  PointList polygon;
  Point vertex;
  cout << "Enter the polygon's vertices (end with eof) : ";
  while(cin >> vertex.x >> vertex.y && !polygon.isFull())
  {
    polygon.append(vertex);
  }
  if( !polygon.isEmpty())
  {
    polygon.gotoBeginning();
    do
    {
      vertex = polygon.getCursor();
      cout << "(" << vertex.x << "," << vertex.y << ")" << '\n';
    } while(polygon.gotoNext());
  }
}
