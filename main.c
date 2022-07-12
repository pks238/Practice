#include "Func.h"

int main(void)
{
    point p0,         // Точка
          p1, p2, p3; // Вершины треугольника

    // Смена локализации
    setlocale(LC_CTYPE, "");

    // Ввод координат вершины треугольника A
    while(true)
    {
        printf("Введите координаты вершины треугольника A\n");

        printf("X: ");
        if(scanf("%lf", &p1.x) != 1)
        {
            printf("Неверный ввод!\n\n");
            continue;
        }

        printf("Y: ");
        if(scanf("%lf", &p1.y) != 1)
        {
            printf("Неверный ввод!\n\n");
            continue;
        }

        clear_stdin();
        break;
    }

    // Ввод координат вершины треугольника B
    while(true)
    {
        printf("\nВведите координаты вершины треугольника B\n");

        printf("X: ");
        if(scanf("%lf", &p2.x) != 1)
        {
            printf("Неверный ввод!\n\n");
            continue;
        }

        printf("Y: ");
        if(scanf("%lf", &p2.y) != 1)
        {
            printf("Неверный ввод!\n\n");
            continue;
        }

        clear_stdin();
        break;
    }

    // Ввод координат вершины треугольника C
    while(true)
    {
        printf("\nВведите координаты вершины треугольника C\n");

        printf("X: ");
        if(scanf("%lf", &p3.x) != 1)
        {
            printf("Неверный ввод!\n\n");
            continue;
        }

        printf("Y: ");
        if(scanf("%lf", &p3.y) != 1)
        {
            printf("Неверный ввод!\n\n");
            continue;
        }

        clear_stdin();
        break;
    }

    // Ввод координат точки D
    while(true)
    {
        printf("\nВведите координаты точки D\n");

        printf("X: ");
        if(scanf("%lf", &p0.x) != 1)
        {
            printf("Неверный ввод!\n\n");
            continue;
        }

        printf("Y: ");
        if(scanf("%lf", &p0.y) != 1)
        {
            printf("Неверный ввод!\n\n");
            continue;
        }

        clear_stdin();
        break;
    }

    // Проверка принадлежности точки
    if(isPointInTriangle(p0, p1, p2, p3))
        printf("\nТочка D принадлежит треугольнику");
    else
        printf("\nТочка D не принадлежит треугольнику");

    getchar();
}
