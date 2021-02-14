# Notatka

## [Compiler Explorer](https://godbolt.org/)

### Kod C++
```
int funkcja_abc(){
    return 4000+70;
}

int ile_sekund_w_dobie(){
    return 24*60*60;
}

int suma(int a, int b){
    return a + b;
}

int powieksz(int n){
    return n + 777777;
}

int iloczyn(int a, int b){
    return a * b;
}

int pomnoz(int a){
    return 17 * a;
}

int pomnoz2(int a){
    return 16 * a + a;
}

int pomnoz3(int a){
    return a + (a << 4);
}

float podziel(float a, float b){
    return a / b;
}

float cwiartka(float a){
    return a / 4.0;
}

float cwiartka2(float a){
    return a * 0.25;
}
```

### Kod assemblera
```
funkcja_abc():
        mov     eax, 4070
        ret
ile_sekund_w_dobie():
        mov     eax, 86400
        ret
suma(int, int):
        lea     eax, [rdi+rsi]
        ret
powieksz(int):
        lea     eax, [rdi+777777]
        ret
iloczyn(int, int):
        mov     eax, edi
        imul    eax, esi
        ret
pomnoz(int):
        mov     eax, edi
        sal     eax, 4
        add     eax, edi
        ret
pomnoz2(int):
        mov     eax, edi
        sal     eax, 4
        add     eax, edi
        ret
pomnoz3(int):
        mov     eax, edi
        sal     eax, 4
        add     eax, edi
        ret
podziel(float, float):
        divss   xmm0, xmm1
        ret
cwiartka(float):
        mulss   xmm0, DWORD PTR .L
        ret
cwiartka2(float):
        mulss   xmm0, DWORD PTR .L
        ret
.LC0:
        .long   1048576000
```

