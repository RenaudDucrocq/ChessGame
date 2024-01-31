# CHESSGAME

TODO: Add project description

## 1. Configuration

To compile this project, ensure that you have the following requirements:

- `MinGW-w64` SEH / MSVCRT (not **SJLJ** or **UCRT** !!) v13.1.0 or higher
- `Cmake` version 3.21 or higher

First, you need to configure the cmake project using either your terminal or your IDE. But most importantly you need to set the following variable:
`-DSFML_ROOT=<the absolute path to the SFML library folder>`.
For example in vscode, you can add the following in `.vscode/settings.json`:

```json
{
    "cmake.configureArgs": 
    [
        "-DSFML_ROOT=${workspaceFolder}/libraries/SFML-2.6.1"
    ]
}
```

Or in CLion, you can add this option [following these instructions](https://www.jetbrains.com/help/clion/cmake-profile.html#cmake-options).

Then, simply build the `main` target and the executable is ready to be launched.