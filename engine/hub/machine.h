#pragma once

#ifdef _WIN32 || _WIN64
    #ifndef WIN32_LEAN_AND_MEAN
        #define WIN32_LEAN_AND_MEAN
        #define BOOST_INTERPROCESS_WIN32_LEAN_AND_MEAN
    #endif   //#ifndef WIN32_LEAN_AND_MEAN
    #include <Windows.h>
#endif // _WIN32

#ifdef LINUX
    #if X11
        #include <X11/keysym.h>
        #include <stdio.h>
    #endif // X11
    #elif WAYLAND
        #include <wayland-client.h>
    #endif // WAYLAND
    #elif MIR
        #include <mir_toolkit/mir_client_library.h>
    #endif // MIR
#endif // LINUX

#ifdef _APPLE_
    #include <OSServices/OSServices.h>
    #include <Cocoa/Cocoa.h>
#endif // _APPLE_

#ifdef _VULKAN
    #include <vulkan/vulkan.h>
    #elif
    #include <gl.glarbcore.h>
    #endif
#endif
