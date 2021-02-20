# Zadanie

Stworzyć klasę `Tablica` służącą do przechowywania wielu liczb.
- W konstruktorze będziemy podawać rozmiar tablicy;
- Tablica będzie od początku wypełniona zerami.
- Tablica będzie dawała dostęp do elementów za pomocą metod:
    - `ustaw(poz, wartość)`
    - `daj(poz)`
- Próba ustawienia elementu spoza zakresu będzie cicho ignorowana.
- Próba wyciągnięcia elementu spoza zakresu będzie zwracać -1 (Albo wartość graniczną - ostatni lub pier2wszy element - do wyboru)
```

Tablica tab{20};

tab.ustaw(-10, 100); // zostanie zignorowane
tab.ustaw(5, 17);
tab.ustaw(60, 100); // też zignorowane

for(int i=-3; i<20; i++){
    std::cout << tab.daj(i) << " ";
}
```

Powinno wypisać:
```
-1 -1 -1 0 0 0 0 0 17 0 0 0 0 itd
```