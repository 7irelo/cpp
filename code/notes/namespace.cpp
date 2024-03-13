#include <iostream>

namespace name { namespace eric {
    void jump(int times) {
        for (int i = 1; i <= times; i++) {
            std::cout << "jump " << i << '\n';
        }
    }
}
}
int main() {
    name::eric::jump(4);
}