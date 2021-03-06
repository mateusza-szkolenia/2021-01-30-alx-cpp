#include <string>

#ifndef SVG_HPP
#define SVG_HPP

class SVGImage {
    int width;
    int height;

    public:
        SVGImage(int, int);
        void save_to_file(std::string) const;
};

#endif
