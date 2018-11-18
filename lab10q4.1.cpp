#include<iostream>
#include<cmath>
using namespace std;



// class Point represents a two-dimensional point
class Point
{
  public:
  // default class constructor (with no arguments):
  Point(); 

  // class constructor that sets the coordinates x, y to the values xval,
  // yval:
  Point(int xval, int yval);

  // member function for moving a point by dx, dy:
  void Move(int dx, int dy);

  // member functions for getting values of x, y:
  int Get_X() const;
  int Get_Y() const;

  // member functions for setting x, y to xval, yval respectively  
  void Set_X(int xval);
  void Set_Y(int yval);

//Lab 7 exercise 4.1. Add declaration of member function Print here:
	void print();

// private data members x, y represent coordinates of the point:
private:
  int X;
  int Y;
};  


// ********************************************************************
//  Methods for class Point
// ********************************************************************

// class constructor sets X, Y to zero when no values are specified:
Point::Point()
{
  X = 0;
  Y = 0;
}

// class constructor sets X, Y to given values xval, yval:
Point::Point(int xval, int yval)
{
  X = xval;
  Y = yval;
}

// member function Move: increases the x coordinate by dx and the y
// coordinate by dy.
void Point::Move(int dx, int dy)
{
  X += dx;
  Y += dy;
}

// Get_X returns the value of the X coordinate
int Point::Get_X() const
{
  return X;
}

// Get_Y returns the value of the Y coordinate
int Point::Get_Y() const
{
  return Y;
}

// Set_X sets the value of X coordinate to xval
void Point::Set_X(int xval)
{
  X = xval;
} 

// Set_Y sets the value of Y coordinate to yval
void Point::Set_Y(int yval)
{
  Y = yval;
} 
    

//Lab 7 exercise 4.1. Add definition of member function print:
void Point::print()
{cout<<"("<<X<<","<<Y<<")";}

// ********************************************************************
//  Declaration of class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3: Add class Rectangle declaration HERE: 
class rectangle
{
	//declaring the four corners of the rectangle
	//the bottom left corner	
	int X1;int Y1;
	int X2;int Y2;
	int X3;int Y3;
	//the top right corner
	int X4;int Y4;
	//function to calculate side length
	int side1();
	int side2();
		
	public:
	rectangle();
	rectangle(int xval1,int yval1,int xval4,int yval4);
	int area();
	void print();
};

// ********************************************************************
//  Methods for class Rectangle
// ********************************************************************

//Lab 7 exercise 4.2, 4.3. Add class Rectangle methods HERE: 
rectangle::rectangle()
{	X1=0;Y1=0;
	X2=1;Y2=0;
	X3=0;Y3=1;
	X4=1;Y4=1;
}
rectangle::rectangle(int xval1,int yval1,int xval4,int yval4)
{	Point po1;
	Point po2;
	po1.Set_X(xval1);
	po1.Set_Y(yval1);
	
	po2.Set_X(xval4);
	po2.Set_Y(yval4);
	X1=po1.Get_X();
	Y1=po1.Get_Y();
	X4=po2.Get_X();
	Y4=po2.Get_Y();
	X2=X1;
	Y2=Y4;
	X3=X4;
	Y3=Y1;

		
}

int rectangle::side1()
{
return abs(X4-X1);
}
int rectangle::side2()
{
return abs(Y4-Y1);
}
int rectangle::area()
{
return side1()*side2();
}
void rectangle::print()
{
cout<<"The corner points of the rectangle are ("<<X1<<","<<Y1<<") "<<" ("<<X2<<","<<Y2<<") "<<" ("<<X3<<","<<Y3<<") "<<" ("<<X4<<","<<Y4<<")";
}




// ********************************************************************
//  main() function for testing classes Point and Rectangle
// ********************************************************************



// Testing classes Point and Rectangle
int main()
{
// Declaring a point using default class constructor (x = y = 0):
  Point p1;
  cout<< "The x value for p1 is " << p1.Get_X() << endl;
  cout<< "The y value for p1 is " << p1.Get_Y() << endl;

// Declaring a point with coordinates X = 2, Y = 3:
  Point p2(2, 3);
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

// Moving point p2 by (1, -1):
  p2.Move(1, -1);
  cout<< "After the move:" << endl;
  cout<< "The x value for p2 is " << p2.Get_X() << endl;
  cout<< "The y value for p2 is " << p2.Get_Y() << endl;

//Lab 7 exercise 4.1. Test member function print on points p1, p2:
	cout<<"point p1 is ";p1.print();cout<<endl;
	cout<<"point p2 is ";p2.print();cout<<endl;
//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  
	//declaring a rectangl	
	rectangle rect1;
	//declaring a rectangle having bottom left and top right corners
	rectangle rect2(1,2,3,4);
	cout<<"Four points of Rectangle1 are ";rect1.print();cout<<endl;
	cout<<"Area of Rectangle 1 is "<<rect1.area()<<endl;
	cout<<"Four points of Rectangle 2 are ";rect2.print();cout<<endl;	
	cout<<"Area of Rectangle 2 is "<<rect2.area()<<endl;
	

  return 0;
}
