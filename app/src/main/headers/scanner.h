#pragma once

#include <string>

namespace Lox {
    class Scanner {
        public:
            int scanLine(const std::string& input);
    };
}