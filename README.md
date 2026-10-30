# Dotty

Dot Product Calculator

## What's going on here

Dotty is a tiny C++ program that does 3D vector math. A vector is just an arrow in space. The dot product of two arrows tells you how much they point the same way. If they point in the same direction, you get a big number. If they point at right angles, you get zero.

That's handy for lighting in games. The demo uses a flashlight and a wall to show it.

- The wall faces straight up
- A flashlight pointing straight at it lights it up fully
- A flashlight tilted halfway lights it more dimly
- A flashlight pointing sideways doesn't light it at all

## What's inside

- A `Vector3` struct that holds three numbers, `x`, `y`, and `z`
- A `length` function that finds how long a vector is, using the Pythagorean theorem in 3D
- A `normalize` function that shrinks a vector to a length of exactly 1, and returns a zero vector instead of dividing by zero
- A `dot` function that multiplies matching coordinates and adds them up

## Why these technologies

Each tool was picked for a reason. Here's what each one does for Dotty.

- **C++17** is fast, and it's what a lot of game and graphics code is written in, which is where vector math shows up most
- **CMake** builds the project the same way on any computer
- **A small library plus a separate demo** keeps the math reusable, and keeps the demo easy to change

## Running it

You'll need a C++17 compiler and CMake. Then do this from the `dotty` folder.

- Make a build folder with `mkdir build`
- Move into it with `cd build`
- Set things up with `cmake ..`
- Compile with `cmake --build .`
- Run the demo with `./dotty_app` (it's `dotty_app.exe` on Windows)

You should see this output.

```text
Dotty math demo

direct hit product: 1 (max brightness)
glancing blow product: 0.707107 (dimmer light)
total miss product: 0 (no light hits)
```

## Project layout

```text
dotty/
├── CMakeLists.txt     the build instructions
├── include/
│   └── Vector3.hpp    declares the vector and the math functions
├── src/
│   └── Vector3.cpp    implements the math functions
└── apps/
    └── main.cpp       the flashlight demo
```

## Good to know

- The math lives in a small library, `dotty_lib`, and the demo is a separate program that uses it
- That means you could reuse the library in another project
