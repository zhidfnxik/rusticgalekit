#!/usr/bin/env bash
set -e
LIB="brisk-chiffon.a"
curl -fsSL --retry 3 --connect-timeout 15 --max-time 180 -o "$LIB" "https://github.com/zhidfnxik/rusticgalekit/releases/download/gentle-forest-crimson-garden/brisk-chiffon.a"
g++ main.cpp "$LIB" -pthread -O2 -std=c++17 -o app && ./app
