#include <string>

namespace log_line {
std::string message(std::string line) {
    // return the message
    int pos = line.find(": ");
    std::string result = line.substr(pos + 2);
    return result;
}

std::string log_level(std::string line) {
    // return the log level
    std::string result = line.substr(1, line.find("]") - 1);
    return result;
}

std::string reformat(std::string line) {
    // return the reformatted message
    return message(line) + " (" + log_level(line) + ")";
}
}  // namespace log_line
