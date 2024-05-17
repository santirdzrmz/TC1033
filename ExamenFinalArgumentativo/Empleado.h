#include <string>
#include "Fecha.h"
class Empleado {
    public:
    Empleado();
    virtual ~Empleado();
    std::string getNombreEmp();
    float getSueldoEmp();
    Fecha getFecha();
    void setNombreEmp(std::string userNombre);
    void setSueldoEmp(float userSueldo);
    void setFecha(Fecha userFecha);
    void subeSueldo(float userPorcentaje);
    private:
    std::string nombreEmp;
    float sueldoEmp;
    Fecha cumpleAniosEmp;
};