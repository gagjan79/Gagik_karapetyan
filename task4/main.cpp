#include <iostream>
#include "constants.h"

// Получаем начальную высоту от пользователя и возвращаем её
double getInitialHeight()
{
    std::cout << " Enter the initial height of the touer in meters "<< std::endl;
    double initialHeight;
    std::cin >> initialHeight;

    return initialHeight;
}

// Возвращаем расстояние от земли после "..." секунд падения
double calculateHeight(double initialHeight, int seconds)
{
     // Используем формулу: [ s = u * t + (a * t^2) / 2 ], где u(начальная скорость) = 0
     double distanceFailen = (myConstants::gravity*seconds*seconds) / 2 ;
     double currentHeighth = initialHeight - distanceFailen ;

     return currentHeighth;
}

// Выводим высоту, на которой находится мячик после каждой секунды падения 
void printHeight(double height, int seconds)
{
    if (height > 0.0)
       std::cout << "At" << seconds << " Seconds, the ball is at height: " << height << " meters\n";
     else
       std::cout << "At "<< seconds << "seconds, the ball on the graund.\n ";  
}

void calculateAndPrintHeight(double initialHeight, int seconds)
{
    double height = calculateHeight(initialHeight, seconds);
    printHeight(height, seconds);
}
int main()
{
    const double initialHeight = getInitialHeight();

    calculateAndPrintHeight(initialHeight, 0);
    calculateAndPrintHeight(initialHeight, 1);
    calculateAndPrintHeight(initialHeight, 2);
    calculateAndPrintHeight(initialHeight, 3);
    calculateAndPrintHeight(initialHeight, 4);
    calculateAndPrintHeight(initialHeight, 5);

    return 0;
}