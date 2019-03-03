# Main source file to be built
0

# qmake c++14 flags addition, NOTE: warnings here are errors in building
QMAKE_CXXFLAGS += -Wall -Wextra -Weffc++ -Werror

# C++14 (May be for C++17)
QMAKE_CXX = clang++
QMAKE_LINK = clang++
QMAKE_CC = clang
QMAKE_CXXFLAGS += -std=c++14 -stdlib=libc++
QMAKE_LFLAGS += -stdlib=libc++
