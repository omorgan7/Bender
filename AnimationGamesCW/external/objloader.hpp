#ifndef OBJLOADER_H
#define OBJLOADER_H

#include <vector>
#include <stdio.h>
#include <iostream>
#include <string>
#include <cstring>
#include <glm/glm.hpp>

bool loadSimpleOBJ(const char * path,std::vector<glm::vec3> & out_vertices,std::vector<unsigned int> & out_vertex_indices);
bool writeSimpleObj(const char* path,std::vector<glm::vec3> vertices, std::vector<unsigned int> vertex_indices );
#endif
