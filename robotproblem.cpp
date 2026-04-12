#include <iostream>
#include <vector>
#include <limits>
enum class Direction {
    EAST,
    WEST,
    NORTH,
    SOUTH
};

class Cell {
public:
    int getX(){
        return this->x;
    }
    int getY(){
        return this->y;
    }
private:
    int x;
    int y;
};

class Robot {
public:
    Robot(int width, int height) {} 

    void step(int num) {
        
    }
    
    std::vector<int> getPos() {
        
    }
    
    std::string getDir() {

    }
private:
    int toMove = std::numeric_limits<int>::max();

};

int main(int argc, const char** argv){
    std::vector<Cell> map;
    
    return 0;
}