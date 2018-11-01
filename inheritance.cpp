/* Created by Krishnan Parameswaran */


#include <iostream>

using namespace std;

class Shape                                         // Base class
{
    protected:
        double length;
        double width;
    public:
        Shape(double a=0.0, double b=0.0)           // Constructor 
        {
            length = a;
            width = b;
        }

        double area()                               // Definition of function that calculates area
        {
            cout << "The area of this object is " << length*width << endl;
            return 0;
        }      

};

class Rectangle : public Shape                      // Inherited/Derived class
{
    public:
        
        Rectangle(double c=0.0, double d=0.0)       // Constructor 
        {
            length = c;
            width = d;
        }
        
};

main()
{
    Rectangle r(2.0, 10.0);      
    r.area();
    return 0;

}
