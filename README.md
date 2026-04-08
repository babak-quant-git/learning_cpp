# learning_cpp

A personal C++ learning repository focused on fundamentals, clean builds, and engineering discipline.

## Purpose

This repository is used to study modern C++ fundamentals:
- types and initialization
- scope and lifetime
- functions
- references and `const`
- build discipline with CMake and Ninja
- compiler warnings and static analysis

## Repository structure

- `src/main.cpp` — scratchpad for small temporary experiments
- `exercises/` — saved standalone exercises
- `CMakeLists.txt` — build configuration
- `.clang-format` — formatting rules
- `.clang-tidy` — static analysis rules
- `.gitignore` — ignored build artifacts and editor/system files

## Build

```bash
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
cmake --build build
```

## Run

Scratch target:

```bash
./build/hft_engine
```

Saved exercise example:

```bash
./build/types_and_addresses
```

## Notes

The project uses strict compiler warnings and treats warnings as errors.

Code that does not compile cleanly is considered unfinished.
