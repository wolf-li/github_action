
# include <iostream>
using namespace std;

int main() {
  B *b = new B();

  // dangerous part?
  // forcing Test<B> to point to to an address of type B
  Test<B> *test = static_cast<Test<B> *>(b);

  //
  A *a = dynamic_cast<A *>(test);
  a->setA(10);
  std::cout << "result: " << a->getA() << std::endl;
}
