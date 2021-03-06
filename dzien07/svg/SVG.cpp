#include <string>
#include <fstream>

#include "SVG.hpp"

SVGImage::SVGImage(int width, int height):
    width(width),
    height(height)
{

}

void SVGImage::save_to_file(std::string filename) const
{
    std::ofstream f;
    f.open(filename);
    f << "TEST\n";
    f.close();
}
