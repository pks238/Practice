#ifndef FUNC_H
#define FUNC_H

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

// Структура точки
typedef struct
{
    double x;
    double y;
} point;

// Очистить поток stdin
int clear_stdin();

// Определить принадлежит ли точка треугольнику
bool isPointInTriangle(point p0, point p1, point p2, point p3);

#endif
