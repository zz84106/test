#include <iostream>

using namespace std;

class PrivateDelete {

private:
  ~PrivateDelete() {};
};
  
int main() {

  try {
    PrivateDelete *pd = new PrivateDelete();
    delete pd;
  }
  catch (const std::exception &e) {
    cout << "had exception!" << endl;
  }
  
  cout << "everything ok!" << endl;
  
  return 0;
}
