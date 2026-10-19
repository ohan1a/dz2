#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    float H = 5000.0;
    float Vc = 240.0;
    float Vp = 400.0;
    float Vp2 = Vp * Vp;
    float Vc2 = Vc * Vc;
    float S = (H * Vp) / sqrt(Vp2 - Vc2);
    setlocale(LC_ALL, "RUS");
    printf("Высота полета: %.2f м", H);
    printf("\nСкорость самолета: %.2f м/с", Vc);
    printf("\nСкорость ракеты: %.2f м/с", Vp);
    printf("\nДальность поражения цели S: %.2f м", S);
}