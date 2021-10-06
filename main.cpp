#include <iostream>
#include <cstdio>

int main() {
    float speed=0;
    float speedChange;
    char text[100];

    do
    {
        std::cout << "Input speed change: ";
        std::cin >> speedChange;
        speed+=speedChange;
        if(speed<0.1F)
            speed=0;

        std::sprintf(text, "Actualspeed: %.1f kmph", speed);
        std::cout << text << std::endl;
    }
    while(speed!=0);
    return 0;
}
