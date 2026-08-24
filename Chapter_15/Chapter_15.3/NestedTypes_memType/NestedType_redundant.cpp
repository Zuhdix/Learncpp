#include <iostream>

class outer
{
public:
    class inner1;   // okay: forward declaration inside the enclosing class okay
    class inner1 {}; // okay: definition of forward declared type inside the enclosing class
    class inner2;   // okay: forward declaration inside the enclosing class okay
};

class inner2 // okay: definition of forward declared type outside the enclosing class
{
};

int main()
{
    return 0;
}

#include <iostream>

class outer;         // okay: can forward declare non-nested type
class outer::inner1; // error: can't forward declare nested type prior to outer class definition

class outer
{
public:
    class inner1 {}; // note: nested type declared here
};

class outer::inner1; // okay (but redundant) since nested type has already been declared as part of outer class definition

int main()
{
    return 0;
}