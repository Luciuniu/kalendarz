#include "stdio.h"

int main() {
    enum dni {
        ni, po = 5, wt, sr, cz, pi, so
    };
    enum dni dzien_tygodnia;
    dzien_tygodnia = wt;
    printf("%i\n", dzien_tygodnia);
}