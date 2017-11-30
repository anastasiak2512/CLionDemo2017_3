//
// Name lookup is a C++ standard procedure to associate a name with the declaration.
// 2017.3 release fixes the situations when the procedure failed in CLion
//
#include <string>

// Symbol brought into scope via class inheritance
namespace ns {
    struct BaseClass {
        virtual ~BaseClass() {}
    };
}

struct Child : ns::BaseClass {
    BaseClass &bc;
};

// using namespace issues
namespace ns {
    template<unsigned v>
    struct answer { answer(const char *s) {} };
}

void f() {
    using namespace ns;
    using ans42 = answer<42>;
    ans42("universe");
}

// Correct name resolve order
std::string key = "answer";

namespace ns
{
    std::string fn (std::string s = key)
    {
        return s;
    }
    std::string key = "universe";
}
