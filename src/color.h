#ifndef COLOR_H
#define COLOR_H

#include "vec3.h"

#include <iostream>

using color = vec3;

void write_color(std::ostream& out, const color& pixel_color){
    auto r = pixel_color.x();
    auto g = pixel_color.y();
    auto b = pixel_color.z();

    // [0,1] range to [0,255]
    int rbyte = int(r*255.999);
    int gbyte = int(g*255.999);
    int bbyte = int(b*255.999);

    out << rbyte << ' ' << gbyte << ' ' << bbyte << '\n';
}

#endif