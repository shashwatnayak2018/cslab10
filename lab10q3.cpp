/*
Create a class for rectangle that stores data of length and breadth and has two functions : area() and perimeter(). Write a program that uses this class to create two rectangles (rectangle objects) of user inputted length and breadth. Compare the areas and perimeter of the those rectangles.
*/
//library
#include<iostream>
//namespace
using namespace std;
//define the class
class rectangle
{
	public:
	double length;
	double breadth;
	double area()
	{
		return length*breadth;
	}
	double perimeter()
	{
		return (length+breadth)*2;
	}
};
//write the main function
int main()
{
	//create two rectangle of rectangle object
	rectangle rectangle1;
	rectangle rectangle2;
	double area=0.0;
	double perimeter = 0.0;
	//declaring variables
	double len1, len2, bread1, bread2;
	//ask the user for the length of the rectangle1
	cout<<"Enter the value of the length of the first rectangle"<<endl;
	cin>>len1;
	//ask the user for the breadth of the rectangle1
	cout<<"Enter the value of the breadth of the first rectangle"<<endl;
	cin>>bread1;
	//ask the user for the length of the rectangle2
	cout<<"Enter the value of the length of the second rectangle"<<endl;
	cin>>len2;
	//ask the user for the breadth of the rectangle2
	cout<<"Enter the value of the breadth of the second triangle"<<endl;
	cin>>bread2;
	//specification of rectangle1
	rectangle1.length= len1;
	rectangle1.breadth= bread1;
	//specifications of rectangle2
	rectangle2.length= len2;
	rectangle2.breadth= bread2;
	//compare the values of area
	if(rectangle1.area() < rectangle2.area())
	{
		cout<<"The area of the second rectangle is more than the first one."<<endl;
	}
	if(rectangle1.area() > rectangle2.area())
	{
		cout<<"The area of the first rectangle is greater than the second one."<<endl;
	}
	if(rectangle1.area() == rectangle2.area())
	{
		cout<<"The area of the first rectangle is equal to the area of the second rectangle."<<endl;
	}
	//compare the values of the perimeter
	if(rectangle1.perimeter() < rectangle2.perimeter())
	{
		cout<<"The perimeter of the second rectangle is more than the first one."<<endl;
	}
	if(rectangle1.perimeter() > rectangle2.perimeter())
	{
		cout<<"The perimeter of the first rectangle is greater than the second one."<<endl;
	}
	if(rectangle1.perimeter() == rectangle2.perimeter())
	{
		cout<<"The perimeter of the first rectangle is equal to the perimeter of the second rectangle."<<endl;
	}
	
		return 0;
}
