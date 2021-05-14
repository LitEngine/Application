# Application

Allows you to easily create and work with SDL2 application.

```cpp
#include <дше/application/application.hpp>

using namespace lit::application;

int main(int argc, char ** argv) {
    Application app;
    app.Init();

    WindowInfo game_window;
    game_window.title = "Test window";
    game_window.maximized = false;
    game_window.width = 1280;
    game_window.height = 720;

    // Implement and instantiate WindowRenderer and WindowListener classes here
    
    app.CreateWindow(game_window, {/*list of renderers*/}, {/*list of event listeners*/});

    while(app.AnyWindowAlive()) {
        app.PollEvents();
        app.Redraw();
    }

    return 0;
}
```