#include <crow.h>
#include "routes/hello.h"
#include "routes/teste.h"

int main() {
	crow::SimpleApp app;

	setup_hello_routes(app);
	setup_teste_routes(app);

	app.port(18080).multithreaded().run();
}

