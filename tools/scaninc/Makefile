CXX = g++

CXXFLAGS = -Wall -Werror -std=c++11 -O2 -s

SRCS = scaninc.cpp c_file.cpp asm_file.cpp

HEADERS := scaninc.h asm_file.h c_file.h

.PHONY: clean

scaninc: $(SRCS) $(HEADERS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@ $(LDFLAGS)

clean:
	$(RM) scaninc scaninc.exe
