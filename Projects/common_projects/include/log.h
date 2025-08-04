#ifndef LOG_H
#define LOG_H

typedef enum{

    LOG_INPUT,
    LOG_OUTPUT,
    LOG_INFO,
    LOG_DEBUG,
    LOG_ERROR

} logging;
    
void logger(char *message,  logging log_level);

#endif 