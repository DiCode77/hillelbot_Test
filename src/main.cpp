#include <iostream>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <fmt/core.h>
#include <string>

int main() {
    // Виконати GET-запит до публічного API
    cpr::Response r = cpr::Get(cpr::Url{"https://raw.githubusercontent.com/DiCode77/hillelbot_Test/main/MyRequest.json"});

    // Вивести статус код відповіді
    std::cout << "Status Code: " << r.status_code << std::endl;

    // Парсити JSON відповідь
    nlohmann::json jsonResponse = nlohmann::json::parse(r.text);

    // Вивести певне поле з JSON відповіді

    fmt::print("{}\n", jsonResponse["title"].get<std::string>());
    fmt::print("Program end!\n");

    return 0;
}