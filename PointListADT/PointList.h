const int maxListSize = 10;
class Point
{
public:
  double x,y;
  Point();
  Point(double a, double b);
private:
protected:
};
class PointList
{
public:
  PointList();

  void append(Point newPoint);
  void clear();

  bool isEmpty() const;
  bool isFull() const;

  void gotoBeginning();
  void gotoEnd();
  bool gotoNext();
  bool gotoPrior();
  Point getCursor() const;
  void showStructure () const;
private:
protected:
  int size,cursor;
  Point points[maxListSize];
};
