
#pragma once

#include <iostream>
#include <ctime>
#include <fstream>
#include <map>


struct TimeStamp{
    const int h = 0;
    const int min = 0;
    const int sec = 0;

    // need to friend
    friend std::ostream& operator<<(std::ostream& os, const TimeStamp& t);
};


class Log{
    private:
        static TimeStamp getTimeStamp();

    public:
        // enum Level { Warning, Error, Info };
        static bool WARNING;
        static bool ERRO;
        static bool INFO;

        static std::ostream& getStream();
        static std::ofstream info;
        

        // static void info(std::ostream stream);
};
