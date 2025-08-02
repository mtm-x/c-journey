#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef enum {

    TEMPERATURE = 1,
    HUMIDITY,
    PRESSURE

} SensorType;

typedef enum {

    ACTIVE,
    INACTIVE,
    ERROR

} SensorStatus;

typedef enum{

    LOG_INPUT,
    LOG_OUTPUT,
    LOG_INFO,
    LOG_DEBUG,
    LOG_ERROR

} logging;

typedef union {
    struct __attribute__((packed)) {

        int16_t min_range;
        int16_t max_range;
        float reading;

    } Temperature;

    struct __attribute__((packed)) {

        float caliberation;
        float reading;

    } Humidity;

    struct __attribute__((packed)) {

        int16_t altitude;
        float reading;

    } Pressure;
} SensorData;

typedef struct __attribute__((packed)){

    uint8_t id;
    char name[20];
    SensorData data;
    SensorStatus status;
    SensorType type;
    
} Sensor;

// Function prototypes from other files
void logger(char *message,  logging log_level); // from logger.c

// Main entry point
int main(){

    Sensor sensor_list[2] = {0};
    uint8_t sensor_count = 0;
    uint8_t init_sensor = 0;
    uint8_t stype;
    
    while (1){
        
        if (sensor_count >= 2) 
        {
            logger("Sensor count >= 10", LOG_ERROR);
            break;
        }

        logger("Enter Sensor ID: ", LOG_INPUT);
        scanf("%hhu", &sensor_list[sensor_count].id);
        scanf("*c");

        logger("Enter Sensor Name (20 Characters): ", LOG_INPUT);
        scanf("%s", (char *)&sensor_list[sensor_count].name); // scanf("%s", sensor_list[sensor_count].name); this is correct because %s expects address and emp_sensor.name is holding address of the first char so no need of & again
        scanf("*c");

        logger("1 - TEMPERATURE \n 2 - HUMIDITY \n 3 - PRESSURE \n Choose the type of sensor (1,2,3): ", LOG_INPUT);
        scanf("%hhu", &stype);

        switch (stype)
        {
            case 1:
                sensor_list[sensor_count].type = TEMPERATURE;
                break;
            
            case 2:
                sensor_list[sensor_count].type = HUMIDITY;
                break;

            case 3:
                sensor_list[sensor_count].type = PRESSURE;
                break;

            default:
                logger("Enter valid type of sensor", LOG_ERROR);
                // implement retry logic
                break;
        }

        sensor_list[sensor_count].status = INACTIVE;

        switch (sensor_list[sensor_count].type)
        {
            case TEMPERATURE:

                logger("Enter Minimum range of Temperature: ", LOG_INPUT);
                scanf("%hd", &sensor_list[sensor_count].data.Temperature.min_range);
                scanf("*c");

                logger("Enter Maximum range of Temperature: ", LOG_INPUT);
                scanf("%hd", &sensor_list[sensor_count].data.Temperature.max_range);
                scanf("*c");

                logger("Enter Readings range of Temperature: ", LOG_INPUT);
                scanf("%f", &sensor_list[sensor_count].data.Temperature.reading);
                scanf("*c");

            break;
            
            case HUMIDITY:

                logger("Enter Caliberation of Temperature: ", LOG_INPUT);
                scanf("%f", &sensor_list[sensor_count].data.Humidity.caliberation);
                scanf("*c");

                logger("Enter Readings range of Humiditiy: ", LOG_INPUT);
                scanf("%f", &sensor_list[sensor_count].data.Humidity.reading);
                scanf("*c");

            break;

            case PRESSURE:

                logger("Enter Caliberation of Pressure: ", LOG_INPUT);
                scanf("%hd", &sensor_list[sensor_count].data.Pressure.altitude);
                scanf("*c");

                logger("Enter Readings range of Pressure: ", LOG_INPUT);
                scanf("%f", &sensor_list[sensor_count].data.Pressure.reading);
                scanf("*c");

            break;
            
            default:
                break;
        }

        
        logger("Press 1 to add sensor or 0 to skip: ", LOG_INPUT);
        scanf("%hhu", &init_sensor); // hhu - unsigned char
        scanf("*c"); // consume a leftover newline character (\n) that remains in the input buffer after a previous scanf call

        if (init_sensor == 0) {
            logger("Skiping", LOG_INFO);
            break;
        }

        sensor_list[sensor_count].status = ACTIVE;
        sensor_count = sensor_count + 1;
    }

    FILE *fptr;
    fptr = fopen("Sensor_out.txt", "w");

    for ( int i = 0; i < sensor_count; i++){

        fprintf(fptr, "[DEBUG] ID: %d \n", sensor_list[i].id);
        fprintf(fptr, "[DEBUG] Name: %s \n", sensor_list[i].name);
        fprintf(fptr, "[DEBUG] Type: %u \n", sensor_list[i].type);
        
    }

    fclose(fptr);
    return 0;
}
