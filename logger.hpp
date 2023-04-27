
#pragma once
#include <iostream>
#include <ctime>


#define LOG_LEVEL Log::Level::Silent

class Log{
    
    public:
        enum Level { Silent = 0, Error, Warning, Info, Debug};

        static std::ostream& getStream() { return std::cout; }
        static bool IsLevelActive(Level l) {return LOG_LEVEL >= l ; }
        
};



#define LOG_DEBUG(msg) do {                                     \
    if (Log::IsLevelActive(Log::Debug))(                        \
        Log::getStream() << "[DEBUG] " << msg  <<  "\n"         \
    ); } while (false)


#define LOG_INFO(msg) do {                                      \
    if (Log::IsLevelActive(Log::Info))(                         \
        Log::getStream() << "[INFO] " << msg  <<  "\n"          \
    ); } while (false)


#define LOG_WARN(msg) do {                                      \
    if (Log::IsLevelActive(Log::Warning))(                      \
        Log::getStream() << "[WARNING] File: " << __FILE__ <<   \
        " line " << __LINE__ << "; "<< msg  <<  "\n"            \
    ); } while (false)

#define LOG_ERROR(msg) do {                                     \
    if (Log::IsLevelActive(Log::Error))(                        \
        Log::getStream() << "[ERROR] File: " << __FILE__ <<     \
        " line " << __LINE__ << "; "<< msg  <<  "\n"            \
    ); } while (false)



