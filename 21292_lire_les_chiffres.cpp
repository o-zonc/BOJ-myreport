#include <string>

using namespace std;

// for all numbers
string lire_les_chiffres(int n) {
    string res = "";
    int mille = n / 1000;
    int cent = (n % 1000) / 100;
    int dix = (n % 100) / 10;
    int un = n % 10;

    /* 1000 */
    if (mille) res += "mille ";

    /* 100 - 900 */
    if (cent == 1)
        res += "cent ";
    else if (cent == 2)
        res += "deux cent ";
    else if (cent == 3)
        res += "trois cent ";
    else if (cent == 4)
        res += "quatre cent ";
    else if (cent == 5)
        res += "cinq cent ";
    else if (cent == 6)
        res += "six cent ";
    else if (cent == 7)
        res += "sept cent ";
    else if (cent == 8)
        res += "huit cent ";
    else if (cent == 9)
        res += "neuf cent ";

    /* 10 - 60 */
    if (dix == 1 && un == 1) {
        res += "onze";
        return res;
    } else if (dix == 1 && un == 2) {
        res += "douze";
        return res;
    } else if (dix == 1 && un == 3) {
        res += "treize";
        return res;
    } else if (dix == 1 && un == 4) {
        res += "quatorze";
        return res;
    } else if (dix == 1 && un == 5) {
        res += "quinze";
        return res;
    } else if (dix == 1 && un == 6) {
        res += "seize";
        return res;
    } else if (dix == 1)
        res += "dix ";

    if (dix == 2 && un == 1) {
        res += "vingt et un";
        return res;
    } else if (dix == 2)
        res += "vingt ";

    if (dix == 3 && un == 1) {
        res += "trente et un";
        return res;
    } else if (dix == 3)
        res += "trente ";

    if (dix == 4 && un == 1) {
        res += "quarante et un";
        return res;
    } else if (dix == 4)
        res += "quarante ";

    if (dix == 5 && un == 1) {
        res += "cinqante et un";
        return res;
    } else if (dix == 5)
        res += "cinqante ";

    if (dix == 6 && un == 1) {
        res += "soixante et un";
        return res;
    } else if (dix == 6)
        res += "soixante ";

    /* 70 - 90 */
    if (dix == 7) {
        if (un == 1)
            res += "soixante et onze";
        else if (un == 2)
            res += "soixante douze";
        else if (un == 3)
            res += "soixante treize";
        else if (un == 4)
            res += "soixante quatorze";
        else if (un == 5)
            res += "soixante quinze";
        else if (un == 6)
            res += "soixante seize";
        else if (un == 7)
            res += "soixante dix sept";
        else if (un == 8)
            res += "soixante dix huit";
        else if (un == 9)
            res += "soixante dix neuf";
        return res;
    }
    if (dix == 8 || dix == 9) {
        dix -= 8;
        if (dix == 0 && un == 0)
            res += "quatre vingts";
        else
            res += "quatre vingt ";
        if (dix == 1) {
            if (un == 0)
                res += "dix";
            else if (un == 1)
                res += "onze";
            else if (un == 2)
                res += "douze";
            else if (un == 3)
                res += "treize";
            else if (un == 4)
                res += "quatorze";
            else if (un == 5)
                res += "quinze";
            else if (un == 6)
                res += "seize";
            else if (un == 7)
                res += "dix sept";
            else if (un == 8)
                res += "dix huit";
            else if (un == 9)
                res += "dix neuf";
        } else if (dix == 0) {
            if (un == 1)
                res += "un";
            else if (un == 2)
                res += "deux";
            else if (un == 3)
                res += "trois";
            else if (un == 4)
                res += "quatre";
            else if (un == 5)
                res += "quint";
            else if (un == 6)
                res += "six";
            else if (un == 7)
                res += "sept";
            else if (un == 8)
                res += "huit";
            else if (un == 9)
                res += "neuf";
        }
        return res;
    }

    if (un == 1)
        res += "un";
    else if (un == 2)
        res += "deux";
    else if (un == 3)
        res += "trois";
    else if (un == 4)
        res += "quatre";
    else if (un == 5)
        res += "cinq";
    else if (un == 6)
        res += "six";
    else if (un == 7)
        res += "sept";
    else if (un == 8)
        res += "huit";
    else if (un == 9)
        res += "neuf";

    return res;
}