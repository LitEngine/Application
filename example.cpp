#include <lit/application/application.hpp>
#include <spdlog/spdlog.h>

using namespace lit::application;

int main(int, char **) {
    auto logger = spdlog::default_logger();
    Application app(logger);
    app.Init();

    WindowInfo game_window;
    game_window.title = "Test window";
    game_window.maximized = false;
    game_window.width = 1280;
    game_window.height = 720;

    app.CreateWindow(game_window, {}, {});

    while (app.AnyWindowAlive()) {
        app.PollEvents();
        app.Redraw();
    }

    return 0;
}