#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string mon[12] = {"stycznia", "lutego", "marca", "kwietnia", "maja", "czerwca", "lipca", "sierpnia", "wrzesnia", "pazdziernika", "listopada", "grudnia"};
string yr[21] = {"dwutysiecznego", "dwa tysiace pierwszego", "dwa tysiace drugiego", "dwa tysiace trzeciego", "dwa tysiace czwartego", "dwa tysiace piatego", "dwa tysiace szostego", "dwa tysiace siodmego", "dwa tysiace osmego", "dwa tysiace dziewiatego", "dwa tysiace dziesiatego", "dwa tysiace jedenastego", "dwa tysiace dwunastego", "dwa tysiace trzynastego", "dwa tysiace czternastego", "dwa tysiace pietnastego", "dwa tysiace szesnastego", "dwa tysiace siedemnastego", "dwa tysiace osiemnastego", "dwa tysiace dziewietnastego", "dwa tysiace dwudziestego"};

bool isleap(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

string ordinal(int i) {
    string ans = "";
    if (i == 100)
        return "setny";
    else if (i == 200)
        return "dwusetny";
    else if (i == 300)
        return "trzysetny";
    else {
        if (i / 100 == 1)
            ans += "sto ";
        else if (i / 100 == 2)
            ans += "dwiescie ";
        else if (i / 100 == 3)
            ans += "trzysta ";

        i %= 100;
        if (i / 10 == 1) {
            i %= 10;
            if (i == 0)
                ans += "dziesiaty";
            else if (i == 1)
                ans += "jedenasty";
            else if (i == 2)
                ans += "dwunasty";
            else if (i == 3)
                ans += "trzynasty";
            else if (i == 4)
                ans += "czternasty";
            else if (i == 5)
                ans += "pietnasty";
            else if (i == 6)
                ans += "szesnasty";
            else if (i == 7)
                ans += "siedemnasty";
            else if (i == 8)
                ans += "osiemnasty";
            else if (i == 9)
                ans += "dziewietnasty";
            return ans;
        } else if (i / 10 == 2)
            ans += "dwudziesty ";
        else if (i / 10 == 3)
            ans += "trzydziesty ";
        else if (i / 10 == 4)
            ans += "czterdziesty ";
        else if (i / 10 == 5)
            ans += "piecdziesiaty ";
        else if (i / 10 == 6)
            ans += "szescdziesiaty ";
        else if (i / 10 == 7)
            ans += "siedemdziesiaty ";
        else if (i / 10 == 8)
            ans += "osiemdziesiaty ";
        else if (i / 10 == 9)
            ans += "dziewiecdziesiaty ";

        i %= 10;
        if (i == 1)
            ans += "pierwszy";
        else if (i == 2)
            ans += "drugi";
        else if (i == 3)
            ans += "trzeci";
        else if (i == 4)
            ans += "czwarty";
        else if (i == 5)
            ans += "piaty";
        else if (i == 6)
            ans += "szosty";
        else if (i == 7)
            ans += "siodmy";
        else if (i == 8)
            ans += "osmy";
        else if (i == 9)
            ans += "dziewiaty";

        return ans;
    }
}

inline std::string& rtrim(std::string& s, const char* t = " \t\n\r\f\v")
{
    s.erase(s.find_last_not_of(t) + 1);
    return s;
}

int main() {
    ofstream file("calander.txt");

    for (int y = 2000; y <= 2020; y++) {
        int month[12] = {31, 28 + isleap(y), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int day = 1;
        for (int i = 0; i < 12; i++) {
            for (int j = 1; j <= month[i]; j++) {
                if (y == 2007 && i == 3 && j == 1) {
                    file << "Pierwszego kwietnia jest prima aprilis." << '\n';
                    day++;
                    j++;
                }
                if (y == 2013 && i == 5 && j == 1) {
                    file << "Pierwszego czerwca jest dzien dziecka." << '\n';
                    day++;
                    j++;
                }
                string dd = ordinal(j);
                dd[0] = toupper(dd[0]);
                rtrim(dd);
                string mm = ordinal(day++);
                rtrim(mm);

                file << dd << ' ' << mon[i] << " to " << mm << " dzien roku " << yr[y - 2000] << '.' << '\n';
            }
        }
    }
    file << "Koniec." << '\n';
}