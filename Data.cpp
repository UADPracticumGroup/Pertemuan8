#include "Data.h"
#include <iomanip>

DataKelulusan::DataKelulusan() {
    std::cout << " = = = = = = = PROGRAM MENCETAK DATA KELULUSAN = = = = = = = " << std::endl;
}

void DataKelulusan::Get() {
    std::cout << "Masukan 3 Jurusan yang diinginkan: " << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "Masukan nama jurusan ke-" << i + 1 << ": ";
        std::getline(std::cin, jurusan[i]);
    }

    std::cout << "Masukan banyak angkatan kelulusan: ";
    std::cin >> banyakLulusan;
}

void DataKelulusan::Out() {
    std::cout << std::endl;
    int Data[banyakLulusan][3];

    for (int i = 0; i < banyakLulusan; i++) {
        std::cout << "Angkatan ke: " << i + 1 << std::endl;

        for (int j = 0; j < 3; j++) {
            std::cout << std::setw(3) << jurusan[j] << " : ";
            std::cin >> Data[i][j];
        }
    }

    std::cout << std::endl;
    std::cout << "Tampil Data Lulusan: " << std::endl;
    std::cout << std::endl;
    std::cout << std::setw(10) << jurusan[0] << " " << jurusan[1] << " " << jurusan[2] << std::endl;

    for (int i = 0; i < banyakLulusan; i++) {
        std::cout << "Th Ke-" << i + 1 << " " << Data[i][0] << " " << Data[i][1] << " " << Data[i][2] << std::endl;
    }

    std::cout << std::endl;

    int count = 0;
    for (int i = 0; i < banyakLulusan; i++) {
        for (int j = 0; j < 3; j++) {
            count += Data[i][j];
        }
    }

    std::cout << "Banyak lulusan" << std::setw(12) << "= " << count << std::endl;

    int min = Data[0][0];
    int max = Data[0][0];
    int minIndex = 0;
    int maxIndex = 0;
    int minColumn = 0;
    int maxColumn = 0;

    for (int i = 0; i < banyakLulusan; i++) {
        for (int j = 0; j < 3; j++) {
            if (Data[i][j] < min) {
                min = Data[i][j];
                minIndex = i;
                minColumn = j;
            }
            if (Data[i][j] > max) {
                max = Data[i][j];
                maxIndex = i;
                maxColumn = j;
            }
        }
    }

    std::cout << "Lulusan terkecil" << std::setw(10) << " = " << min << " (Pada baris ke-" << minIndex + 1 << " dan kolom ke-" << minColumn + 1 << ")" << std::endl;
    std::cout << "Lulusan terbesar" << std::setw(10) << " = " << max << " (Pada baris ke-" << maxIndex + 1 << " dan kolom ke-" << maxColumn + 1 << ")" << std::endl;
    std::cout << "Rata-rata" << std::setw(17) << " = " << count / (banyakLulusan * 3) << std::endl;
}
