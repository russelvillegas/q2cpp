#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double score1, score2, score3, score4;
    double weighted1, weighted2, weighted3, weighted4, Grade, GradeFin;

    cout << "Enter Quiz: ";
    cin >> score1;

    cout << "Enter Lab: ";
    cin >> score2;

    cout << "Enter Project: ";
    cin >> score3;

    cout << "Enter Final Exam: ";
    cin >> score4;

    weighted1 = score1 * 0.20;
    weighted2 = score2 * 0.25;
    weighted3 = score3 * 0.25;
    weighted4 = score4 * 0.30;

    Grade = weighted1 + weighted2 + weighted3 + weighted4;
    GradeFin = Grade;

    cout << fixed << setprecision(2);
    cout << "Weighted Grade: " << GradeFin << endl;
    cout << "Rounded Grade: " << round(GradeFin) << endl;

    return 0;
}
