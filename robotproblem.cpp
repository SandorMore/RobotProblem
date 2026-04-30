#include <iostream>
#include <vector>
#include <limits>
#include <string>

enum class Direction {
    EAST,
    WEST,
    NORTH,
    SOUTH
};

class Cell {
public:
    Cell(int pos, int _pos) :x(pos), y(_pos){
               
    }
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
    Cell currentCell;
    Cell startPos {0, 0};
};

int main(int argc, const char** argv){
    std::vector<int> map;

    for(size_t i = 1; i <= argc; ++i){
        map.emplace_back(std::stoi(argv[i]));
    }
    for(auto& i : map)
        printf("%d",i);
    return 0;
}
