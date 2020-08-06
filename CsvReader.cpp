#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "Estudiante.h"

/*************************************************************************************
* Taken from :                                                                       *
* https://stackoverflow.com/questions/52689845/split-comma-separated-string/52690600 *
*************************************************************************************/
std::vector<std::string> split(const std::string& s, char delimiter)
{
    std::vector<std::string> splits;
    std::string split;
    std::istringstream ss(s);
    while (std::getline(ss, split, delimiter))
    {
        splits.push_back(split);
    }
    return splits;
}

int main()
{
    std::cout << "CSV Parsing Example!\n";

    std::fstream csvFile;
    csvFile.open("C:/Users/Carlos Escobar/Desktop/Estudiantes.csv", std::ios::in);

    std::string rowContent;
    std::vector<std::string> rowData;
    Estudiante* estudiante;

    if (csvFile.is_open()) {
        getline(csvFile, rowContent);
        while (getline(csvFile, rowContent)) {
            rowData = split(rowContent, ',');
            estudiante = new Estudiante(rowData[0], rowData[1], rowData[2], rowData[3], rowData[4]);
            std::cout << estudiante->toString();
        }
        csvFile.close();
    }
}