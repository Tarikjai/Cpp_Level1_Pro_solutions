#include <iostream>
#include <string>
using namespace std;


enum enMonths { Janvier = 1, Fevrier = 2, Mars = 3, Avril = 4, Mai = 5, Juin = 6, Juillet = 7, Aout = 8, Septembre = 9, Octobre = 10, Novembre = 11, Decembre = 12 };

int ReadNumber(string Message, int From, int To) {
    int Number;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number >To);
    return Number;
}

enMonths CheckMonth() {
    return (enMonths)ReadNumber("Janvier=1, Fevrier=2, Mars=3, Avril=4, Mai=5, Juin=6, Juillet=7, Aout=8 , Septembre=9, Octobre=10, Novembre=11, Decembre=12", 1, 12);
}

string printResult(enMonths Month) {

    switch (Month) {
    case enMonths::Janvier:
        return "Janvier";
    case enMonths::Fevrier:
        return "Février";
    case enMonths::Mars:
        return "Mars";
    case enMonths::Avril:
        return "Avril";
    case enMonths::Mai:
        return "Mai";
    case enMonths::Juin:
        return "Juin";
    case enMonths::Juillet:
        return "Juillet";
    case enMonths::Aout:
        return "Août";
    case enMonths::Septembre:
        return "Septembre";
    case enMonths::Octobre:
        return "Octobre";
    case enMonths::Novembre:
        return "Novembre";
    case enMonths::Decembre:
        return "Décembre";
    default:
        return "Mois invalide";
    }
}

int main() {

    cout << printResult(CheckMonth());
}