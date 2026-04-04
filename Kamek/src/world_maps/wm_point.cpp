#include <game.h>
#include <dWmLib.h>

/*void getNormalCourseNumber(int level, char *lvlNo) {
    //OSReport("level %02d\n", level);
    lvlNo[0] = level & 0xF0;
    lvlNo[1] = level & 0xF;

    //OSReport("buf 1: %i_%i_%i_%i\n", buffer[0], buffer[1], buffer[2], buffer[3]);

    //OSReport("1: %d, %d\n", lvlHi, lvlLo);
    if (lvlNo[1] >= 9) {
        lvlNo[1] -= 9;
        lvlNo[0]++;
    }
    if (lvlNo[0] >= 9) {
        lvlNo[0] -= 9;
    }
    //OSReport("2: %d, %d\n", lvlHi, lvlLo);
    //buffer[2] = lvlHi + '0';
    //buffer[3] = lvlLo + '0';
    lvlNo[0] += '0';
    lvlNo[1] += '0';

    //OSReport("buf 2: %i_%i_%i_%i\n", buffer[0], buffer[1], buffer[2], buffer[3]);
    //OSReport("buf2s: %s\n", buffer);
}*/

bool dWmLib::MakePointNameFromCourseNo(int worldNo, int courseNo, char *pointName) {
    pointName[0] = 'W';

    if (worldNo == 9) {
        pointName[1] = 'A';
    } else {
        pointName[1] = worldNo + '1';
    }

    int courseType = dWmLib::GetCourseTypeFromCourseNo(courseNo);
    char level = courseNo;
    switch (courseType) {
        default:
            return false;
        case 0:
            pointName[2] = level & 0xF0;
            pointName[3] = level & 0xF;

            if (pointName[3] >= 9) {
                pointName[3] -= 9;
                pointName[2]++;
            }
            if (pointName[2] >= 9) {
                pointName[2] -= 9;
            }

            pointName[2] += '0';
            pointName[3] += '0';
            break;
        // These next ones add a certain amount to
        // the level ID to obtain a char value of '0'
        case 1:
            pointName[2] = 'G';
            pointName[3] = level + 28;
        case 2:
            pointName[2] = 'T';
            pointName[3] = level + 27;
            break;
        case 3:
            pointName[2] = 'C';
            pointName[3] = level + 25;
            break;
        case 4:
            dWmLib::MakeKinokoHouseName(level, pointName);
            break;
        case 5:
            pointName[2] = 'E';
            pointName[3] = level + 16;
            break;
        case 6:
            pointName[2] = 'W';
            pointName[3] = level + 13;
            break;
        case 8:
            pointName[2] = 'A';
            pointName[3] = level + 11;
            break;
        case 9:
            pointName[2] = 'S';
            pointName[3] = level + 10;
            break;
        case 10:
            pointName[2] = 'X';
            pointName[3] = '0';
            break;
    }

    pointName[4] = '\0';
    return true;
}
