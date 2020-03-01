//Create a class called Rectangle.It should contain a constructor for width and height, a function that returns the area and a friend fucntion that duplicate the rectangle's dimensions. In the main, creaate a rectangle instance, duplicate it and print out the area.
#include<iostream>
using namespace std;
class Rectangle
{
	private :
		int width ,height;
		public:
			Rectangle(int w1,int h1)
			{
				width=w1;
				height=h1;
				
			}
			int Area(int value)
			{
				cout<<"the area value is "<<value<<endl;
				
				
			}
friend int Dim(Rectangle);

};
int Dim(Rectangle R)
{
	
	int res=(R.width*2)*(R.height*3);
	return res;
	
}
int main()
{
	Rectangle R1(4,5);
	int arr=Dim(R1);
	//cout<<"the area is"<<arr<<endl;
	R1.Area(arr);
	
}
