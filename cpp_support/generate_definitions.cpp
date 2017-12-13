//
// Use Generate Definitions (Ctrl+Shift+D on Linux/Windows, ⇧⌘D on macOS)
// to generate missing function definitions.
// Or press Alt+Enter and use a quick-fix to generate definition.
//
#include <vector>

template<class T, int size>
class MyStorage {
private:
    static const int storage_capacity = size - 1;
    std::vector<T> storage;

public:
    T operator[] (int ind) const;
    void empty();
};

// Use Alt+Enter to create function from usage

template<class T>
void tfunction(T t) {
    boo(t);
}