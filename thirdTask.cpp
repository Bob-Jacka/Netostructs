#include "libio.hpp"

struct CityStruct {
    std::string city;
    std::string street_name;
    int building_num{};
    int apartment_num{};
    int index{};
};

void printCityData(const CityStruct &city) {
    libio::print("Город: ");
    libio::println(city.city);
    libio::print("Улица: ");
    libio::println(city.street_name);
    libio::print("Номер дома: ");
    libio::println(city.building_num);
    libio::print("Номер квартиры: ");
    libio::println(city.apartment_num);
    libio::print("Индекс: ");
    libio::println(city.index);
}

int main() {
    const CityStruct moscow_struct = {
            .city = "Москва",
            .street_name = "Арбат",
            .building_num = 12,
            .apartment_num = 8,
            .index = 123456
    };

    const CityStruct izhevsk_struct = {
            .city = "Ижевск",
            .street_name = "Ворошилова",
            .building_num = 46,
            .apartment_num = 93,
            .index = 426061
    };
    printCityData(moscow_struct);
    libio::println<std::string>();
    printCityData(izhevsk_struct);
}
