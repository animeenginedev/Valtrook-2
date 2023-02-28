#pragma once

#include <string>
#include <vector>

inline std::vector<std::string> split(
    const std::string& input,
    const std::string& delims)
{
    std::vector<std::string> ret;
    for (size_t start = 0, pos; ; start = pos + 1) {
        pos = input.find_first_of(delims, start);
        std::string token = input.substr(start, pos - start);
        if (token.length() > 0)  // ignore empty tokens
            ret.push_back(token);
        if (pos == std::string::npos) break;
    }
    return ret;
}