#include <string>

class Estudiante {
public:
    std::string Nombre;
    std::string Apellido;
    std::string NumeroDeCuenta;
    std::string Edad;
    std::string Carrera;

    Estudiante() {}

    Estudiante(std::string nombre, std::string apellido, std::string numeroDeCuenta, std::string edad, std::string carrera) {
        Nombre = nombre;
        Apellido = apellido;
        NumeroDeCuenta = numeroDeCuenta;
        Edad = edad;
        Carrera = carrera;
    }

    std::string toString() {
        std::string result;
        result += "{";
        result += "Nombre:" + Nombre + ",";
        result += "Apellido:" + Apellido + ",";
        result += "NumeroDeCuenta:" + NumeroDeCuenta + ",";
        result += "Edad:" + Edad + ",";
        result += "Carrera:" + Carrera;
        result += "}\n";
        return result;
    }
};