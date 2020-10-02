//virtual function jst act like a template for the other classes 

#include<bits/stdc++.h>
using namespace std;

class shape{
	public :
	int height  , width ;
	virtual int getarea() = 0;

	void setwidth(int w )
	{
		width =w; 
	}

	void setheight(int h)
	{
		height = h;
	}
};

class rect  : public shape{
	public :
	int getarea()
	{
		return width*height;
	}
};
class suare : public shape{
		public :
	int getarea()

	{
		return width *height ;
	}
};



int main()
{
	rect r;
	r.setheight(2);
	r.setwidth(3);
	cout<<r.getarea()<<"\n";

	suare s;
	s.setheight(2);
	s.setwidth(2);
	cout<<s.getarea()<<"\n";


	return 0;
}