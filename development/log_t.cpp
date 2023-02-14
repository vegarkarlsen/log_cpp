
#include "log.h"


std::ostream& operator <<(std::ostream& os, const TimeStamp& t){
    os << t.h << ":" << t.min << ":" << t.sec;
    return os;
}


TimeStamp Log::getTimeStamp(){
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

    TimeStamp time{now->tm_hour, now->tm_min, now->tm_sec};
    return time;
}

// void Log::info(std::ostream stream){
//     if (!Log::INFO) { return; }

//     std::cout << Log::getTimeStamp() << " [INFO]: " << stream << std::endl;
// }






