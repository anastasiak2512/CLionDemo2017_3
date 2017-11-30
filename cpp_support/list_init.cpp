//
// List initialization is a standard way to initialize an object from braced-init-list.
// CLion 2017.3 comes with fixes to avoid many false warnings and
// errors in code analysis in this case.
//
#include <vector>
#include <iostream>
#include <initializer_list>

#include "boost/shared_ptr.hpp"
#include "boost/weak_ptr.hpp"

// Universal initialization of references in initialization lists
class Param {
};

class Ref_Hold {
public:
    Ref_Hold(Param& bar) : _bar{bar} {}

private:
    Param& _bar;
};

// Initializer list and default argument
class InitDef {
public:
    InitDef(std::vector<int> items, int other = 0) {}
};

void test() {
    InitDef f({});
}

// boost weak pointer initialization
using std::cout;
using std::endl;
using boost::shared_ptr;
using boost::weak_ptr;
using boost::bad_weak_ptr;

namespace {
    class A {
    public:
        void hello() { cout << "Hello from A" << endl; }
    };
}

int test_weak() {
    weak_ptr<A> w;

    if (w.expired())
        cout << "No associated shared_ptr" << endl;

    shared_ptr<A> p(new A());
    p->hello();
    w = p;

    cout << "A weak_ptr do not increase the reference count: " << p.use_count() << endl;
    shared_ptr<A> p2(w);
    cout << "Now the reference count is " << p.use_count() << endl;
}

// Uniform initialization
struct X { void func() const {}; };

void foo() {
    X var;
    std::pair<int const, X> e(1, var);
    auto const& x{e.second};
    x.func();
}

// Lambda capture initializer with multiple expressions
void test_lambda_init() {
    //Uncomment, analyzer should show an error
//    auto lm_fail = [ s{'a', 'b', 'c'}] { return s; };

    auto lm_ok = [ s = {'a', 'b', 'f'}  ] { return s; };
}

// Copy initializer semantic
class MyClass {
public:
    MyClass(double _val) : val{_val} {}
    double val;

};

int test_copy_init() {
    MyClass x1{0.1};
    MyClass x2(x1);
    MyClass x3{x2};
}

// C99 union initializers
union myUnion {
    char value;
    struct
    {
        int a;
        int b;
    };
};

void test_union() {
    union myUnion t1 = {.a = 1, .b= 2 };
    union myUnion t2 = {.a = 1};
}