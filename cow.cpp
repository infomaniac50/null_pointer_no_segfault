#include <iostream>
using namespace std;

class Cow {
  public:
    void milk(){
      std::cout << "I'm a cow being milked." << std::endl;
    }
};

int main() {
  Cow* cowPointer = 0;
  cowPointer->milk();
  return 0;
}