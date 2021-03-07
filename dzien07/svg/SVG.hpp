#include <string>

#ifndef SVG_HPP
#define SVG_HPP

class SVGRect;

class SVGImage {
    int width;
    int height;

    std::string inner_xml;

    public:
        SVGImage(int, int);
        void save_to_file(std::string) const;
        void add_element(const SVGRect &);
        std::string to_string() const;
};

class SVGRect {
    int x, y;
    int width, height;
    std::string stroke, fill;
    public:
        SVGRect(const int, const int, const int, const int, const std::string, const std::string);
        std::string to_string() const;
};

#endif
