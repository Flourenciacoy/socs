#include <stdio.h>

struct Student {
    char name[101];
    long int nim;
    int age;
    int postalCode;
    char placeOfBirth[101];
    char dateOfBirth[101];
    char highSchool[101];
    int numberOfSiblings;
    int height;
    long int bankAccountNumber;
};

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i) {
        struct Student student;

        scanf("%s %ld %d %d %s %s %[^\n] %d %d %ld",
              student.name, &student.nim, &student.age,
              &student.postalCode, student.placeOfBirth,
              student.dateOfBirth, student.highSchool,
              &student.numberOfSiblings, &student.height,
              &student.bankAccountNumber);

        printf("Mahasiswa ke-%d:\n", i);
        printf("Nama: %s\n", student.name);
        printf("NIM: %ld\n", student.nim);
        printf("Umur: %d\n", student.age);
        printf("Kode Pos: %d\n", student.postalCode);
        printf("Tempat Lahir: %s\n", student.placeOfBirth);
        printf("Tanggal Lahir: %s\n", student.dateOfBirth);
        printf("Almamater SMA: %s\n", student.highSchool);
        printf("Jumlah Saudara Kandung: %d\n", student.numberOfSiblings);
        printf("Tinggi Badan: %d\n", student.height);
        printf("NOMOR REKENING: %ld\n", student.bankAccountNumber);
    }

    return 0;
}
