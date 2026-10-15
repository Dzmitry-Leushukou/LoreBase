#include <cstdlib>
#include <string>

namespace envutils
{
    std::string get_env(const std::string& name, const std::string& fallback = "")
    {
        const char* value = std::getenv(name.c_str());
        return value? std::string(value) : fallback; 
    }
} 