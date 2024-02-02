# "99 Bottles of Beer" kata in C++

[![CI](https://github.com/Coding-Cuddles/99-bottles-of-beer-cpp-kata/actions/workflows/main.yml/badge.svg)](https://github.com/Coding-Cuddles/99-bottles-of-beer-cpp-kata/actions/workflows/main.yml)
[![Replit](https://img.shields.io/badge/Try%20with%20Replit-black?logo=replit)](https://replit.com/new/github/Coding-Cuddles/99-bottles-of-beer-cpp-kata)

## Overview

This kata complements [Clean Code: Advanced TDD, Ep. 24](https://cleancoders.com/episode/clean-code-episode-24-p1).

This repository contains an exercise to construct the entire
[99 Bottles of Beer](http://en.wikipedia.org/wiki/99_Bottles_of_Beer) song
using TDD.

### Exercise

Complete the `Bottles::song()` method that returns the lyrics for the song
"99 Bottles of Beer" as an **array of strings** where each string represents
a line of the song:

> 99 bottles of beer on the wall, 99 bottles of beer.</br>
> Take one down and pass it around, 98 bottles of beer on the wall.
> 
> 98 bottles of beer on the wall, 98 bottles of beer.</br>
> Take one down and pass it around, 97 bottles of beer on the wall.
> 
> ...
> 
> 3 bottles of beer on the wall, 3 bottles of beer.</br>
> Take one down and pass it around, 2 bottles of beer on the wall.
> 
> 2 bottles of beer on the wall, 2 bottles of beer.</br>
> Take one down and pass it around, 1 bottle of beer on the wall.
> 
> 1 bottle of beer on the wall, 1 bottle of beer.</br>
> Take one down and pass it around, no more bottles of beer on the wall.
> 
> No more bottles of beer on the wall, no more bottles of beer.</br>
> Go to the store and buy some more, 99 bottles of beer on the wall.
 
## Usage

You can import this project into [Replit](https://replit.com), and it will
handle all dependencies automatically.

### Prerequisites

* [CMake 3.19+](https://cmake.org)
* [Ninja](https://ninja-build.org)
* [GTest](https://github.com/google/googletest)

### Build

```console
make build
```

### Run main

```console
make run
```

### Run tests

```console
make test
```
