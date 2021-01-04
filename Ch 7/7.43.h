/**
 * Assume we have a class named NoDefault that has a
 * constructor that takes an int, but has no default constructor. Define a class
 * C that has a member of type NoDefault. Define the default constructor for
 * C.
 */

class NoDefault {
public:
    NoDefault(int i);
private:
    int i;
};
NoDefault::NoDefault(int i): i(i) {}

class C {
private:
    NoDefault mem;
public:
    C();
};
C::C(): mem(NoDefault(1)) {}