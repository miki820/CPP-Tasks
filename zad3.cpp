/*
#include <iostream>
#include <utility>

void getMinMax(const double &a, const double &b,
               const double &c,
               const double *&pMin, const double *&pMax) {
    if (a < b) {
        if (a < c) {
            pMin = &a;
        } else {
            pMin = &c;
        }
    } else {
        if (b < c) {
            pMin = &b;
        } else {
            pMin = &c;
        }
    }

    if (a > b) {
        if (a > c) {
            pMax = &a;
        } else {
            pMax = &c;
        }
    } else {
        if (b > c) {
            pMax = &b;
        } else {
            pMax = &c;
        }
    }
}

void getMinMax(const double *a, const double *b,
               const double *c,
               const double **pMin, const double **pMax) {
    if (*a < *b) {
        if (*a < *c) {
            *pMin = a;
        } else {
            *pMin = c;
        }
    } else {
        if (*b < *c) {
            *pMin = b;
        } else {
            *pMin = c;
        }
    }

    if (*a > *b) {
        if (*a > *c) {
            *pMax = a;
        } else {
            *pMax = c;
        }
    } else {
        if (*b > *c) {
            *pMax = b;
        } else {
            *pMax = c;
        }
    }
}

void ord3(double &a, double &b, double &c) {
    if (a > b) {
        std::swap(a, b);
    }
    if (a > c) {
        std::swap(a, c);
    }
    if (b > c){
        std::swap(b, c);
    }
}

void ord3(double *a, double *b, double *c) {
    if (*a > *b) {
        std::swap(*a, *b);
    }
    if (*a > *c) {
        std::swap(*a, *c);
    }
    if (*b > *c){
        std::swap(*b, *c);
    }
}

void printOrd(const double *a, const double *b,
              const double *c) {
    using std::cout;
    using std::endl;
    cout << *a << " " << *b << " " << *c << endl;
}

void printMinMax(const double *pmn, const double *pmx) {
    using std::cout;
    using std::endl;
    std::cout << "Min = " << *pmn << "; "
              << "Max = " << *pmx << std::endl;
}

int main() {
    double a, b, c;
    const double *pMin, *pMax;

    a = 2;
    b = 1;
    c = 3;
    ord3(a, b, c);
    printOrd(&a, &b, &c);

    a = 3;
    b = 2;
    c = 1;
    ord3(&a, &b, &c);
    printOrd(&a, &b, &c);

    a = -1;
    b = -1;
    c = 1;
    ord3(&a, &b, &c);
    printOrd(&a, &b, &c);

    a = 2;
    b = 3;
    c = 1;
    getMinMax(a, b, c, pMin, pMax);
    printMinMax(pMin, pMax);

    a = 3;
    b = 1;
    c = 2;
    getMinMax(&a, &b, &c, &pMin, &pMax);
    printMinMax(pMin, pMax);

    a = 3;
    b = 3;
    c = -1;
    getMinMax(&a, &b, &c, &pMin, &pMax);
    printMinMax(pMin, pMax);
}
*/
