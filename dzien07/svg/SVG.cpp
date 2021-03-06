#include <string>
#include <fstream>

#include "SVG.hpp"

SVGImage::SVGImage(int width, int height):
    width(width),
    height(height)
{

}

std::string SVGImage::to_string() const 
{
    std::string result = "";
    result += "<svg ";
    result += "width='" + std::to_string(this->width) + "' ";
    result += "height='" + std::to_string(this->height) + "' ";
    result += "xmlns='http://www.w3.org/2000/svg'";
    result += ">\n";

    // tutaj będą dodawane wszystkie elementy składowe...

    result += "</svg>\n";
    return result;
}

void SVGImage::save_to_file(std::string filename) const
{
    std::ofstream f;
    f.open(filename);
    f << this->to_string();
    f.close();
}
