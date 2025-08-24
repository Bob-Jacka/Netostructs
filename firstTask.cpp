#include "libio.hpp"

enum class Month {
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

int main() {
    while (true) {
        int month_num = 0;
        libio::print("Введите номер месяца: ");
        libio::intUserInput(month_num);
        if (month_num != 0) {
            switch (static_cast<Month>(month_num)) {
                case Month::January:
                    libio::println("Январь");
                    continue;
                case Month::February:
                    libio::println("Февраль");
                    continue;
                case Month::March:
                    libio::println("Март");
                    continue;
                case Month::April:
                    libio::println("Апрель");
                    continue;
                case Month::May:
                    libio::println("Май");
                    continue;
                case Month::June:
                    libio::println("Июнь");
                    continue;
                case Month::July:
                    libio::println("Июль");
                    continue;
                case Month::August:
                    libio::println("Август");
                    continue;
                case Month::September:
                    libio::println("Сентябрь");
                    continue;
                case Month::October:
                    libio::println("Октябрь");
                    continue;
                case Month::November:
                    libio::println("Ноябрь");
                    continue;
                case Month::December:
                    libio::println("Декабрь");
                    continue;
                default:
                    libio::println("Неправильный номер!");
                    continue;
            }
        }
        libio::println("До свидания");
        break;
    }
}
