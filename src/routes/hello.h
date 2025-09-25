#pragma once
#include <crow.h>

void setup_hello_routes(crow::SimpleApp& app) {
    CROW_ROUTE(app, "/api/hello")([] {
            return "Salve, mundo!";
            });

    CROW_ROUTE(app, "/api/json")([] {
            crow::json::wvalue res;
            res["linguagem"] = "C++";
            res["framework"] = "Crow";
            return res;
            });
}
