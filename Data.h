#pragma once
#include <iostream>
#include <vector>

class DataKelulusan {
    public:
        DataKelulusan();

        void Get();
        void Out();

    private:
        std::string jurusan[3];
        int banyakLulusan = 0;
};
