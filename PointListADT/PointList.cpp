#include <bits/stdc++.h>
#include "PointList.h"
using namespace std;
Point::Point()
{
  x=0, y=0;
}
Point::Point(double a, double b)
{
  x=a, y=b;
}
PointList::PointList()
{
  size = 0;
  cursor = 0;
}
void PointList::append(Point newPoint)
{
  if(isFull())
  {
    std::cout << "List Full Error\n";
  }
  else
  {
    gotoEnd();
    points[++cursor] = newPoint;
    size++;
  }
}
void PointList::clear()
{
  gotoEnd();
  while(!isEmpty())
  {
    size--;
    Point* z = new Point();
    points[cursor] = *z;
    gotoPrior();
  }
}
bool PointList::isEmpty() const
{
  return (size==0) ;
}
bool PointList::isFull() const
{
  return (size == maxListSize);
}
void PointList::gotoBeginning()
{
  cursor = 0;
}
void PointList::gotoEnd()
{
  cursor = size - 1 ;
}
bool PointList::gotoNext()
{
  if(cursor != size-1)
  {
    cursor++;
    return true;
  }
  else
  {
    return false;
  }
}
bool PointList::gotoPrior()
{
  if(cursor != 0)
  {
    cursor--;
    return true;
  }
  else
  {
    return false;
  }
}
Point PointList::getCursor() const
{
  return points[cursor];
}
void PointList::showStructure () const
{
  if(isEmpty())
  {
    std::cout << "Empty List\n";
  }
  for(int i=0;i<size;i++)
  {
    std::cout << "(" << points[i].x << " , " << points[i].y << ")\n";
  }
}
