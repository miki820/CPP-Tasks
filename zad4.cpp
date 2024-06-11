/*
#include <iostream>

unsigned short koduj(int plec, int stan_cyw, int grupa_wiek,
                     int edu, int zam, int region, int odp) {
    unsigned short kod = 0;

    kod |= (plec & 0x01) << 15;
    kod |= (stan_cyw & 0x03) << 13;
    kod |= (grupa_wiek & 0x03) << 11;
    kod |= (edu & 0x03) << 9;
    kod |= (zam & 0x03) << 7;
    kod |= (region & 0x0F) << 3;
    kod |= (odp & 0x07);
    return kod;
}

void info(unsigned short kod) {
    std::cout << "plec:          " << ((kod >> 15) & 0x01) << "\n";
    std::cout << "stan cywilny:  " << ((kod >> 13) & 0x03) << "\n";
    std::cout << "grupa wiekowa: " << ((kod >> 11) & 0x03) << "\n";
    std::cout << "wyksztalcenie: " << ((kod >> 9) & 0x03) << "\n";
    std::cout << "miejsce zam.:  " << ((kod >> 7) & 0x03) << "\n";
    std::cout << "region:        " << ((kod >> 3) & 0x0F) << "\n";
    std::cout << "odpowiedz:     " << (kod & 0x07) << "\n";
}


int main() {
    unsigned short kod = koduj(1, 3, 3, 0, 1, 13, 6);
    std::cout << kod << std::endl;
    info(kod);

}*/
