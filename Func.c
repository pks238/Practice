#include "Func.h"

// Очистить поток stdin
int clear_stdin()
{
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}

// Определить принадлежит ли точка треугольнику
bool isPointInTriangle(point p0, point p1, point p2, point p3)
{
    int a = (p1.x - p0.x) * (p2.y - p1.y) - (p2.x - p1.x) * (p1.y - p0.y);
    int b = (p2.x - p0.x) * (p3.y - p2.y) - (p3.x - p2.x) * (p2.y - p0.y);
    int c = (p3.x - p0.x) * (p1.y - p3.y) - (p1.x - p3.x) * (p3.y - p0.y);

    if((a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0))
        return true;
    else
        return false;
}
