#include <string>

#ifndef SVG_HPP
#define SVG_HPP

class SVGRect;

class SVGElement {
    public:
        virtual std::string to_string() const = 0;
};

class SVGImage : public SVGElement {
    int width;
    int height;

    std::string inner_xml;

    public:
        SVGImage(int, int);
        void save_to_file(std::string) const;
        void add_element(const SVGElement &);
        std::string to_string() const override;
        
};

class SVGRect : public SVGElement {
    int x, y;
    int width, height;
    std::string stroke, fill;
    public:
        SVGRect(const int, const int, const int, const int, const std::string, const std::string);
        std::string to_string() const override;
};

class SVGEllipse : public SVGElement {
    int cx, cy;
    int rx, ry;
    std::string stroke, fill;
    public:
        SVGEllipse(const int, const int, const int, const int, const std::string, const std::string);
        std::string to_string() const override;
};

class SVGLine : public SVGElement {
    int x1, y1, x2, y2;
    std::string stroke;
    public:
        SVGLine(const int, const int, const int, const int, const std::string);
        std::string to_string() const override;
};

#endif
