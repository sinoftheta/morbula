# Morbula
A barebones 2d game/collision engine for personal project(s). Mostly focused around creating interesting 2d platformer movement and co-op/versus gameplay mechanics.
(It's prronounced morb-you-la, like morbid and nebula)

Made referencing the [Lazy Foo SDL tutorial](https://lazyfoo.net/tutorials/SDL/index.php).

## Project Goals
- Make the physics engine abstract enough that 3d assets can eventually be used, perhaps with another rendering engine alltogether
- Keep the game state sufficently sepeprated from the rendering logic to allow for rollback netcode via [ggpo](https://github.com/pond3r/ggpo)

## Code Improvements
- Create a makefile
- Use namespaces in some more places
- Probably many misspellings of "collision"

## Toolchain
- [MinGW via MSYS2](https://www.msys2.org/) 

## Dependencies
- [SDL2](https://packages.msys2.org/base/mingw-w64-SDL2)
- [SDL2_image](https://packages.msys2.org/base/mingw-w64-SDL2_image)
- [SDL2_ttf](https://packages.msys2.org/base/mingw-w64-SDL2_ttf)
- [glm](https://packages.msys2.org/base/mingw-w64-cglm)
- [gca+](https://github.com/YonicDev/gca-plus)
- [libusb](https://packages.msys2.org/package/mingw-w64-x86_64-libusb)

## Build It
```bash
g++ ./lib/gca-plus/*.cpp -lusb-1.0 ./src/*.cpp -IC:\msys64\mingw32\include\SDL2 -LC:\msys64\mingw32\lib -w -Wl,-subsystem,windows -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -o ./bin/game
```
* you may have to replace "-IC:\msys64\mingw32\include\SDL2" and "-LC:\msys64\mingw32\lib" with your own install directories if you chose something other than the default
* libraries "-l*" are places directly after the source files that use them
* find the name of a library in its package config file, which is located in ```[mysis64-install-location]\mingw64\lib\pkgconfig\[libary name].pc```




