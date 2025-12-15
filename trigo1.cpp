#include <iostream>
#include <list>
#include <ctime>

constexpr unsigned int w {19};
constexpr unsigned int h {10};

template <typename regT> 
void printScreen(regT screen[w][h])
{
    for (int y = 0; y < h; ++y) 
    {
        for (int x = 0; x < w; ++x)
        {
            std::cout << screen[x][y];
        }
        std::cout << '\n';
    }
}


int main()
{
    std::srand(std::time(0));
    
    char screen[w][h];

    for (int y = 0; y < h; ++y) 
    {
        for (int x = 0; x < w; ++x)
        {
            screen[x][y] = ':';
        }
    }

    unsigned int rx {std::rand() % (w - 1)};
    screen[rx][h - 1] = 'd';

    printScreen(screen);

}
