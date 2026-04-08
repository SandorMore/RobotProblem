#include <iostream>
#include <vector>

class Robot {

public:
    Robot(int width, int height) {} 
    
};

int main(int argc, const char** argv){
    for(size_t i = 1; i <= argc; ++i)
    {
        if(i == 0)
            std::cout << "\n";
        std::cout << argv[i] << "\n";
    }
    return 0;
}