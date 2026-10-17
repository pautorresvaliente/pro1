#include <string>

std::string day_of_the_week(int d, int m, int y) {
    m -= 2;
    if (m <= 0) {
        m += 12;
        y -= 1;
    }
    int c = y / 100;
    int a = y % 100;

    int f = (int)(2.6 * m - 0.2) + d + a + (a / 4) + (c / 4) - (2 * c);

    int day_index = (f % 7 + 7) % 7;

    const std::string days[] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
    };

    return days[day_index];
}