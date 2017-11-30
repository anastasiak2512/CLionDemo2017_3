#include <memory>
#include <vector>

struct objectContainer{
    std::vector<int> objectA;
};

void unique_ptr_sample() {
    std::unique_ptr<objectContainer> objects;
    objects = std::make_unique<objectContainer>();
    auto it = objects->objectA.begin();

    //...
}