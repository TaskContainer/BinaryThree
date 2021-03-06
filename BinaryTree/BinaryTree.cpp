#include <iostream>
#include "IntThree.h"

int main()
{
    std::cout << "[flag] [number]\nflags: a - append, f - find, r - remove, s - show\nexample: a 4" << std::endl;
    IntThree three;
    char flag;
    for (int buffer; std::cout << ">>> ", std::cin >> flag; )
    {
        switch (flag)
        {
        case 'a':
            std::cin >> buffer;
            three.Append(buffer);
            std::cout << buffer << " was added to the tree" << std::endl;
            continue;
        case 'f':
            std::cin >> buffer;
            std::cout << (three.Contains(buffer) ? "Exist": "Does not exist") << std::endl;
            continue;
        case 'r':
            std::cin >> buffer;
            three.Remove(buffer);
            std::cout << buffer << " was removed from the tree" << std::endl;
            continue;
        case 's':
            std::cout << three << std::endl;
            continue;
        }
    }
}
