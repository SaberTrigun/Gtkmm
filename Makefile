COMPILE=g++
g++ main.cpp `pkg-config gtkmm-3.0 --cflags --libs`
