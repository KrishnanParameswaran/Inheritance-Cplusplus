
Classes in C++ can be extended, creating new classes which retain characteristics of the base class. This process is known as inheritance and involves a base class and a derived class: The derived class inherits the members of the base class, on top of which it can add its own members.

The code here creates a base class, a derived class from the base class and demonstrates how an object of derived class can access a method in base class.

C++ inheritance rules:
Derived class can access all public and protected members and functions of base class
Constructor of base class won't be copied to derived class
Constructors, assignment and destructors are never inherited
If base class has a default constructor it is automatically called.
If derived class member function of same name overrides the base class function, access base class function as: baseclass::basefunction(); 


A publicly derived class inherits access to every member of a base class except:
its constructors and its destructor
its assignment operator members (operator=)
its friends
its private members


Include return statement in the definition of called functions 
Ensure to indicate the return type for all prototyping and definitions of functions
Return type and return statement are not mandatory for main function 


References : http://www.cplusplus.com/doc/tutorial/inheritance/, https://www.geeksforgeeks.org/inheritance-in-c/, https://www.geeksforgeeks.org/c-plus-plus-gq/inheritance-gq/, 
https://www.youtube.com/watch?v=gq2Igdc-OSI

