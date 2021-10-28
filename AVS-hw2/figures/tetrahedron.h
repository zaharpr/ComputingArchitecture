#ifndef __tetrahedron__
#define __tetrahedron__

//------------------------------------------------------------------------------
// tetrahedron.h - содержит описание тетраэдра и его интерфейса.
//------------------------------------------------------------------------------

# include "../rnd.h"
#include "shape.h"

// Класс фигуры - равностороннего тетраэдра.
class Tetrahedron : public Shape {
public:
    virtual ~Tetrahedron() {}

    // Ввод параметров тетраэдра из файла.
    virtual void In(FILE *ifst);

    // Случайный ввод параметров тетраэдра.
    virtual void InRnd();

    // Вывод параметров тетраэдра в форматируемый поток.
    virtual void Out(FILE *ofst);

    // Вычисление периметра тетраэдра.
    virtual double SurfaceArea();

private:
    // Длина ребра.
    int a;
};

#endif //__tetrahedron__