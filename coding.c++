#include <iostream>
#include <string>
using namespace std;
    
struct coding
{
  string name;
  int Ålder;
    };

    int main() {
    cout << "Hello World" << endl;  
     coding c;
     c.name = "Jens";
     c.Ålder = 19;
     cout << c.Ålder << endl;
    cout << c.name << endl;
    return 0;
}