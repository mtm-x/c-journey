#include <stdio.h>

int main() {
    // ==========================================
    // PART 1: SENDER (ENCODING)
    // ==========================================
    // We want to send 4 bits of data: 1 0 1 1
    // Positions in 7-bit array: _ _ d3 _ d5 d6 d7
    // Parity bits go in pos:    1 2 .. 4 .. .. ..
    
    int data[8]; // Using size 8 to ignore index 0 for clarity (1-7)
    
    // Hardcoded Data Bits
    data[3] = 1;
    data[5] = 0;
    data[6] = 1;
    data[7] = 1;

    // Calculate Parity Bits (XOR Logic)
    // P1 checks positions 1, 3, 5, 7
    data[1] = data[3] ^ data[5] ^ data[7];
    
    // P2 checks positions 2, 3, 6, 7
    data[2] = data[3] ^ data[6] ^ data[7];
    
    // P4 checks positions 4, 5, 6, 7
    data[4] = data[5] ^ data[6] ^ data[7];

    printf("Sent Codeword: ");
    for(int i=1; i<=7; i++) printf("%d", data[i]);
    printf("\n");

    // ==========================================
    // PART 2: NOISE (ERROR INJECTION)
    // ==========================================
    printf("\n--- Simulating Error ---\n");
    int error_pos = 5; // Let's pretend bit 5 gets flipped
    data[error_pos] = !data[error_pos]; 
    
    printf("Received Codeword (Bit %d flipped): ", error_pos);
    for(int i=1; i<=7; i++) printf("%d", data[i]);
    printf("\n");

    // ==========================================
    // PART 3: RECEIVER (DECODING & CORRECTION)
    // ==========================================
    
    // Calculate Syndrome bits (Check Parity again)
    // c1 checks 1, 3, 5, 7
    int c1 = data[1] ^ data[3] ^ data[5] ^ data[7];
    
    // c2 checks 2, 3, 6, 7
    int c2 = data[2] ^ data[3] ^ data[6] ^ data[7];
    
    // c3 checks 4, 5, 6, 7 (corresponds to P4)
    int c4 = data[4] ^ data[5] ^ data[6] ^ data[7];

    // Calculate the error position from syndrome bits
    // formula: c4*4 + c2*2 + c1*1
    int calculated_error_pos = (c4 * 4) + (c2 * 2) + (c1 * 1);

    printf("\n--- Correction ---\n");
    if (calculated_error_pos == 0) {
        printf("No Error detected.\n");
    } else {
        printf("Error detected at position: %d\n", calculated_error_pos);
        
        // Fix the error
        data[calculated_error_pos] = !data[calculated_error_pos];
        
        printf("Corrected Codeword: ");
        for(int i=1; i<=7; i++) printf("%d", data[i]);
        printf("\n");
    }

    return 0;
}