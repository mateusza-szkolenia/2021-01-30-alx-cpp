# Zadanie 03

Napisać funkcję `unormuj()`, która przyjmuje jako parametr wskaźnik do zmiennej typu `int`.

Jeśli wartość zmiennej jest mniejsza niż `0`, zmień ją na `-1`, jeśli większa niż `0` zmień na `1`. (Jeśli zero - zostaw bez zmian)

```
int main(){
    int x = 4;
    int y = -7;
    int z = 0;

    unormuj(&x);
    unormuj(&y);
    unormuj(&z);

    std::cout << x << " " << y << " " << z << "\n";
    
    return 0;
}
```

Powinno wyświetlić: `1 -1 0`


