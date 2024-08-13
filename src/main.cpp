#include <iostream>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <fmt/core.h>
#include <string>

int main() {
    // Виконати GET-запит до публічного API
    cpr::Response r = cpr::Get(cpr::Url{"https://jsonplaceholder.typicode.com/todos/1"});

    // Вивести статус код відповіді
    std::cout << "Status Code: " << r.status_code << std::endl;

    // Парсити JSON відповідь
    nlohmann::json jsonResponse = nlohmann::json::parse(r.text);

    // Вивести певне поле з JSON відповіді
    std::cout << "Title: " << jsonResponse["title"] << std::endl;

    std::string str = jsonResponse["title"];
    fmt::print("{}\n", str);
    fmt::print("Program end!\n");

    return 0;
}