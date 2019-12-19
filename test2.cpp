
#include <tuple>
#include <vector>
#include <string>
/*
comment
@param lala lala
*/


// Comment as well

namespace somenamespace
{
    namespace nested
    {
        void fnInNamespace(){}
    }
}

typedef float SomeTypedef;
using alias = unsigned int;

class Base
{
    public:
    virtual ~Base() {}

    static void doNothing(){}
    
    int instanceVal{2};
    static constexpr auto val{2};
};

class SomeClass : public Base
{
    public:
    SomeClass(const int arg):member(arg) {}
    SomeClass(const float arg) = delete;
    
    void method(const int arg)
    {
    }
    ~SomeClass() {}
private:
    int member;
};

template<class... Types>
struct count {
    static const std::size_t value = sizeof...(Types);
};

auto getFn(int someValue)
{
   return [someValue](const int x){
       return x + someValue;
   };
}

void fun()
{
    const auto& [a,b,c] = std::make_tuple(1,2,3);
    
    static_cast<unsigned int>(134);
    auto someInt = 2;
    auto fl = 0.123d;
    auto dbl = 0.123f;
    auto hex = 0x1234;
    auto str = "blablabla";
    auto bin = 0b110011;
    decltype(Base()) x;

    auto ter = a > 3 ? 10 : 20;
    
    Base::doNothing();
    auto ptr = &x;
    ptr->instanceVal;
    
    auto someFn = getFn(3);
    someFn(2);
    
    if (auto a = someFn(2); /*inline comment*/ a < someFn(3)) 
    {
        somenamespace::nested::fnInNamespace();
    }
    
    while (false)
    {
    }
}
