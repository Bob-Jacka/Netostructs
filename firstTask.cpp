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
            switch (month_num) {
                case static_cast<int>(Month::January):
                    libio::println("Январь");
                    continue;
                case static_cast<int>(Month::February):
                    libio::println("Февраль");
                    continue;
                case static_cast<int>(Month::March):
                    libio::println("Март");
                    continue;
                case static_cast<int>(Month::April):
                    libio::println("Апрель");
                    continue;
                case static_cast<int>(Month::May):
                    libio::println("Май");
                    continue;
                case static_cast<int>(Month::June):
                    libio::println("Июнь");
                    continue;
                case static_cast<int>(Month::July):
                    libio::println("Июль");
                    continue;
                case static_cast<int>(Month::August):
                    libio::println("Август");
                    continue;
                case static_cast<int>(Month::September):
                    libio::println("Сентябрь");
                    continue;
                case static_cast<int>(Month::October):
                    libio::println("Октябрь");
                    continue;
                case static_cast<int>(Month::November):
                    libio::println("Ноябрь");
                    continue;
                case static_cast<int>(Month::December):
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
