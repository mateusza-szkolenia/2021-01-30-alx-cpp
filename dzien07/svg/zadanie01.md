# Zadanie

Stworzyć prostą bibliotekę służącą do tworzenia obrazków [SVG](https://en.wikipedia.org/wiki/Scalable_Vector_Graphics). 

Biblioteka ma pozwalać na wygodne tworzenie obrazka zawierającego elementy takie jak:
- prostokąty
- elipsy
- linie
- napisy
- grupy `<g />`

Każdy z elementów ma dać się obracać.


Przykład korzystania z biblioteki:

```
SVGImage img{500, 300};

SVGRect r{10, 20, 300, 200, "blue", "yellow"};
SVGEllipse e{50, 50, 300, 200, "orange", "white"};

SVGGroup g;
g.add_element(SVGRect{20, 20, 300, 300, "green", "black"});
g.add_element(SVGRect{120, 20, 100, 300, "purple", "black"});

g.rotate(30);

img.add_element(r);
img.add_element(e);
img.add_element(g);

img.save_to_file("obrazek.svg");
```

## pomoce naukowe

- Edytor SVG w przeglądarce: https://editor.method.ac/
- Edytor Inkscape: https://inkscape.org/

