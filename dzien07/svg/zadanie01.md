# Zadanie

Stworzyć prostą bibliotekę służącą do tworzenia obrazków [SVG](https://en.wikipedia.org/wiki/Scalable_Vector_Graphics). 

Biblioteka ma pozwalać na wygodne tworzenie obrazka zawierającego elementy takie jak:
- prostokąty
- elipsy
- linie
- napisy


Przykład korzystania z biblioteki:

```
SVGImage img{500, 300};

Rect r{10, 20, 300, 200, "blue", "yellow"};
Elipse e{50, 50, 300, 200, "orange", "white"};

img.addElement(r);
img.addElement(e);

img.save_to_file("obrazek.svg");
```
