#include <stdio.h>
#include <stdint.h>

uint64_t setBit(uint64_t mask, unsigned bit);

uint64_t clearBit(uint64_t mask, unsigned bit);

int checkBit(uint64_t mask, unsigned bit);

uint64_t invertBit(uint64_t mask, unsigned bit);

void printBits(uint64_t mask);

int main(){

uint64_t attendance = 0ll;
    int option;
    while (1)
    {
        printf("1. Set attendance\n");
        printf("2. Clear attendance\n");
        printf("3. Attendance info\n");
        printf("4. Change attendance\n");
        printf("5. Exit\n");
        scanf("%d", &option);
        if (option == 1)
        {   
            for (int i = 0; i < 64; i++)
            {
                int attendanceNumber;
                printf("Student %d: ", i+1);
                scanf("%3d", &attendanceNumber);
                if(attendanceNumber==1){
                attendance = setBit(attendance, i);
                }
                else{
                attendance = clearBit(attendance, i);   
                }
            }
        }
        else if (option == 2)
        {
            int studentNumber;
            printf("Enter student number: ");
            scanf("%3d", &studentNumber);
            attendance = clearBit(attendance, studentNumber);
        }
        else if (option == 3)
        {
           printBits(attendance);
        }
        else if (option == 4)
        {
            int studentNumber, attendanceNumber;
            printf("Student number: ");
            scanf("%3d", &studentNumber);
            printf("Student attendance: ");
            scanf("%3d", &attendanceNumber);
            if(attendanceNumber==1){
            attendance = setBit(attendance, attendanceNumber);
            }
            else{
            attendance = clearBit(attendance, attendanceNumber);   
            }
        }        
    }
    return 0;
}

uint64_t setBit(uint64_t mask, unsigned bit){
    return mask | (1 << bit);
}


uint64_t clearBit(uint64_t mask, unsigned bit){
    return mask & ~(1 << bit);
}

int checkBit(uint64_t mask, unsigned bit){
    return (mask & (1 << bit)) ? 1 : 0;
}


uint64_t invertBit(uint64_t mask, unsigned bit){
    return mask ^ (1 << bit);
}

void printBits(uint64_t mask){
    
    
    for (int i = sizeof(uint64_t)*8 - 1; i >= 0; i--){
        printf("%3d ", checkBit(mask, i));
    }
    putchar('\n');
    putchar('\n');
}