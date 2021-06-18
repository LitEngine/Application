#pragma once

#include <SDL2/SDL_events.h>

namespace lit::application {

    class WindowListener {
    public:
        WindowListener() = default;

        virtual ~WindowListener() = default;

        virtual bool ProcessEvent(const SDL_Event &event) = 0;

        virtual void StartFrameEvent() = 0;

    protected:
        friend class Window;

        // It is guaranteed that m_sdl_window is not null for any ProcessEvent or StartFrameEvent call
        SDL_Window *m_sdl_window = nullptr;
    };

}
