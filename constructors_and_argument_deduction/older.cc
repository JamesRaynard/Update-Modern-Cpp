template <typename T>
class Test {
  public:
    Test(T t) {}
  //...
};

int main()
{
    Test test(3);                        // Error! Missing template argument
    //Test<int> test(3);                   // OK
}
