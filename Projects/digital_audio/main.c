#include <stdio.h>
#include <math.h>
#include <stdint.h>

#define PI 3.14159

// typedef signed int int32_t;
// typedef unsigned int uint32_t;   these arent portable so using stdint.h
// typedef signed short int16_t;

int main(){

    float samples_per_second = 44100;
    uint32_t duration = 2;
    int16_t max_sample_encoding = 32767;
    uint32_t sine_freq;
    float amplitude;

    printf("Enter Tone Frequency ( eg : 440 ): ");
    scanf("%d", &sine_freq);

    printf("Enter the duration of the Audio file: ");
    scanf("%d", &duration);

    printf("Enter the Amplitude ( volume level 0 to 1 ): ");
    scanf("%f", &amplitude);

    if (amplitude < 0.0f ) amplitude = 0.0f;    
    if (amplitude > 1.0f ) amplitude = 1.0f;

    uint32_t counter = 0;
    uint32_t total_samples = samples_per_second * duration;
    float time = 0;
    float angle;
    int16_t sample;
    int16_t peak_amplitude = max_sample_encoding * amplitude;

    FILE *f;
    f = fopen("sine_output.raw", "wb");

    if ( f == NULL ){
        printf("[ERROR] The file not opened");
        return -1;
    }

    while (counter < total_samples){

        time = counter * (1 / samples_per_second);
        angle = 2 * PI * sine_freq * time;
        counter = counter + 1;

        sample = peak_amplitude * sin(angle);

        fwrite(&sample, 2, 1, f); // takes the reference of the varible, number of bytes (sample is type short), how many such 2 bytes of chunks u want to write it in the file f, file pointer

    }

    fclose(f);
    return 0;
}