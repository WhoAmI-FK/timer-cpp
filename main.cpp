#include <iostream>
#include "Timer.h"
#define M_PI           3.14159265358979323846  /* pi */

int main()
{
    w_chrono::Timer timer;
    timer.start();
    int counter = 0;
    double test, test2;
    while (timer.getElapsedS() < 5.0)
    {
        counter++;
        test = std::cos(counter / M_PI);
        test2 = std::sin(counter / M_PI);
    }
    timer.stop();

    std::cout << counter << std::endl;
    std::cout << "Seconds: " << timer.getElapsedS() << std::endl;
    std::cout << "Milliseconds: " << timer.getElapsedMs() << std::endl;
    return 0;
}