// Rewrite each of the following old-style casts to use a named cast:
#include <string>

int i;  double d;  const std::string *ps;  char *pc;  void *pv; 

int main() {
    pv = const_cast<std::string*>(ps);
    i = static_cast<int>(*pc);
    pv = static_cast<void*>(&d);
    pc = static_cast<char*>(pv);
}