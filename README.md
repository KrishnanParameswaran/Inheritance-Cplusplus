
Classes in C++ can be extended, creating new classes which retain characteristics of the base class. This process is known as inheritance and involves a base class and a derived class: The derived class inherits the members of the base class, on top of which it can add its own members.

The code here creates a base class, a derived class from the base class and demonstrates how an object of derived class can access a method in base class.

C++ inheritance rules:
1) Derived class can access all public and protected members and functions of base class
2) Constructor of base class won't be copied to derived class
3) Constructors, assignment and destructors are never inherited
4) If base class has a default constructor it is automatically called
5) If derived class member function of same name overrides the base class function, access base class function as: baseclass::basefunction(); 


A publicly derived class inherits access to every member of a base class except:
1) its constructors and its destructor
2) its assignment operator members (operator=)
3) its friends
4) its private members

General:
Include return statement in the definition of called functions 
Ensure to indicate the return type for all prototyping and definitions of functions
Return type and return statement are not mandatory for main function 


References : http://www.cplusplus.com/doc/tutorial/inheritance/, https://www.geeksforgeeks.org/inheritance-in-c/, https://www.geeksforgeeks.org/c-plus-plus-gq/inheritance-gq/, 
https://www.youtube.com/watch?v=gq2Igdc-OSI

