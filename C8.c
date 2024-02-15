#include <stdio.h>

struct Family {
    char fatherName[31];
    char motherName[31];
    int numberOfSiblings;
};

struct Student {
    char studentCode[31];
    char studentName[31];
    char studentGender[12];
    struct Family family;
};

struct Lecturer {
    char lecturerCode[31];
    char lecturerName[31];
    char lecturerGender[12];
    int numberOfStudents;
    struct Student students[101];  
};

int main() {
    int N, K;
    scanf("%d", &N);

    struct Lecturer lecturers[101];  

    for (int i = 0; i < N; ++i) {
        struct Lecturer *lecturer = &lecturers[i];
        scanf("%s %s %s %d", lecturer->lecturerCode, lecturer->lecturerName, lecturer->lecturerGender, &lecturer->numberOfStudents);

        for (int j = 0; j < lecturer->numberOfStudents; ++j) {
            struct Student *student = &lecturer->students[j];
            scanf("%s %s %s", student->studentCode, student->studentName, student->studentGender);
            scanf("%s %s %d", student->family.fatherName, student->family.motherName, &student->family.numberOfSiblings);
        }
    }

    scanf("%d", &K);

    printf("Kode Dosen: %s\n", lecturers[K - 1].lecturerCode);
    printf("Nama Dosen: %s\n", lecturers[K - 1].lecturerName);
    printf("Gender Dosen: %s\n", lecturers[K - 1].lecturerGender);
    printf("Jumlah Mahasiswa: %d\n", lecturers[K - 1].numberOfStudents);

    for (int i = 0; i < lecturers[K - 1].numberOfStudents; ++i) {
        struct Student *student = &lecturers[K - 1].students[i];
        printf("Kode Mahasiswa: %s\n", student->studentCode);
        printf("Nama Mahasiswa: %s\n", student->studentName);
        printf("Gender Mahasiswa: %s\n", student->studentGender);
        printf("Nama Ayah: %s\n", student->family.fatherName);
        printf("Nama Ibu: %s\n", student->family.motherName);
        printf("Jumlah Saudara Kandung: %d\n", student->family.numberOfSiblings);
    }

    return 0;
}
