#pragma once
#include <crow.h>

void setup_teste_routes(crow::SimpleApp& app) {
    CROW_ROUTE(app, "/api/teste")([] {
            return "<p class='text-gray-700'>Esse conteúdo veio da API.</p>";
            });

}

