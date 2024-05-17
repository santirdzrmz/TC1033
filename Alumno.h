#include "Fecha.h" // Se incluye la clase que será el objeto componente
#include <string>
using namespace std;
class Alumno {
    public:
    Alumno();
    virtual ~Alumno();
    void printAlumno();
    private:
    string matricula, nombre, carrera;
    Fecha nacimiento; // atributo cuyo tipo es otra clase
};
