#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

int isCircularPrime(int num) {
    int temp = num;
    int digitCount = 0;
    
    while (temp != 0) {
        digitCount++;
        temp /= 10;
    }

    int factor = 1;
    for (int i = 0; i < digitCount - 1; i++) {
        factor *= 10;
    }

    int rotatedNum = num;
    do {
        if (!isPrime(rotatedNum)) {
            return 0;
        }
        int rightmostDigit = rotatedNum % 10;
        int remainingDigits = rotatedNum / 10;
        rotatedNum = rightmostDigit * factor + remainingDigits;
    } while (rotatedNum != num);

    return 1;
}

int main() {
    int num;
    scanf("%d", &num);

    if (isCircularPrime(num)) {
        printf("circular prime
");
    } else if (isPrime(num)) {
        printf("prime but not a circular prime
");
    } else {
        printf("not prime
");
    }

    return 0;
}
