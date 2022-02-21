#ifndef CGFROMSCRATCH_OPEN_OBJ_H
#define CGFROMSCRATCH_OPEN_OBJ_H
#include "geometry.h"
#include <vector>
#include <fstream>
#include <iostream>

class Model3D {
public:
    Model3D(std::string file_name);
    void open(std::string file_name);
    std::string to_string();
    std::vector<Vector3f> vertices;
    std::vector<Triangle> faces;
};

#endif