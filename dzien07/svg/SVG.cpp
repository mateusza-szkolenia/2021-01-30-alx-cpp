#include <string>
#include <fstream>

#include "SVG.hpp"

SVGImage::SVGImage(int width, int height):
    width(width),
    height(height),
    inner_xml("")
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

    result += this->inner_xml;

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

void SVGImage::add_element(const SVGElement & e)
{
    this->inner_xml += e.to_string();
}


SVGRect::SVGRect(const int x, const int y, const int width, const int height, const std::string stroke, const std::string fill):
    x(x), y(y),
    width(width), height(height),
    stroke(stroke), fill(fill)
{

}

std::string SVGRect::to_string() const 
{
    std::string result = "";
    result += "<rect ";
    result += "width='" + std::to_string(this->width) + "' ";
    result += "height='" + std::to_string(this->height) + "' ";
    result += "x='" + std::to_string(this->x) + "' ";
    result += "y='" + std::to_string(this->y) + "' ";
    result += "stroke='" + this->stroke + "' ";
    result += "fill='" + this->fill + "' ";
    result += "/>\n";
    return result;
}




SVGEllipse::SVGEllipse(const int cx, const int cy, const int rx, const int ry, const std::string stroke, const std::string fill):
    cx(cx), cy(cy),
    rx(rx), ry(ry),
    stroke(stroke), fill(fill)
{

}

std::string SVGEllipse::to_string() const 
{
    std::string result = "";
    result += "<ellipse ";
    result += "cx='" + std::to_string(this->cx) + "' ";
    result += "cy='" + std::to_string(this->cy) + "' ";
    result += "rx='" + std::to_string(this->rx) + "' ";
    result += "ry='" + std::to_string(this->ry) + "' ";
    result += "stroke='" + this->stroke + "' ";
    result += "fill='" + this->fill + "' ";
    result += "/>\n";
    return result;
}

SVGLine::SVGLine(const int x1, const int y1, const int x2, const int y2, const std::string stroke):
    x1(x1), y1(y1),
    x2(x2), y2(y2),
    stroke(stroke)
{

}

std::string SVGLine::to_string() const 
{
    std::string result = "";
    result += "<line ";
    result += "x1='" + std::to_string(this->x1) + "' ";
    result += "x2='" + std::to_string(this->x2) + "' ";
    result += "y1='" + std::to_string(this->y1) + "' ";
    result += "y2='" + std::to_string(this->y2) + "' ";
    result += "stroke='" + this->stroke + "' ";
    result += "/>\n";
    return result;
}

SVGText::SVGText(const int x, const int y, std::string text, const std::string fill):
    x(x), y(y),
    text(text),
    fill(fill)
{

}

std::string SVGText::to_string() const 
{
    std::string result = "";
    result += "<text ";
    result += "x='" + std::to_string(this->x) + "' ";
    result += "y='" + std::to_string(this->y) + "' ";
    result += "fill='" + this->fill + "' ";
    result += ">" + text + "</text>";
    return result;
}
