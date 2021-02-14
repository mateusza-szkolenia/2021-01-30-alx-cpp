# Zadanie 5

Wylosować współrzędne `N=100` punktów na płaszczyźnie, gdzie współrzędne `x, y` są z przedziału `[-100,100]`.
Policzyć, ile punktów wypadłow w każdej ćwiartce układu współrzędnych, oraz ile na osiach `X` i `Y`.

```
struct Punkt {
    double x;
    double y;
}

Punkt punkty[N];
```

![Układ współrzędnych](img/Cartesian_coordinates_2D_PL.svg.png)
