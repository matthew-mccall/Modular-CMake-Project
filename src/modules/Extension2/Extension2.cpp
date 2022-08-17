#include "Core/Core.hpp"

#include "Extension2.hpp"
    
namespace Extension2
{
    void Initialize()
    {
        Engine::Print("Initialized Extension2!");
    }

    void Deinitialize()
    {
        Engine::Print("Deinitalized Extension2!");
    }
} // namespace Extension
