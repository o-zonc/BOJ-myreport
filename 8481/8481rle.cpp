#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ofstream fout("rle8.txt");

    string code = "dcddcdcddcdcdcddcdcdcdcdcdcdcdcdcdcdcdccdcdcdccdccdcdccdccdcccdcccdcccdcccdcccccdccccccccccccccccccccccccccccccccbcccccccccccbccccccccbcccccccbcccccccbcccccccbcccccccbcccccccbcccccccbccccccbccccccbcccccbccccbccccbcccbcccbcccbccbcccbccbccbccbcbccbcbccbcbcbccbcbcbcbcbcbcbcbbcbcbcbcbbcbcbbcbbcbcbbcbbcbbcbbcbbbcbbcbbbcbbbcbbbcbbbcbbbcbbbbcbbbbcbbbbcbbbbcbbbbbcbbbbcbbbbbcbbbbbcbbbbbbcbbbbbcbbbbbcbbbbbbcbbbbbcbbbbbbcbbbbbcbbbbbcbbbbbbcbbbbbcbbbbbbcbbbbbbcbbbbbbcbbbbbbbcbbbbbbbbbcbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbabbbbbbabbbbbabbbbabbbbabbbbabbbabbabbbabbbabbabbabbabbabbabbabbabbababbabbababbababbababbabababbabababbabababbabababbabababbabababbabababbababababbabababbabababbababababbabababababbababababababababababababababababaababaababaababaabaabaabaabaaabaaabaaabaaaaabaaaaaaaaaaaaaaaaaaaaahaaaaaaaahaaaaaahaaaahaaahaaahaaahaaahaaahaahaahaaahaahaahaaahaahaahaahaahaahaahaaahaahaahaahaahaahaahaaahaahaahaahaahaahaahaahaahahaahaahahaahaahahahaahahahaahahahahahahahahahahahahhahahahhahahhahhahhahhahhahhahhahhhahhahhhahhhhahhhahhhhhahhhhahhhhhhahhhhhhahhhhhhhhhahhhhhhhhhhhahhhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhghhhhhhhhhhhhhhhhghhhhhhhhhghhhhhhghhhhhhghhhhghhhhghhhghhhhghhghhhghhghhhghhghhghhghghhghhghghhghghghhghghghghghghghghghghghghghghghghgghghghghgghghghgghghghgghghgghghghgghghgghghgghghghgghghgghghghgghghgghghgghghgghghghgghgghghgghghgghgghgghgghgghgghgghggghgghggghgggghgggghggggggggggggggggggggggggfgggggggfggggfgggfgggfgggfggfggfggfggfggfgfggfgfggfgfggfgfgfgfggfgfgfgfgfggfgfgfgfgfgfgfgfgfgfgfggfgfgfgfgfgfgfgfgfgfgfgfgfgfggfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgffgfgfgfgffgfgfgffgfgffgfgffgfgffgffgffgffgffgfffgffgfffgfffgffffgffffgffffgfffffgfffffffgffffffffffgfffffffffffffffffffffffffffffffffffffffffffffffeffffffffffffffefffffffffffefffffffffffeffffffffffefffffffffffeffffffffffefffffffffffefffffffffefffffffffefffffffffefffffffeffffffefffffefffffeffffeffffeffffefffefffefffeffeffefffeffefeffeffeffefeffefefefeffefefefefefefefeefefefeefefeefefeefeefeefeefeefeefeeefeefeeefeeefeefeeefeeeefeeefeeefeeefeeefeeefeeeefeeefeeefeeefeeefeeeefeeefeeefeeeefeeefeeeefeeeeefeeeeefeeeeeeeeeeeeeeeeeeeeeeeeeeeeeedeeeeeedeeeedeeedeeedeedeedeedeedeededeedededeedededededededededededdededededdededdededdededdededdededdeddededdededdeddeddededdeddededdeddededdeddededdeddeddededdeddededdeddeddededdeddeddeddeddeddeddeddeddeddeddedddeddedddedddedddeddddeddddeddddedddddedddddddedddddddddeddddddddddddddddddddddddddddddddddddcddddddddddcdddddddcddddddcddddddcddddcdddddcddddcddddcddddcddddcddddcddddcdddcddddcddddcddddcdddcddddcddddcddddcdddcddddcddddcdddcddddcdddcddddcdddcdddcdddcdddcdddcdddcddcdddcddcddcdddcdcddcddcddcdcddcddcdcdcdcddcdcdcdcdcdcdcdcdccdcdcdccdccdcdccdcccdccdcccdcccdcccdcccccdcccccdcccccccccdccccccccccccccccdccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccbccccccccccbccccccbccccbcccbcccbcccbccbccbccbccbcbccbcbccbcbcbcbcbcbcbcbcbcbcbbcbcbbcbcbbcbcbbcbbcbbcbbcbbcbbcbbcbbcbbbcbbcbbbcbbbcbbbcbbbcbbcbbbbcbbbcbbbcbbbcbbbcbbbcbbbbcbbbcbbbcbbbcbbbcbbbbcbbbcbbbcbbbcbbbcbbbcbbbbcbbbcbbbcbbbbcbbbbcbbbcbbbbcbbbbbcbbbbcbbbbbbcbbbbbbcbbbbbbbbcbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbabbbbbbbbabbbbbabbbbbabbbbabbbbabbbabbbabbbabbbabbabbbabbabbabbbabbabbabbabbabbabbabbabbabbabbabbabbabbabbababbabbabbabbabbabbabbabbabbabbabbabbababbabbabbabbabbababbabbabbababbababbababbabababbababababababababababababaabababaabaabaabaabaabaaabaaabaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahaaaaaaahaaaaahaaaaahaaaaahaaaahaaaahaaaahaaaahaaaahaaaahaaaahaaaaahaaaahaaaahaaaahaaaahaaahaaahaaaahaaahaahaaahaahaahaahaahaahahaahahaahahahahaahahahahhahahahahahhahahhahhahahhahhahhhahhahhahhhahhhahhhahhhhahhhahhhhhahhhhahhhhhahhhhhhahhhhhhahhhhhhhahhhhhhhhahhhhhhhahhhhhhhhahhhhhhhhahhhhhhhhahhhhhhhhahhhhhhhahhhhhhhhahhhhhhhhahhhhhhhhhahhhhhhhhhhahhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhghhhhhhhhhhhghhhhhhhghhhhhhghhhhghhhhghhhghhhhghhghhhghhghhghhghhghhghhghhghghhghghhghghhghghghhghghghghghhghghghghghghghghghghhghghghghghghghghghghghghghghghghhghghghghghghghghghghghghghghghghghghghghghghghghgghghghgghghghgghgghghgghgghgghggghggghggghggggghggggggggggggggggfgggggggggfgggggfggggfgggfgggfgggfggfggfggfggfggfggfggfggfgfggfggfgfggfggfgfggfggfgfggfgfggfggfgfggfggfgfggfggfgfggfggfgfggfgfggfggfgfggfgfgfggfgfgfggfgfgfgfgfggfgfgfgfgffgfgfgfgfgffgfgffgfgffgffgffgffgffgffgfffgfffgfffgfffgffffgfffffgfffffgfffffffgffffffffffgfffffffffffffffffffffgfffffffffffffffffffffffffffffffffffffffeffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffefffffffffffffffeffffffffffefffffffefffffefffffeffffefffefffefffefffeffeffeffeffeffeffefeffefefeffefefefefefefefefefefefefeefefefeefefeefefeefefeefeefeefefeefeefeefeefefeefeefeefeefefeefeefeefeefefeefeefeefeefefeefeefeefeefeefeefeefeefeeefeefeeefeeefeeeefeeeefeeeeeeeeeeeeeeeeeeeeeeeedeeeeeedeeeedeeedeeedeedeedeedeedeededeedededeedededededededeedededdededededededededededdededededededdededededededdedededededededdedededededededdedededededdededededdedededdededdededdededdeddeddeddeddeddeddedddeddedddeddddedddedddddedddddedddddddeddddddddddddedddddddddddddddddddddddddcddddddddddddddcddddddddddcddddddddcdddddddcddddddcdddddddcdddddddcddddddcdddddddcdddddddcddddddcdddddddcdddddddcddddddcddddddcddddddcdddddcdddddcddddcddddcddddcdddcdddcdddcdddcddcddcddcddcddcddcdcddcdcddcdcdcdcdcdcdcdcdcdcdcdccdcdccdccdcdccdccdcccdccdcccdcccdcccdccccdccccdccccdcccccdcccccdcccccdcccccdcccccdcccccdcccccdcccccdccccdcccccdccccccdccccccdcccccccccccccccccccccccccbccccccccbcccccbcccbcccbccbccbccbccbccbcbcbccbcbcbcbcbcbcbcbcbcbcbbcbcbcbbcbcbbcbcbbcbbcbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbbcbbcbbcbbcbbcbbcbbcbbbcbbcbbcbbbcbbcbbbcbbbcbbbcbbbcbbbbcbbbbcbbbbbcbbbbbcbbbbbbbbcbbbbbbbbbbbbbbbcbbbbbbbbbbabbbbbbbbbbbbbbbabbbbbbbbabbbbbbabbbbbabbbbabbbbabbbbabbbbabbbabbbabbbabbbabbbabbbabbbabbbabbbabbbabbbabbabbbabbbabbbabbbabbbabbbabbbabbbabbbabbbabbbabbabbbabbbabbabbbabbabbbabbabbabbabbabbabbabbababbababbababababbabababababaabababaababaabaabaabaabaaabaaabaaaabaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaahaaaaaaaaaaaaaaaaahaaaaaaaaaaaaaaahaaaaaaaaaaaaaaaaaahaaaaaaaaaaaaahaaaaaaaahaaaaaahaaaahaaaahaaahaaahaahaahaahaahahaahahahahaahahahahahhahahahahhahahhahhahhahahhhahhahhahhahhhahhhahhhahhhahhhahhhhahhhahhhhahhhhahhhhahhhhahhhhhahhhhahhhhahhhhahhhhahhhhhahhhhahhhhahhhhahhhhahhhhahhhhahhhhahhhhhahhhhahhhhhahhhhhhahhhhhhahhhhhhhahhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhghhhhhhhhhhghhhhhhhghhhhhghhhhghhhhghhhghhhghhhghhghhhghhghhghhghhghhghhghghhghhghhghghhghghhghhghghhghghhghghhghghhghghhghhghghhghghhghghhghhghghhghghhghhghghhghghhghghhghghhghghghhghghghghhghghghghghghghghghgghghghgghgghghgghgghggghggghgggghgggggggggggggggggggggggggggfggggggfgggggfgggfggggfgggfgggfgggfgggfgggfggfgggfgggfggfgggfgggfgggfgggfgggfggfgggfgggfgggfgggfggfgggfggfgggfggfggfggfggfgfggfggfgfggfgfgfgfgfgfgfgfgfgfgfgfgffgfgffgfgffgffgffgffgffgfffgfffgfffgffffgffffgffffgfffffgfffffffgfffffffgffffffffffgffffffffffffgfffffffffffffgffffffffffffffgfffffffffffffgffffffffffffgfffffffffffffgfffffffffffffffgfffffffffffffffffffffffffffffffffffffffffefffffffffefffffffefffffeffffefffeffffeffefffeffeffeffeffeffeffefeffefeffefefefeffefefefefefefefefefefefefeefefefefefefeefefefefefeefefefefefefeefefefefefefefeefefefefefefefeefefefefefeefefefeefefefeefefeefeefeefeefeefeefeeefeeefeeeefeeeeeeeeeeeeeeeeeeedeeeeeeedeeeeedeeedeeedeedeedeedeedeedeededeededeededeedededeededededeededededeedededeededededeedededeedededeedededeedededeededededeededededededeedededededededdedededededdededdededdeddeddeddeddedddeddeddddedddeddddedddddeddddddeddddddddedddddddddddddddddddddddddddddddddddddddddddddddddddddddcdddddddddddddddddcddddddddddddddddddcdddddddddddddddddddddcddddddddddddddddddcddddddddddddddcdddddddddcdddddddcddddddcdddddcddddcdddcdddcdddcdddcddcddcddcddcddcddcdcdcddcdcdcdcdcdcdcdcdcdcdcdccdcdcdccdccdcdccdccdccdccdccdcccdccdccdcccdccdcccdccdcccdccdcccdccdccdcccdccdccdcccdccdccdcccdccdccdcccdcccdccdcccdccccdccccdcccccdcccccccccccccccbccccccccccbccccbcccbcccbccbccbccbccbcbccbcbcbcbccbcbcbcbcbcbcbbcbcbcbcbcbbcbcbcbbcbcbcbbcbcbbcbcbcbbcbcbbcbcbbcbcbbcbcbcbbcbcbbcbcbcbbcbcbbcbcbcbbcbcbbcbcbcbbcbcbbcbcbbcbcbbcbbcbcbbcbbcbbcbbcbbcbbcbbcbbbcbbbcbbbcbbbcbbbbcbbbbbcbbbbbbcbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbabbbbbbbabbbbbbabbbbbbabbbbbabbbbbabbbbbabbbbabbbbbabbbbabbbbbabbbbbabbbbbabbbbabbbbbabbbbbabbbbbabbbbbabbbbbabbbbabbbbbabbbbabbbbabbbabbbbabbbabbabbbabbabbbabbabbabbababbababbabababbabababababaabababaababaabaabaabaabaaabaaabaaaabaaaabaaaaaabaaaaaaaabaaaaaaaaabaaaaaaaaaaabaaaaaaaaaabaaaaaaaaabaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahaaaaaahaaaahaaahaaahaahaahahaahahaahahahahahahahahahahahahhahahhahahhahhahhahhahhahhahhahhhahhahhahhhahhahhhahhhahhahhhahhhahhahhhahhhahhahhhahhhahhahhhahhahhhahhahhhahhahhhahhahhhahhhahhahhhahhhahhhhahhhahhhhahhhhahhhhahhhhhhahhhhhhhahhhhhhhhhhhhhhhhhhahghhhhhhhhhhhhhhhhhhghhhhhhhghhhhhhghhhhghhhhghhhhghhhghhhghhhghhhghhghhhghhghhhghhghhghhghhhghhghhghhghhhghhghhghhhghhghhghhhghhghhghhhghhghhghhhghhghhhghhghhghhghhhghhghhghhghghhghhghhghghhghghhghghghghhghghghghgghghghgghghgghgghgghgghggghgggghgggggggggggggggggggggggggggggggfggggggggfggggggfggggggfggggggfggggggfgggggggfgggggggfgggggggfgggggggfggggggfgggggfggggfgggfgggfgggfggfgggfgfggfggfgfggfgfgfgfgfgfgfgfgfgffgfgffgfgffgffgffgffgffgfffgffgfffgfffgffffgffffgffffgfffffgfffffgfffffgffffffgffffffgffffffgffffffgffffffgfffffgffffffgfffffgfffffgffffffgfffffgffffffgffffffgfffffffgffffffffgfffffffffffffgffffffffffffffffffffefffffffffffefffffffefffffeffffefffefffefffeffefffeffeffeffefeffeffefeffefeffefeffefefeffefefefeffefefefeffefefefeffefefefeffefefefeffefefeffefefeffefefeffefefefeffefefefeffefefefefefefefefefefefeefefefeefeefefeefeeefeefeeefeeeeefeeeeeeeeeeeedeeeeeeeeeeedeeeedeeeedeeedeeedeedeeedeedeedeedeedeedeedeedeedeedeedeedeedeedeedeedeedeeedeedeedeedeedeedeeedeedeedeedeededeedeededeededeededededeedededededdededededdededdeddeddeddeddedddedddedddedddedddddedddddedddddddedddddddddeddddddddddddddddedddddddddddddddddddddddddddddddddddddddeddddddddddddddddddddddddddddddeddddddddddddddddddddddddddddddddddddddddddddddddddddddcdddddddddcdddddddcddddcddddcddddcdddcddcdddcddcddcddcddcdcddcdcdcddcdcdcdcdcdcdcdcdcdcdcdccdcdcdccdcdcdccdcdccdcdccdcdccdccdcdccdcdccdcdccdcdcdccdcdccdcdcdccdcdccdcdcdccdcdccdcdccdcdccdccdccdcdcccdccdccdcccdccccdccccccccccccccccccccccccccbccccbcccbcccbccbccbccbccbccbcbccbcbcbcbccbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbccbcbcbcbcbcbcbcbcbcbcbcbcbccbcbcbcbcbcbcbcbcbbcbcbcbcbcbcbbcbcbbcbcbbcbcbbcbbcbbcbbbcbbcbbbcbbbcbbbbcbbbbcbbbbbbcbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbabbbbbbbbbbabbbbbbbbabbbbbbbbbabbbbbbbbbbabbbbbbbbbbabbbbbbbbbbabbbbbbbbbbbabbbbbbbbbbabbbbbbbbabbbbbbbabbbbbbabbbbbabbbbabbbbabbbabbbabbbabbabbabbabbabbababbababababbabababaababababaababaabaabaabaabaaabaabaaabaaabaaabaaaabaaabaaaabaaaabaaabaaaabaaabaaabaaaabaaabaaabaaabaaabaaabaaaabaaabaaaaabaaaaabaaaaaaaaaaaaaaaaaaahaaaaaaahaaaahaaahaahaahaahaahahaahahahahahahahahahahahahahhahahhahahhahahhahhahahhahhahhahahhahhahhahhahhahahhahhahhahahhahhahhahahhahhahahhahhahahhahhahahhahhahhahahhahhahhahhahhhahhahhhahhahhhhahhhahhhhahhhhhahhhhhhahhhhhhhhhhhhahhhhhhhhhhhhhhhghhhhhhhhhhhhghhhhhhhghhhhhhghhhhhghhhhghhhhghhhhghhhghhhhghhhghhhhghhhghhhghhhhghhhghhhhghhhhghhhghhhhghhhhghhhhghhhghhhhghhhhghhhhghhhghhhghhhghhhghhhghhhghhghhghhhghghhghhghhghghhghghghghghghghghghghgghghgghgghgghggghggghgggghggggghgggggggggggghggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggfgggggggggggggfgggggfggggfgggfgggfggfggfgfggfgfgfggfgfgfgfgffgfgfgfgffgffgfgffgffgffgffgfffgffgfffgfffgfffgfffgfffgfffgffffgfffgffffgfffgffffgfffgffffgfffgfffgfffgffffgfffgfffgfffgfffgfffgfffgffffgfffgffffgffffgffffgfffffgffffffgfffffffffgfffffffffffffffffffffffffffefffffffffefffffefffffefffeffffefffeffefffeffefffeffeffeffeffeffefeffeffeffeffefeffeffeffeffefeffeffeffeffeffeffeffefeffeffeffeffeffeffeffeffeffeffeffefeffefeffefeffefefeffefefefefefefefeefefeefefeefeefeeefeeefeeeefeeeeeeeeeeeeeedeeeeeeeeeedeeeeeedeeeedeeeedeeeedeeedeeeedeeedeeeedeeedeeeedeeeedeeeeedeeeedeeeedeeeedeeeedeeeedeeedeeedeeedeedeedeedeededeededeedededededededdedededdededdeddeddedddeddedddedddeddddeddddedddddeddddddedddddddeddddddddedddddddddedddddddddedddddddddedddddddddedddddddeddddddddedddddddeddddddddeddddddddeddddddddddedddddddddddddddddddddddddddddddddddddcddddddddcdddddcddddcdddcdddcdddcddcdddcddcdcddcddcdcddcdcdcddcdcdcdcdcddcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcddcdcdcdcdcdcdcdcdcdcdcdcdcdcdccdcdcdccdcdccdccdcdcccdccdccccdcccccccccccccccccccccccbccccbccccbcccbccbccbccbccbccbccbcbccbccbcbccbcbccbcbccbcbccbcbccbcbccbcbccbcbccbccbcbccbccbcbccbccbccbcbccbcbccbcbccbcbccbcbcbcbcbcbcbcbcbcbcbcbbcbcbbcbcbbcbbcbbcbbcbbbcbbbcbbbbcbbbbcbbbbbcbbbbbbbbcbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbabbbbbbbabbbbabbbbabbbabbbabbbabbabbabbabbababbabababbababababababaabababaababaababaabaabaabaabaabaabaabaabaabaabaabaabaabaabaababaabaabaababaabaabaababaabaabaabaabaabaabaabaaabaabaaaabaaaaaaaaaaaaaaaaaaaaaaaaaahaaaahaaahaahaahaahaahahaahahahahahahaahahhahahahahahahahhahahahahhahahahahhahahahahhahahahahahhahahahahahahahhahahahahahahahahhahahahahahhahahahhahahhahhahhahahhhahhahhahhhahhhahhhhahhhhhahhhhhhahhhhhhhhhhhhhahhhhhhhhhhghhhhhhhhhhhhhhhghhhhhhhhghhhhhhhghhhhhhghhhhhhghhhhhhghhhhhghhhhhhghhhhhhghhhhhhhghhhhhhhghhhhhhhghhhhhhhghhhhhhhghhhhhhghhhhhhghhhhhghhhhghhhhghhhghhhghhghhhghhghhghhghghhghghhghghghghghghgghghghgghgghgghgghggghggghggghgggghggggghgggggghggggggghgggggghgggggghggggghggggghgggghggggghgggghggggghgggggggggggggggggggggggggggggggfggggfgggfgggfggfggfgfggfgfgfgfgfgfgfgfgfgfgffgfgffgfgffgffgffgffgffgffgffgffgfffgffgffgfffgffgffgfffgffgffgffgffgffgfffgffgffgffgffgffgffgffgffgffgffgffgffgffgfffgffgfffgfffgfffgffffgffffgffffffgffffffffgfffffffffffffffffffffffefffffffffeffffffefffffeffffefffefffefffefffefffefffeffefffefffeffefffeffefffefffefffeffefffefffefffefffefffefffefffefffefffefffefffefffeffeffefffeffeffefeffeffefefeffefefefefefefefeefefeefeefeefeeefeeefeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeedeeeeeeeeeedeeeeeeeeeedeeeeeeeeeeeeeeeedeeeeeeeeeeeeeeeeeeeedeeeeeeeedeeeeedeeedeeedeedeeededeededeededededededededdededdeddededdedddeddedddedddedddedddeddddeddddedddddeddddedddddedddddedddddeddddedddddeddddeddddeddddeddddeddddeddddeddddeddddeddddedddddedddddeddddddeddddddddeddddddddddddddddddddddddddddddcdddddddcdddddcddddcdddcdddcddcdddcddcddcddcddcdcddcddcdcddcdcddcdcddcdcdcddcdcddcdcdcddcdcddcdcddcdcddcdcddcddcdcddcddcdcddcddcdcddcdcddcdcddcdcddcdcdcdcddcdcdcdcdccdcdcdccdcdccdccdccdcccdccccccccccccccccccccccccbcccccbcccbcccbcccbcccbccbcccbccbccbcccbccbcccbccbcccbccbcccbcccbcccbcccbcccbcccbcccbcccbcccbccbccbccbccbccbccbcbcbccbcbcbcbcbcbcbbcbcbbcbcbbcbbcbbcbbbcbbcbbbbcbbbbcbbbbcbbbbbbcbbbbbbbbcbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbcbbbbbbbbbbbbcbbbbbbbbbbbcbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbabbbbbbbbbbbbabbbbbbabbbbabbbbabbbabbbabbabbabbabbababbabababbabababababababababaababababaababababaabababaabababaabababababaababababababababababaabababababababaabababaababaababaabaabaaabaaabaaaaaaaaaaaaaaaaaaaaaahaaaaahaaahaahaahaahaahahaahahaahahahaahahahahahahaahahahahahahahaahahahahahaahahahaahahahaahahaahahahaahahahaahahahahaahahahahahahhahahahhahahhahahhahhahhhahhahhhahhhhahhhhhahhhhhhahhhhhhhhhhhhhhhhahhhhhhghhhhhhhhhhhhhhhhhhhhghhhhhhhhhhhhhghhhhhhhhhhhhhghhhhhhhhhhhhhhhhhghhhhhhhhhhhhhhhhhhhhhhhhghhhhhhhhhhhhhhhhghhhhhhhhhhghhhhhhghhhhhghhhghhhhghhhghhghhghhghhghghhghghghhghghghgghghghgghghgghgghgghgghgghggghgghggghggghggghggghggghgghggghggghgghgghggghgghgghgghgghggghgghgghggghgghggghgggghgggggggggggggggggggggfgggggfgggfggfggfggfggfgfgfggfgfgfgfgfgffgfgfgffgfgfgffgfgffgfgffgffgfgffgfgffgffgfgffgfgffgfgffgfgfgffgfgffgfgfgffgfgfgffgfgfgffgfgfgffgfgffgffgfgffgffgffgfffgffgfffgffffgffffgffffffgffffffffffffgfffffffffefffffffffffffefffffffefffffefffffeffffeffffeffffeffffeffffeffffefffffeffffefffffefffffefffffefffffefffffeffffffeffffefffffeffffeffffefffefffeffefffeffeffefeffefeffefefefefefefefeefefeefeefeefeeefeeeefeeeeefeeeeeeeeeefeeeeeeeeeeeeeeeeeeefeeeeeeeeeeeefeeeeeeeefeeeeeeefeeeeeeeeeeeeeeeeeeeeeeeeeeeedeeeeedeeeedeedeedeededeedededededededededdededdeddeddeddeddeddedddeddedddedddedddedddedddedddedddedddedddedddeddedddeddedddeddedddeddedddeddeddedddeddedddedddedddedddeddddeddddeddddddedddddddddeddddddddddddddddddcddddddddcddddddcddddcddddcdddcddcdddcddcdddcddcddcddcddcddcddcddcddcddcddcddcddcdddcddcddcdddcddcddcdddcddcdddcdddcddcddcdddcddcddcddcddcddcddcdcddcdcddcdcdcdcdcdcdcdccdcdccdccdcccdcccdcccccccccccccccccccbcccccccbcccccbcccccbccccbcccccbcccccbccccccbcccccccbccccccccbccccccccbccccccbcccccbcccbcccbccbccbccbccbcbcbcbccbbcbcbcbcbbcbcbbcbbcbbcbbbcbbcbbbbcbbbcbbbbbcbbbbbcbbbbbcbbbbbbbcbbbbbbbcbbbbbbbbcbbbbbbcbbbbbbbcbbbbbbcbbbbbcbbbbbcbbbbbcbbbbbcbbbbbcbbbbbcbbbbbbbcbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbabbbbbabbbbabbbabbabbabbbababbabbababbababbabababababbabababababababababbababababababbababababbabababbababbabababbabababbabababbabababababababababaababaabaabaabaaabaaaaaaaaaaaaaaaaaaaaahaaaaahaaahaahaaahaahaahaahahaahaahaahahaahaahahaahaahaahaahaahaahaahaaahaahaahaaahaahaahaahaahaahaahaahahaahahahahahahahahahahhahahhahhahhahhhahhhahhhahhhhhahhhhhhahhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhghhhhhhhhhghhhhhhghhhhghhhghhhghhghhghhghhghghhghghghghghghghghghgghghgghghgghghgghgghgghgghghgghgghghgghgghghgghghghgghghghgghghghgghghghgghghghgghgghghgghgghgghggghggghggggggggggggggggfgggggfgggfgggfggfggfgfggfgfgfgfgfgfggfgffgfgfgfgfgfgfgfgfgffgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfggfgfgfgfgfgfgfggfgfgfgfgfgfgfgffgfgfgfgffgffgfgffgffgfffgfffgfffgfffffgfffffffgffffffffffffffffffffffffffffeffffffffffefffffffefffffffefffffffefffffffefffffffffefffffffffffefffffffffffffeffffffffffffeffffffffeffffffefffffeffffefffefffeffeffeffefeffefefeffefeefefefefeefeefeefeefeeefeeefeeeefeeeefeeeeefeeeefeeeeefeeeefeeeefeeefeeefeeefeeefeeefeefeeefeeefeeeefeeeeeeeeeeeeeeeeeeeeeeeedeeedeeedeedeededeededededededededdededdededdeddeddededdeddedddeddeddeddeddeddeddeddeddededdeddeddededdededdededdeddededdededdeddeddededdedddeddedddedddedddeddddedddddddedddddddddddddddddddddddddcdddddddcdddddcddddcddddcdddcdddcdddcdddcdddcdddcdddcdddcdddcddddcdddcddddcdddcdddddcddddcddddcddddcddddcddddcdddcdddcdddcdddcddcddcddcdcddcdcdcddcdcdccdcdcdccdccdccdcccdccccccccccccccccccccccccccccccccccccccccccccccccccccccccccdccccccccccccccccccccccccbcccccccccbccccbcccbccbccbccbcbcbcbcbcbcbcbcbbcbcbbcbbcbbcbbbcbbbcbbbcbbbcbbbbcbbbcbbbbcbbbbbcbbbbcbbbbcbbbbcbbbcbbbbcbbbcbbbcbbbcbbbcbbbcbbbcbbbcbbbcbbbcbbbcbbbcbbbbcbbbbbcbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbabbbbabbbbabbbabbabbabbbababbabbabbababbabbababbababbababbabbababbabbababbabbabbabbabbabbbabbabbabbabbabbabbabbabbababbababbabababbababaabababaabaabaabaaabaaaaaaaaaaaaaaaahaaaaaahaaaahaaahaaahaaahaaahaaahaahaaahaaaahaaahaaaahaaaaahaaaaahaaaaahaaaaahaaaahaaahaahaaahaahahaahahahahahahahahhahahhahhahhahhhahhhahhhhahhhhhahhhhhhahhhhhhhhhhahhhhhhhhhhhhhahhhhhhhhhhhhahhhhhhhhhhahhhhhhhhahhhhhhhahhhhhhahhhhhhhahhhhhhhahhhhhhhhhhahhhhhhhhhhhhhhhhhhhghhhhhhhhghhhhhghhhghhhghhhghhghhghghhghghhghghghghghghghghghghghgghghghghghghgghghghghghghghghghghghghghhghghghghghhghghghghghghghghghghghghgghghgghghggghggghgggggggggggggggfgggggfgggfggfggfggfggfgfggfgfgfggfgfgfggfgfgfgfggfgfgfggfgfggfgfggfggfgfggfggfggfggfggfgfggfggfggfgfgfggfgfgfgfgfgfgfgfgffgfgffgffgfffgfffgfffgfffffgffffffffgffffffffffffffffffffffffffffefffffffffffffffffeffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffeffffffffefffffeffffefffeffeffeffeffefefefeffefeefefefeefefeefeefeefeefeefeeefeefeeefeefeeefeefeefeefeefeefefeefeefefeefefeefeefefeefeefeefeefeefeeefeeeeeeeeeeeeeeeeedeeeedeeedeedeededeededededededededdedededdedededdededdededdededdedededdededededededdedededededededededededededededdedededdededdeddeddedddedddeddddedddddedddddddddddddddddddddddddddddcdddddddcdddddcdddddcdddddcddddcdddddcdddddcdddddcddddddcddddddddcddddddddcdddddddddcdddddddcddddddcddddcddddcdddcdddcddcddcdcddcdcdcdcdcdcdcdcdccdccdcccdcccdccccdcccccccdccccccccccccdccccccccdccccccdcccccdccccdcccdccccdccccdccccccccccccccccccccccccbcccbccbccbccbcbccbcbcbbcbcbcbbcbcbbcbbcbbcbbcbbbcbbcbbbcbbbcbbcbbbcbbbcbbcbbbcbbcbbbcbbcbbcbbcbbcbbcbbcbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbbcbbbcbbbbcbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbabbbbbabbbabbbabbbabbabbabbbabbabbabbabbabbbabbabbabbbabbbabbabbbabbbbabbbabbbabbbbabbbabbbabbbbabbabbbabbabbabbabbabbababababababababaabaabaaabaaaaaaaaaaaaaaaaaaaaaahaaaaaahaaaaahaaaaaahaaaaaaaaahaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahaaaaaahaaahaahaahaahahahahahahahahhahahhahhahhhahhhahhhahhhhahhhhhahhhhhhahhhhhhahhhhhhahhhhhhahhhhhahhhhhahhhhahhhhahhhahhhhahhhahhhahhhhahhhhahhhhahhhhhhahhhhhhhhhhhahhhhhhhghhhhhhhhhhghhhhhghhhghhhghhhghhghghhghhghghhghghghhghghghghghhghghghghghhghghghhghghhghhghghhghhghghhghhghhghhghhghghhghghhghghghhghghghgghghghgghggghgggggggggggggggggggfgggfgggfgggfggfggfggfggfggfgfggfggfggfgggfggfgggfgggfgggfggggfgggfggggfgggfgggfggfggfggfggfgfgfgfgfgfgfgffgfgffgffgfffgfffgfffffgfffffffgfffffffffffffffffffgfffffffffffffffffffffffffffffffffgfffffffffffgffffffffgffffffffffgfffffffffffffffffffffffffffffffefffffeffffeffefffeffefeffefeffefefefefeefefefeefefeefefeefefeefeefefeefefefeefefefefefefefefefefefefefefefefefefeefefefefeefeefeefeeefeeeeeeeeeeeeedeeeeedeedeeededeededeedededededededededededededededededededededeedededeededeededeedeededeedededeedededededededdededdededddeddedddedddddeddddddddeddddddddddddddddcdddddddddddcddddddddcddddddddcddddddddddcdddddddddddddddddddddddddddddddcdddddddddddddddddddcddddddcdddddcdddcdddcddcddcdcddcdcdcdcdcdccdcdccdccdcccdcccdccccdccccdccccdccccdcccdcccdccdcccdccdccdccdccdcdccdccdccdcccdccdcccdcccccccccccccbcccccbcccbccbcbccbcbcbcbcbcbbcbcbbcbcbbcbbcbcbbcbbcbbcbbcbbcbbcbbcbcbbcbbcbcbcbbcbcbcbbcbcbcbcbcbbcbcbcbcbbcbcbcbbcbcbbcbbcbbbcbbbcbbbcbbbbbcbbbbbbbbbbbbbbbbbbbbbbbabbbbbbabbbbbabbbbabbbabbbabbbabbbabbbbabbbabbbbabbbbabbbbbabbbbbabbbbbbabbbbbbbabbbbbbabbbbbabbbbabbbbabbabbbabbabbabababbababaababaabaabaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaabaaaaaabaaaaabaaaaaaaaaaaaaaaaaaaaaaahaaahaaahahaahahahahahahhahahhahhahhahhhahhhahhhahhhhahhhhahhhahhhhahhhhahhhahhhahhhahhahhhahhahhahhahhahhahhhahhahhahhhahhahhhahhhhahhhhhhahhhhhhhhhhhhhhhhhhhhhghhhhhghhhhghhhghhghhhghhghhghghhghhghghhghhghghhghhghhghhghhghhghhghhhghhhghhghhhghhhghhhghhhghhghhhghhghhghghhghghhghghgghghghggghgghgggggggggfggggggggfggggfggggfgggfgggfgggfgggfgggggfgggggggfgggggggggggggggfgggggggfggggfgggfggfgfggfgfgfgfgffgfgffgffgfffgffffgffffgfffffffgfffffffffgffffffffffffgfffffffffgffffffgfffffgfffffgffffgffffgffffgfffffgfffffgffffffffffgffffffffefffffffffeffffefffeffefffefeffefeffefefefefefefefefeefefefefefefefefefefefeffefefeffefeffefeffeffefeffefeffefefefeffefeefefefeefeefeeeeeeeeeeeeeeeedeeedeeedeedeededeedededeedededeededeededeededeedeedeeedeedeeedeeedeeedeeedeedeedeededeededededededdededdedddedddedddddeddddddddddeddddddddddddcdddddddddddddddddddddddddcdddddedddddddddddddddddddeddddddddddddedddddddddddddddddddcdddddddcddddcdddcddcddcddcdcdcddccdcdcdccdcdccdccdccdcccdccdccdcccdccdcdccdccdcdccdcdcdcdcdccdcdcdcdcdcdcdccdcdccdccdccdcccccccccccccccccbccbccbccbccbcbcbcbcbcbbcbcbcbbcbcbcbbcbcbbcbcbcbcbbcbcbcbcbcbccbcbcbcbccbcbcbccbcbcbcbccbcbcbcbbcbcbcbbcbbcbbbcbbbcbbbbbcbbbbbbbbbbbbbbbbbbbbbbabbbbbbbabbbbbabbbbbabbbbbabbbbbabbbbbbbabbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbabbbbbbabbbbabbabbbababbababababababaabaabaaabaaaabaaaaaaaabaaaaaaaaabaaaaaabaaabaaabaaabaabaabaaabaabaabaaabaaaaaaaaaaaaaaaaahaaahaahahaahahahahhahahhahahhahhhahhahhhahhahhhahhahhhahhahhahhhahahhahhahahhahahhahahahhahahahhahahhahhahhahhahhhahhhhahhhhhhhhahhhhhhhhghhhhhhhhghhhhghhhghhhghhhghhghhghhhghhghhghhhghhghhhghhhghhhhghhhhhghhhhhghhhhhghhhhhghhhhghhhhghhhghhghhghhghhghghghghgghghggghggggggggggggggggfggggggfgggggggggggggggggggggggggggghggggggggggggggggggggggfggggfggfgfggfgfgfgffgfgffgffgfffgffffgffffgfffffgffffffgffffffgfffffgffffgffffgfffgfffgffgfffgffgffgfffgffgfffgffffgffffgfffffffgfffffffffeffffffffefffefffeffeffeffeffefefeffefefefefeffefefeffefeffefeffeffeffeffefffeffefffefffeffeffeffeffeffefefefefefefefeefeeeeeeeeeeeeeeeedeeedeeedeedeedeedeedeedeedeedeeedeeedeeeeedeeeeeeeedeeeeeeedeeeeedeeedeededeedededdededdeddedddedddeddddddedddddddddddddddddddddddddddedddddddddddddddedddddddedddddedddddedddddeddddddeddddddddddddddddddddddddcddddcdddcddcddcdcddcdcdcdcdccdcdccdcdccdcdccdcdccdcdcdccdcdcdcddcdcdcdcddcdcddcdcdcddcdcdcdcdcdcdcdcdccdccccccccccccccccbcccbccbcbccbcbcbcbcbcbcbcbcbcbcbcbcbcbcbccbcbccbcbccbcccbccbccbcccbccbccbccbcbcbccbcbbcbcbbcbbcbbcbbbbcbbbbbbbbcbbbbbbbbbabbbbbbbbbbbabbbbbbbbabbbbbbbbbbabbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbabbbabbabbababababababaabaabaaabaaabaaaabaaaabaaabaaabaaababaabaabababaababababaababaababaabaaaaaaaaaaaaaaaaahaahaahahahahahahhahahhahahhahhahhahhahhahhahahhahahhahahahahahahahaahahahahahahahahahahahhahahhahhhahhhhahhhhhhhhhhhhhhhhhhhhghhhhhghhhhghhhghhhghhhghhhhghhhghhhhhghhhhhhghhhhhhhhhhhghhhhhhhhhhhhhghhhhhhhghhhhghhhghhhghghhghghghghgghggghgggghggggggggggggggggggggggggggggghgggghggghgghggghggghggggggggggggggggggfggfggfgfgfgfgffgffgffgfffgfffgfffgffffgffffgffffgfffgfffgffgffgffgffgfgffgfgffgfgffgfgffgffgffgfffgfffgffffffgfffffffffefffffffefffefffeffeffeffefeffeffefeffeffeffeffeffefffefffeffffeffffefffffeffffeffffeffefffeffefeffefefefeefeeeeeeeeeeeeeeeeedeeeedeedeeedeeeedeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeedeeedeedeededededdeddeddedddedddddeddddddddeddddddddddddeddddddddedddddeddddedddedddedddeddedddedddeddddedddddeddddddddddddddcdddddcdddcddcddcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcddcddcddcddcddcddcdddcddcddcddcdcddcdcdcdcdccdccccccccccccccbcccbccbcbccbcbcbccbcbcbccbcbccbccbccbccccbcccccbcccccccbccccbccbccbccbcbcbcbcbbcbbbcbbbcbbbbbbbcbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbcbbbbbbcbbbbbbcbbbbbbbbbbbbbbbbbbbbabbbbabbabbabbababababaabaabaabaabaaabaabaabaabaababaabababababbabababbababababababababaabaaaaaaaaaaaaahaahaahahahahahahahahhahahhahahhahahahahahahahahaahaahaahaahaahaahaahaahahahahahhahahhhahhhhahhhhhhhhhhhhhhhhhhghhhhhhghhhhghhhhhghhhhhghhhhhhhhhhghhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhghhhhhghhhghhghhghghghghgghgghggggghgggggggggggghggggghggghgghgghghgghghghgghghgghgghggggggggggggggfggfgfgfgfgfgffgfgfffgffgfffgfffgfffgffgffgffgffgfgffgfgfgfgfgfgfgfgfggfgffgfgfgffgffgffgfffffgfffffffffffefffffeffffeffefffeffeffeffeffefffefffeffffeffffffeffffffffffffeffffffffeffffefffeffeffefefefeefeeeeeeeeeeeeeeedeeeeedeeeeeeeeeeeefeeeeefeeeefeefeeefeeeeeeeeeeeedeeedeededededdededddeddddedddddeddddddedddddddeddddeddddeddeddeddeddededdededdeddeddeddeddddeddddddddddddddddddcdddcddcddcddcdcdcdcdcddcdcdcdcdcddcddcddcddcdddcddddcddddcddddcddddcddcddcddcdcdcdcdccccccccccccccbccbccbccbccbcbccbccbcccbcccccccccccccccccccccccccccbccbccbcbcbcbbcbbcbbbcbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbcbbbcbbbcbbbcbbbcbbbcbbbbcbbbbbbbbbbbbbbbabbbbabbabbababababaababaabaabaababaababababababbabbabbabbabbabbabbabbababbababaabaaaaaaaaaahaaahahaahahahahhahahahahahahahahaahaahaaahaaaaahaaaaahaaaahaahahahahahhahhahhhhahhhhhhhhhhhhhghhhhhhhghhhhhhhghhhhhhhhhhhhhhhhhhhahhhhhhahhhhhhhahhhhhhhhhhhhhhhhghhhghhhghghghghgghgghgggghggggghgggghggghgghghghghghghghghghhghghghghghgghgggggggggfgggfgfgfgfgfgffgffgffgffgfffgffgfgffgfgfgfgfgfggfgfggfgggfgfggfgfggffgfgffgffgffffffffffffffffffefffefffefffefffefffefffefffffffffefffffffgffffffffffffffffeffffffeffeffefefefeefeeeeeeeeeeeeeeeeeeeeeeeeefeeefeefeefefeefefeefefeeeeeeeeeeeedeededededdedddedddeddddedddddeddddedddedddededdedededededededededededdeddedddedddddddddddddcdddcddcddcddcdcddcdcdcddcddcddcdddcdddddcddddddddddcddddddddcdddcdddcdcdcdcdccccccccccbcccbcccbccbccbcccccccccccdccccdcccdcccccccccccccbccbcbcbcbbcbbcbbbbbbcbbbbbbbbbbbbbbbbbcbbbbbbcbbbcbbbcbbcbcbbcbcbbcbbcbbcbbbbcbbbbbbbbbbbabbbabbabbabababaababaabababababababbabbabbbabbbbabbbbabbbbabbabbabbabaabaaaaaaahaaahaahahahahahahahaahahaahaaaaaaaaaaaaaaaaaaaahaaahaahahahahhhahhhhhhhhhhhhhhhhhhhhhhghhhhhhhhhhhhhhhahhhhhahhhahhhahhahhhhahhhhhhhhhhhhhhghhhghghghghghggghggghgggghgghgghghghghghhghhghhghhghhghhghhghgghgggggggggfgfggfgffgfgffgffgffgfgffgfgfgfgfgggfggggfggggggfgggfgfgfgfgffgffffgffffffeffffffefffefffeffffefffffffffffffffffffgffffffgffffffffffffffefffefefefefeeefeeeeeeeeeeeeeeeeefeefefefefefefeffefefefefeeeeeeeeedeedededdeddedddeddddeddddedddeddededededeedeedeedeededeededdeddeddddddddddddcdddcddcddcdcddcddcddcdddcddddddddddddddddddddddddddddcddddcddcdcccccccccccccbccbccccccccccccdccdcdccdcdcdccdccccccccbccbcbcbcbbbcbbbbbbbcbbbbbbbbbbbcbbbbcbbcbbcbcbcbcbccbcbcbbcbcbbbcbbbbbbbbbbabbabbababababababaababbababbbabbbbbbabbbbbbbbbbbabbbbabbababaaaaaaaahaahaahahahahaahaaaaaaaaaaaabaabaaaaaaaaaaahahahahhahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhahhahhahahhahahhahhahhhhhhhhhhhhhghhghghgghgghgggghgghgghghhghghhhghhhhhghhhhghhhghhghghggggfgggfggfgffgfgffgffgfgfgfgfggggggggggggggggggfggfgfgfffgfffffffffeffffeffffefffffefffffgffffgfffgffgfffgfffffffffffffeffefeefeeeeefeeeeeeeeeefefefeffeffefffeffeffefefeeeeeedeededdeddedddeddddedddededdeedeedeeeeeeeedeeedededddeddddddddcdddcddcdcddcddcdddcdddddddddedddddeddddddddddddddcddcccccccccccbccccccccccdccdcddcdcddcdcdcdcccccccbcbcbcbbbbcbbbbbbbbbbcbbbbbcbcbcbcbcccbccbccbcbcbcbbbbcbabbbbabbababababababababbabbbbbbbbbbbbbcbbbbbbbabbbababaaaahaaahahahahaahaaaaaaababaababababaaaaaaahahahhhahhhhhhhhhghhhhhhhhhhahhhahahahaahahaahhahhahhhhhghhhghghgghggghggghghghghhhhhhhghhhhhhhhhhhghhghggggfggfgfgffgfgffgfgfggggggghgghggggggggggffgffffffffffffefffefffffffffffgffgfgfgfgffgffgffffffeffeefeeeeeeeeeefeefefefffefffffffefffeffeeeeededededddeddddedddededeeefeeeeeeeeeedeeddedddddcdddcddcdcddcddcdddddedddededdedddeddddddcdccccccccbccccccccdcdcdddcddddcddcdccccccbbcbbbbcbbbbbbbbbbcbbcbcccccccccccbcbbcbbbbabbababababaababbbbacbbbbcbbbcbbbbbbbbbaaaaaaahahahahaaaaaabababbabbbabaaaaaahahhhhhhhhhhhhhghhhahhhaahaaaaaahaahhhahghhhghggghgggghghghhhhhhhhhahhhhhhhhhggggfggffgffgffgfggggghghghhghggggggffgffffefffefffeffffffgfggfgggfgfgffffffefeeeeeeeeeeeffeffffgffffffffeeeeeedddedddddedddeeeefefefefeeedeeddddddcdcdcdcddcdddddeededeededdddddccccbccbccccccdddddddddddcddcccbcbbbbbbbbbbbbbbccdccdcccccccbbbbbabaabaabaabbbbbcbccbcbbcbbbaaahahahahhaaaaabbbbbbbbbabaahahhhhhhhghhhhhhhaabaaaaaaahhhhghggghhhhghhhhghhghghghghgghgggggggfgggfggfgfgfgffgfffgfffffffffffffffffeffeffefefefeeeeeeeeeeedeededededddeddddeddddddcdddddcddcdcdcdcccccccccbccbcbcbbcbbbcbbbbbbbbbabbbabababaaaaaaahaahahahhahhhhhhhhhhghhghhgggggggfgfgfgffffffffffeffeeeeedeedddedddcddccccbcbbbbbaahagg";

    
}