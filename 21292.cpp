#include <iostream>
#include <string>

using namespace std;

int cnt;

int main() {
    wstring s;
    getline(wcin, s);
    for (int i = 0; i < s.length(); i++) {
        if (0xF0 == (0xF0 & s[i])) {
            i += 3;
            continue;
        } else if (0xE0 == (0xE0 & s[i])) {
            i += 2;
            continue;
        } else if (0xC0 == (0xC0 & s[i])) {
            if (s[i] == 0xC3) {
                if (s[i + 1] == 0xA7 || s[i + 1] == 0xA8 || s[i + 1] == 0xA9 || s[i + 1] == 0xAA || s[i + 1] == 0xAE || s[i + 1] == 0xB4) cnt++;
            }
            i++;
            continue;
        } else if (0 == (s[i] >> 7)) {
            if (0x61 <= s[i] && s[i] <= 0x76)
                cnt++;
            else if (0x78 <= s[i] && s[i] <= 0 <= 0x7A)
                cnt++;
        }
    }

    int c;
    if (cnt % 7 > 3) {
        c = (cnt / 7 + 1) * 7;
    } else
        c = (cnt / 7) * 7;

    if (c == 0)
        cout << "zéro";
    else if (c == 7)
        cout << "sept";
    else if (c == 14)
        cout << "quatorze";
    else if (c == 21)
        cout << "vingt et un";
    else if (c == 28)
        cout << "vingt huit";
    else if (c == 35)
        cout << "trente cinq";
    else if (c == 42)
        cout << "quarante deux";
    else if (c == 49)
        cout << "quarante neuf";
    else if (c == 56)
        cout << "cinquante six";
    else if (c == 63)
        cout << "soixante trois";
    else if (c == 70)
        cout << "soixante dix";
    else if (c == 77)
        cout << "soixante dix sept";
    else if (c == 84)
        cout << "quatre vingt quatre";
    else if (c == 91)
        cout << "quatre vingt onze";
    else if (c == 98)
        cout << "quatre vingt dix huit";
    else if (c == 105)
        cout << "cent cinq";
    else if (c == 112)
        cout << "cent douze";
    else if (c == 119)
        cout << "cent dix neuf";
    else if (c == 126)
        cout << "cent vingt six";
    else if (c == 133)
        cout << "cent trente trois";
    else if (c == 140)
        cout << "cent quarante";
    else if (c == 147)
        cout << "cent quarante sept";
    else if (c == 154)
        cout << "cent cinquante quatre";
    else if (c == 161)
        cout << "cent soixante et un";
    else if (c == 168)
        cout << "cent soixante huit";
    else if (c == 175)
        cout << "cent soixante quinze";
    else if (c == 182)
        cout << "cent quatre vingt deux";
    else if (c == 189)
        cout << "cent quatre vingt neuf";
    else if (c == 196)
        cout << "cent quatre vingt seize";
    else if (c == 203)
        cout << "deux cent trois";
    else if (c == 210)
        cout << "deux cent dix";
    else if (c == 217)
        cout << "deux cent dix sept";
    else if (c == 224)
        cout << "deux cent vingt quatre";
    else if (c == 231)
        cout << "deux cent trente et un";
    else if (c == 238)
        cout << "deux cent trente huit";
    else if (c == 245)
        cout << "deux cent quarante cinq";
    else if (c == 252)
        cout << "deux cent cinquante deux";
    else if (c == 259)
        cout << "deux cent cinquante neuf";
    else if (c == 266)
        cout << "deux cent soixante six";
    else if (c == 273)
        cout << "deux cent soixante treize";
    else if (c == 280)
        cout << "deux cent quatre vingts";
    else if (c == 287)
        cout << "deux cent quatre vingt sept";
    else if (c == 294)
        cout << "deux cent quatre vingt quatorze";
    else if (c == 301)
        cout << "trois cent un";
    else if (c == 308)
        cout << "trois cent huit";
    else if (c == 315)
        cout << "trois cent quinze";
    else if (c == 322)
        cout << "trois cent vingt deux";
    else if (c == 329)
        cout << "trois cent vingt neuf";
    else if (c == 336)
        cout << "trois cent trente six";
    else if (c == 343)
        cout << "trois cent quarante trois";
    else if (c == 350)
        cout << "trois cent cinquante";
    else if (c == 357)
        cout << "trois cent cinquante sept";
    else if (c == 364)
        cout << "trois cent soixante quatre";
    else if (c == 371)
        cout << "trois cent soixante et onze";
    else if (c == 378)
        cout << "trois cent soixante dix huit";
    else if (c == 385)
        cout << "trois cent quatre vingt cinq";
    else if (c == 392)
        cout << "trois cent quatre vingt douze";
    else if (c == 399)
        cout << "trois cent quatre vingt dix neuf";
    else if (c == 406)
        cout << "quatre cent six";
    else if (c == 413)
        cout << "quatre cent treize";
    else if (c == 420)
        cout << "quatre cent vingt";
    else if (c == 427)
        cout << "quatre cent vingt sept";
    else if (c == 434)
        cout << "quatre cent trente quatre";
    else if (c == 441)
        cout << "quatre cent quarante et un";
    else if (c == 448)
        cout << "quatre cent quarante huit";
    else if (c == 455)
        cout << "quatre cent cinquante cinq";
    else if (c == 462)
        cout << "quatre cent soixante deux";
    else if (c == 469)
        cout << "quatre cent soixante neuf";
    else if (c == 476)
        cout << "quatre cent soixante seize";
    else if (c == 483)
        cout << "quatre cent quatre vingt trois";
    else if (c == 490)
        cout << "quatre cent quatre vingt dix";
    else if (c == 497)
        cout << "quatre cent quatre vingt dix sept";
    else if (c == 504)
        cout << "cinq cent quatre";
    else if (c == 511)
        cout << "cinq cent onze";
    else if (c == 518)
        cout << "cinq cent dix huit";
    else if (c == 525)
        cout << "cinq cent vingt cinq";
    else if (c == 532)
        cout << "cinq cent trente deux";
    else if (c == 539)
        cout << "cinq cent trente neuf";
    else if (c == 546)
        cout << "cinq cent quarante six";
    else if (c == 553)
        cout << "cinq cent cinquante trois";
    else if (c == 560)
        cout << "cinq cent soixante";
    else if (c == 567)
        cout << "cinq cent soixante sept";
    else if (c == 574)
        cout << "cinq cent soixante quatorze";
    else if (c == 581)
        cout << "cinq cent quatre vingt un";
    else if (c == 588)
        cout << "cinq cent quatre vingt huit";
    else if (c == 595)
        cout << "cinq cent quatre vingt quinze";
    else if (c == 602)
        cout << "six cent deux";
    else if (c == 609)
        cout << "six cent neuf";
    else if (c == 616)
        cout << "six cent seize";
    else if (c == 623)
        cout << "six cent vingt trois";
    else if (c == 630)
        cout << "six cent trente";
    else if (c == 637)
        cout << "six cent trente sept";
    else if (c == 644)
        cout << "six cent quarante quatre";
    else if (c == 651)
        cout << "six cent cinquante et un";
    else if (c == 658)
        cout << "six cent cinquante huit";
    else if (c == 665)
        cout << "six cent soixante cinq";
    else if (c == 672)
        cout << "six cent soixante douze";
    else if (c == 679)
        cout << "six cent soixante dix neuf";
    else if (c == 686)
        cout << "six cent quatre vingt six";
    else if (c == 693)
        cout << "six cent quatre vingt treize";
    else if (c == 700)
        cout << "sept cents";
    else if (c == 707)
        cout << "sept cent sept";
    else if (c == 714)
        cout << "sept cent quatorze";
    else if (c == 721)
        cout << "sept cent vingt et un";
    else if (c == 728)
        cout << "sept cent vingt huit";
    else if (c == 735)
        cout << "sept cent trente cinq";
    else if (c == 742)
        cout << "sept cent quarante deux";
    else if (c == 749)
        cout << "sept cent quarante neuf";
    else if (c == 756)
        cout << "sept cent cinquante six";
    else if (c == 763)
        cout << "sept cent soixante trois";
    else if (c == 770)
        cout << "sept cent soixante dix";
    else if (c == 777)
        cout << "sept cent soixante dix sept";
    else if (c == 784)
        cout << "sept cent quatre vingt quatre";
    else if (c == 791)
        cout << "sept cent quatre vingt onze";
    else if (c == 798)
        cout << "sept cent quatre vingt dix huit";
    else if (c == 805)
        cout << "huit cent cinq";
    else if (c == 812)
        cout << "huit cent douze";
    else if (c == 819)
        cout << "huit cent dix neuf";
    else if (c == 826)
        cout << "huit cent vingt six";
    else if (c == 833)
        cout << "huit cent trente trois";
    else if (c == 840)
        cout << "huit cent quarante";
    else if (c == 847)
        cout << "huit cent quarante sept";
    else if (c == 854)
        cout << "huit cent cinquante quatre";
    else if (c == 861)
        cout << "huit cent soixante et un";
    else if (c == 868)
        cout << "huit cent soixante huit";
    else if (c == 875)
        cout << "huit cent soixante quinze";
    else if (c == 882)
        cout << "huit cent quatre vingt deux";
    else if (c == 889)
        cout << "huit cent quatre vingt neuf";
    else if (c == 896)
        cout << "huit cent quatre vingt seize";
    else if (c == 903)
        cout << "neuf cent trois";
    else if (c == 910)
        cout << "neuf cent dix";
    else if (c == 917)
        cout << "neuf cent dix sept";
    else if (c == 924)
        cout << "neuf cent vingt quatre";
    else if (c == 931)
        cout << "neuf cent trente et un";
    else if (c == 938)
        cout << "neuf cent trente huit";
    else if (c == 945)
        cout << "neuf cent quarante cinq";
    else if (c == 952)
        cout << "neuf cent cinquante deux";
    else if (c == 959)
        cout << "neuf cent cinquante neuf";
    else if (c == 966)
        cout << "neuf cent soixante six";
    else if (c == 973)
        cout << "neuf cent soixante treize";
    else if (c == 980)
        cout << "neuf cent quatre vingts";
    else if (c == 987)
        cout << "neuf cent quatre vingt sept";
    else if (c == 994)
        cout << "neuf cent quatre vingt quatorze";
    else if (c == 1001)
        cout << "mille un";
}