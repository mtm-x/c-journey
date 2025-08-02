#include <stdio.h>

typedef enum{

    LOG_INPUT,
    LOG_OUTPUT,
    LOG_INFO,
    LOG_DEBUG,
    LOG_ERROR

} logging;


// Helper logger function
void logger(char *message,  logging log_level){
    switch (log_level){
        case LOG_INFO:
            printf("[INFO] %s \n", message);
            break;
        
        case LOG_DEBUG:
            printf("[DEBUG] %s \n", message);
            break;

        case LOG_ERROR:
            printf("[ERROR] %s \n", message);
            break;

        case LOG_INPUT:
            printf("[INPUT] %s ", message);
            break;
        
        case LOG_OUTPUT:
            printf("[OUTPUT] %s \n", message);
            break;
            
    }
}