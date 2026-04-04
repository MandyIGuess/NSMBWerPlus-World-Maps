#pragma once

namespace dWmLib {
    bool MakePointNameFromCourseNo(int worldNo, int courseNo, char *pointName);
    int GetCourseTypeFromCourseNo(int courseNo);
    void MakeKinokoHouseName(int courseNo, char *pointName);
};
