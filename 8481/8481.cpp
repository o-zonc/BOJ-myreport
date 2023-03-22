#include <iostream>
#include <string>
#include <vector>

using namespace std;

#define ll unsigned long long

ll thenum = 9099099909999099999;
int i;
int p[450000];

string mon[12] = {"stycznia", "lutego", "marca", "kwietnia", "maja", "czerwca", "lipca", "sierpnia", "wrzesnia", "pazdziernika", "listopada", "grudnia"};
string yr[21] = {"dwutysiecznego", "dwa tysiace pierwszego", "dwa tysiace drugiego", "dwa tysiace trzeciego", "dwa tysiace czwartego", "dwa tysiace piatego", "dwa tysiace szostego", "dwa tysiace siodmego", "dwa tysiace osmego", "dwa tysiace dziewiatego", "dwa tysiace dziesiatego", "dwa tysiace jedenastego", "dwa tysiace dwunastego", "dwa tysiace trzynastego", "dwa tysiace czternastego", "dwa tysiace pietnastego", "dwa tysiace szesnastego", "dwa tysiace siedemnastego", "dwa tysiace osiemnastego", "dwa tysiace dziewietnastego", "dwa tysiace dwudziestego"};
string code = "dcddcdcddcdcdcddcdcdcdcdcdcdcdcdcdcdcdccdcdcdccdccdcdccdccdcccdcccdcccdcccdcccccdccccccccccccccccccccccccccccccccbcccccccccccbccccccccbcccccccbcccccccbcccccccbcccccccbcccccccbcccccccbccccccbccccccbcccccbccccbccccbcccbcccbcccbccbcccbccbccbccbcbccbcbccbcbcbccbcbcbcbcbcbcbcbbcbcbcbcbbcbcbbcbbcbcbbcbbcbbcbbcbbbcbbcbbbcbbbcbbbcbbbcbbbcbbbbcbbbbcbbbbcbbbbcbbbbbcbbbbcbbbbbcbbbbbcbbbbbbcbbbbbcbbbbbcbbbbbbcbbbbbcbbbbbbcbbbbbcbbbbbcbbbbbbcbbbbbcbbbbbbcbbbbbbcbbbbbbcbbbbbbbcbbbbbbbbbcbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbabbbbbbabbbbbabbbbabbbbabbbbabbbabbabbbabbbabbabbabbabbabbabbabbabbababbabbababbababbababbabababbabababbabababbabababbabababbabababbabababbababababbabababbabababbababababbabababababbababababababababababababababababaababaababaababaabaabaabaabaaabaaabaaabaaaaabaaaaaaaaaaaaaaaaaaaaahaaaaaaaahaaaaaahaaaahaaahaaahaaahaaahaaahaahaahaaahaahaahaaahaahaahaahaahaahaahaaahaahaahaahaahaahaahaaahaahaahaahaahaahaahaahaahahaahaahahaahaahahahaahahahaahahahahahahahahahahahahhahahahhahahhahhahhahhahhahhahhahhhahhahhhahhhhahhhahhhhhahhhhahhhhhhahhhhhhahhhhhhhhhahhhhhhhhhhhahhhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhghhhhhhhhhhhhhhhhghhhhhhhhhghhhhhhghhhhhhghhhhghhhhghhhghhhhghhghhhghhghhhghhghhghhghghhghhghghhghghghhghghghghghghghghghghghghghghghghgghghghghgghghghgghghghgghghgghghghgghghgghghgghghghgghghgghghghgghghgghghgghghgghghghgghgghghgghghgghgghgghgghgghgghgghggghgghggghgggghgggghggggggggggggggggggggggggfgggggggfggggfgggfgggfgggfggfggfggfggfggfgfggfgfggfgfggfgfgfgfggfgfgfgfgfggfgfgfgfgfgfgfgfgfgfgfggfgfgfgfgfgfgfgfgfgfgfgfgfgfggfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgffgfgfgfgffgfgfgffgfgffgfgffgfgffgffgffgffgffgfffgffgfffgfffgffffgffffgffffgfffffgfffffffgffffffffffgfffffffffffffffffffffffffffffffffffffffffffffffeffffffffffffffefffffffffffefffffffffffeffffffffffefffffffffffeffffffffffefffffffffffefffffffffefffffffffefffffffffefffffffeffffffefffffefffffeffffeffffeffffefffefffefffeffeffefffeffefeffeffeffefeffefefefeffefefefefefefefeefefefeefefeefefeefeefeefeefeefeefeeefeefeeefeeefeefeeefeeeefeeefeeefeeefeeefeeefeeeefeeefeeefeeefeeefeeeefeeefeeefeeeefeeefeeeefeeeeefeeeeefeeeeeeeeeeeeeeeeeeeeeeeeeeeeeedeeeeeedeeeedeeedeeedeedeedeedeedeededeedededeedededededededededededdededededdededdededdededdededdededdeddededdededdeddeddededdeddededdeddededdeddededdeddeddededdeddededdeddeddededdeddeddeddeddeddeddeddeddeddeddedddeddedddedddedddeddddeddddeddddedddddedddddddedddddddddeddddddddddddddddddddddddddddddddddddcddddddddddcdddddddcddddddcddddddcddddcdddddcddddcddddcddddcddddcddddcddddcdddcddddcddddcddddcdddcddddcddddcddddcdddcddddcddddcdddcddddcdddcddddcdddcdddcdddcdddcdddcdddcddcdddcddcddcdddcdcddcddcddcdcddcddcdcdcdcddcdcdcdcdcdcdcdcdccdcdcdccdccdcdccdcccdccdcccdcccdcccdcccccdcccccdcccccccccdccccccccccccccccdccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccccbccccccccccbccccccbccccbcccbcccbcccbccbccbccbccbcbccbcbccbcbcbcbcbcbcbcbcbcbcbbcbcbbcbcbbcbcbbcbbcbbcbbcbbcbbcbbcbbcbbbcbbcbbbcbbbcbbbcbbbcbbcbbbbcbbbcbbbcbbbcbbbcbbbcbbbbcbbbcbbbcbbbcbbbcbbbbcbbbcbbbcbbbcbbbcbbbcbbbbcbbbcbbbcbbbbcbbbbcbbbcbbbbcbbbbbcbbbbcbbbbbbcbbbbbbcbbbbbbbbcbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbabbbbbbbbabbbbbabbbbbabbbbabbbbabbbabbbabbbabbbabbabbbabbabbabbbabbabbabbabbabbabbabbabbabbabbabbabbabbabbababbabbabbabbabbabbabbabbabbabbabbabbababbabbabbabbabbababbabbabbababbababbababbabababbababababababababababababaabababaabaabaabaabaabaaabaaabaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahaaaaaaahaaaaahaaaaahaaaaahaaaahaaaahaaaahaaaahaaaahaaaahaaaahaaaaahaaaahaaaahaaaahaaaahaaahaaahaaaahaaahaahaaahaahaahaahaahaahahaahahaahahahahaahahahahhahahahahahhahahhahhahahhahhahhhahhahhahhhahhhahhhahhhhahhhahhhhhahhhhahhhhhahhhhhhahhhhhhahhhhhhhahhhhhhhhahhhhhhhahhhhhhhhahhhhhhhhahhhhhhhhahhhhhhhhahhhhhhhahhhhhhhhahhhhhhhhahhhhhhhhhahhhhhhhhhhahhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhghhhhhhhhhhhghhhhhhhghhhhhhghhhhghhhhghhhghhhhghhghhhghhghhghhghhghhghhghhghghhghghhghghhghghghhghghghghghhghghghghghghghghghghhghghghghghghghghghghghghghghghghhghghghghghghghghghghghghghghghghghghghghghghghghgghghghgghghghgghgghghgghgghgghggghggghggghggggghggggggggggggggggfgggggggggfgggggfggggfgggfgggfgggfggfggfggfggfggfggfggfggfgfggfggfgfggfggfgfggfggfgfggfgfggfggfgfggfggfgfggfggfgfggfggfgfggfgfggfggfgfggfgfgfggfgfgfggfgfgfgfgfggfgfgfgfgffgfgfgfgfgffgfgffgfgffgffgffgffgffgffgfffgfffgfffgfffgffffgfffffgfffffgfffffffgffffffffffgfffffffffffffffffffffgfffffffffffffffffffffffffffffffffffffffeffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffefffffffffffffffeffffffffffefffffffefffffefffffeffffefffefffefffefffeffeffeffeffeffeffefeffefefeffefefefefefefefefefefefefeefefefeefefeefefeefefeefeefeefefeefeefeefeefefeefeefeefeefefeefeefeefeefefeefeefeefeefefeefeefeefeefeefeefeefeefeeefeefeeefeeefeeeefeeeefeeeeeeeeeeeeeeeeeeeeeeeedeeeeeedeeeedeeedeeedeedeedeedeedeededeedededeedededededededeedededdededededededededededdededededededdededededededdedededededededdedededededededdedededededdededededdedededdededdededdededdeddeddeddeddeddeddedddeddedddeddddedddedddddedddddedddddddeddddddddddddedddddddddddddddddddddddddcddddddddddddddcddddddddddcddddddddcdddddddcddddddcdddddddcdddddddcddddddcdddddddcdddddddcddddddcdddddddcdddddddcddddddcddddddcddddddcdddddcdddddcddddcddddcddddcdddcdddcdddcdddcddcddcddcddcddcddcdcddcdcddcdcdcdcdcdcdcdcdcdcdcdccdcdccdccdcdccdccdcccdccdcccdcccdcccdccccdccccdccccdcccccdcccccdcccccdcccccdcccccdcccccdcccccdcccccdccccdcccccdccccccdccccccdcccccccccccccccccccccccccbccccccccbcccccbcccbcccbccbccbccbccbccbcbcbccbcbcbcbcbcbcbcbcbcbcbbcbcbcbbcbcbbcbcbbcbbcbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbbcbbcbbcbbcbbcbbcbbcbbbcbbcbbcbbbcbbcbbbcbbbcbbbcbbbcbbbbcbbbbcbbbbbcbbbbbcbbbbbbbbcbbbbbbbbbbbbbbbcbbbbbbbbbbabbbbbbbbbbbbbbbabbbbbbbbabbbbbbabbbbbabbbbabbbbabbbbabbbbabbbabbbabbbabbbabbbabbbabbbabbbabbbabbbabbbabbabbbabbbabbbabbbabbbabbbabbbabbbabbbabbbabbbabbabbbabbbabbabbbabbabbbabbabbabbabbabbabbabbababbababbababababbabababababaabababaababaabaabaabaabaaabaaabaaaabaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaahaaaaaaaaaaaaaaaaahaaaaaaaaaaaaaaahaaaaaaaaaaaaaaaaaahaaaaaaaaaaaaahaaaaaaaahaaaaaahaaaahaaaahaaahaaahaahaahaahaahahaahahahahaahahahahahhahahahahhahahhahhahhahahhhahhahhahhahhhahhhahhhahhhahhhahhhhahhhahhhhahhhhahhhhahhhhahhhhhahhhhahhhhahhhhahhhhahhhhhahhhhahhhhahhhhahhhhahhhhahhhhahhhhahhhhhahhhhahhhhhahhhhhhahhhhhhahhhhhhhahhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhghhhhhhhhhhghhhhhhhghhhhhghhhhghhhhghhhghhhghhhghhghhhghhghhghhghhghhghhghghhghhghhghghhghghhghhghghhghghhghghhghghhghghhghhghghhghghhghghhghhghghhghghhghhghghhghghhghghhghghhghghghhghghghghhghghghghghghghghghgghghghgghgghghgghgghggghggghgggghgggggggggggggggggggggggggggfggggggfgggggfgggfggggfgggfgggfgggfgggfgggfggfgggfgggfggfgggfgggfgggfgggfgggfggfgggfgggfgggfgggfggfgggfggfgggfggfggfggfggfgfggfggfgfggfgfgfgfgfgfgfgfgfgfgfgfgffgfgffgfgffgffgffgffgffgfffgfffgfffgffffgffffgffffgfffffgfffffffgfffffffgffffffffffgffffffffffffgfffffffffffffgffffffffffffffgfffffffffffffgffffffffffffgfffffffffffffgfffffffffffffffgfffffffffffffffffffffffffffffffffffffffffefffffffffefffffffefffffeffffefffeffffeffefffeffeffeffeffeffeffefeffefeffefefefeffefefefefefefefefefefefefeefefefefefefeefefefefefeefefefefefefeefefefefefefefeefefefefefefefeefefefefefeefefefeefefefeefefeefeefeefeefeefeefeeefeeefeeeefeeeeeeeeeeeeeeeeeeedeeeeeeedeeeeedeeedeeedeedeedeedeedeedeededeededeededeedededeededededeededededeedededeededededeedededeedededeedededeedededeededededeededededededeedededededededdedededededdededdededdeddeddeddeddedddeddeddddedddeddddedddddeddddddeddddddddedddddddddddddddddddddddddddddddddddddddddddddddddddddddcdddddddddddddddddcddddddddddddddddddcdddddddddddddddddddddcddddddddddddddddddcddddddddddddddcdddddddddcdddddddcddddddcdddddcddddcdddcdddcdddcdddcddcddcddcddcddcddcdcdcddcdcdcdcdcdcdcdcdcdcdcdccdcdcdccdccdcdccdccdccdccdccdcccdccdccdcccdccdcccdccdcccdccdcccdccdccdcccdccdccdcccdccdccdcccdccdccdcccdcccdccdcccdccccdccccdcccccdcccccccccccccccbccccccccccbccccbcccbcccbccbccbccbccbcbccbcbcbcbccbcbcbcbcbcbcbbcbcbcbcbcbbcbcbcbbcbcbcbbcbcbbcbcbcbbcbcbbcbcbbcbcbbcbcbcbbcbcbbcbcbcbbcbcbbcbcbcbbcbcbbcbcbcbbcbcbbcbcbbcbcbbcbbcbcbbcbbcbbcbbcbbcbbcbbcbbbcbbbcbbbcbbbcbbbbcbbbbbcbbbbbbcbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbabbbbbbbabbbbbbabbbbbbabbbbbabbbbbabbbbbabbbbabbbbbabbbbabbbbbabbbbbabbbbbabbbbabbbbbabbbbbabbbbbabbbbbabbbbbabbbbabbbbbabbbbabbbbabbbabbbbabbbabbabbbabbabbbabbabbabbababbababbabababbabababababaabababaababaabaabaabaabaaabaaabaaaabaaaabaaaaaabaaaaaaaabaaaaaaaaabaaaaaaaaaaabaaaaaaaaaabaaaaaaaaabaaaaaaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahaaaaaahaaaahaaahaaahaahaahahaahahaahahahahahahahahahahahahhahahhahahhahhahhahhahhahhahhahhhahhahhahhhahhahhhahhhahhahhhahhhahhahhhahhhahhahhhahhhahhahhhahhahhhahhahhhahhahhhahhahhhahhhahhahhhahhhahhhhahhhahhhhahhhhahhhhahhhhhhahhhhhhhahhhhhhhhhhhhhhhhhhahghhhhhhhhhhhhhhhhhhghhhhhhhghhhhhhghhhhghhhhghhhhghhhghhhghhhghhhghhghhhghhghhhghhghhghhghhhghhghhghhghhhghhghhghhhghhghhghhhghhghhghhhghhghhghhhghhghhhghhghhghhghhhghhghhghhghghhghhghhghghhghghhghghghghhghghghghgghghghgghghgghgghgghgghggghgggghgggggggggggggggggggggggggggggggfggggggggfggggggfggggggfggggggfggggggfgggggggfgggggggfgggggggfgggggggfggggggfgggggfggggfgggfgggfgggfggfgggfgfggfggfgfggfgfgfgfgfgfgfgfgfgffgfgffgfgffgffgffgffgffgfffgffgfffgfffgffffgffffgffffgfffffgfffffgfffffgffffffgffffffgffffffgffffffgffffffgfffffgffffffgfffffgfffffgffffffgfffffgffffffgffffffgfffffffgffffffffgfffffffffffffgffffffffffffffffffffefffffffffffefffffffefffffeffffefffefffefffeffefffeffeffeffefeffeffefeffefeffefeffefefeffefefefeffefefefeffefefefeffefefefeffefefefeffefefeffefefeffefefeffefefefeffefefefeffefefefefefefefefefefefeefefefeefeefefeefeeefeefeeefeeeeefeeeeeeeeeeeedeeeeeeeeeeedeeeedeeeedeeedeeedeedeeedeedeedeedeedeedeedeedeedeedeedeedeedeedeedeedeedeeedeedeedeedeedeedeeedeedeedeedeededeedeededeededeededededeedededededdededededdededdeddeddeddeddedddedddedddedddedddddedddddedddddddedddddddddeddddddddddddddddedddddddddddddddddddddddddddddddddddddddeddddddddddddddddddddddddddddddeddddddddddddddddddddddddddddddddddddddddddddddddddddddcdddddddddcdddddddcddddcddddcddddcdddcddcdddcddcddcddcddcdcddcdcdcddcdcdcdcdcdcdcdcdcdcdcdccdcdcdccdcdcdccdcdccdcdccdcdccdccdcdccdcdccdcdccdcdcdccdcdccdcdcdccdcdccdcdcdccdcdccdcdccdcdccdccdccdcdcccdccdccdcccdccccdccccccccccccccccccccccccccbccccbcccbcccbccbccbccbccbccbcbccbcbcbcbccbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbcbccbcbcbcbcbcbcbcbcbcbcbcbcbccbcbcbcbcbcbcbcbcbbcbcbcbcbcbcbbcbcbbcbcbbcbcbbcbbcbbcbbbcbbcbbbcbbbcbbbbcbbbbcbbbbbbcbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbabbbbbbbbbbabbbbbbbbabbbbbbbbbabbbbbbbbbbabbbbbbbbbbabbbbbbbbbbabbbbbbbbbbbabbbbbbbbbbabbbbbbbbabbbbbbbabbbbbbabbbbbabbbbabbbbabbbabbbabbbabbabbabbabbabbababbababababbabababaababababaababaabaabaabaabaaabaabaaabaaabaaabaaaabaaabaaaabaaaabaaabaaaabaaabaaabaaaabaaabaaabaaabaaabaaabaaaabaaabaaaaabaaaaabaaaaaaaaaaaaaaaaaaahaaaaaaahaaaahaaahaahaahaahaahahaahahahahahahahahahahahahahhahahhahahhahahhahhahahhahhahhahahhahhahhahhahhahahhahhahhahahhahhahhahahhahhahahhahhahahhahhahahhahhahhahahhahhahhahhahhhahhahhhahhahhhhahhhahhhhahhhhhahhhhhhahhhhhhhhhhhhahhhhhhhhhhhhhhhghhhhhhhhhhhhghhhhhhhghhhhhhghhhhhghhhhghhhhghhhhghhhghhhhghhhghhhhghhhghhhghhhhghhhghhhhghhhhghhhghhhhghhhhghhhhghhhghhhhghhhhghhhhghhhghhhghhhghhhghhhghhhghhghhghhhghghhghhghhghghhghghghghghghghghghghgghghgghgghgghggghggghgggghggggghgggggggggggghggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggfgggggggggggggfgggggfggggfgggfgggfggfggfgfggfgfgfggfgfgfgfgffgfgfgfgffgffgfgffgffgffgffgfffgffgfffgfffgfffgfffgfffgfffgffffgfffgffffgfffgffffgfffgffffgfffgfffgfffgffffgfffgfffgfffgfffgfffgfffgffffgfffgffffgffffgffffgfffffgffffffgfffffffffgfffffffffffffffffffffffffffefffffffffefffffefffffefffeffffefffeffefffeffefffeffeffeffeffeffefeffeffeffeffefeffeffeffeffefeffeffeffeffeffeffeffefeffeffeffeffeffeffeffeffeffeffeffefeffefeffefeffefefeffefefefefefefefeefefeefefeefeefeeefeeefeeeefeeeeeeeeeeeeeedeeeeeeeeeedeeeeeedeeeedeeeedeeeedeeedeeeedeeedeeeedeeedeeeedeeeedeeeeedeeeedeeeedeeeedeeeedeeeedeeedeeedeeedeedeedeedeededeededeedededededededdedededdededdeddeddedddeddedddedddeddddeddddedddddeddddddedddddddeddddddddedddddddddedddddddddedddddddddedddddddddedddddddeddddddddedddddddeddddddddeddddddddeddddddddddedddddddddddddddddddddddddddddddddddddcddddddddcdddddcddddcdddcdddcdddcddcdddcddcdcddcddcdcddcdcdcddcdcdcdcdcddcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcddcdcdcdcdcdcdcdcdcdcdcdcdcdcdccdcdcdccdcdccdccdcdcccdccdccccdcccccccccccccccccccccccbccccbccccbcccbccbccbccbccbccbccbcbccbccbcbccbcbccbcbccbcbccbcbccbcbccbcbccbcbccbccbcbccbccbcbccbccbccbcbccbcbccbcbccbcbccbcbcbcbcbcbcbcbcbcbcbcbbcbcbbcbcbbcbbcbbcbbcbbbcbbbcbbbbcbbbbcbbbbbcbbbbbbbbcbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbbbabbbbbbbabbbbabbbbabbbabbbabbbabbabbabbabbababbabababbababababababaabababaababaababaabaabaabaabaabaabaabaabaabaabaabaabaabaabaababaabaabaababaabaabaababaabaabaabaabaabaabaabaaabaabaaaabaaaaaaaaaaaaaaaaaaaaaaaaaahaaaahaaahaahaahaahaahahaahahahahahahaahahhahahahahahahahhahahahahhahahahahhahahahahhahahahahahhahahahahahahahhahahahahahahahahhahahahahahhahahahhahahhahhahhahahhhahhahhahhhahhhahhhhahhhhhahhhhhhahhhhhhhhhhhhhahhhhhhhhhhghhhhhhhhhhhhhhhghhhhhhhhghhhhhhhghhhhhhghhhhhhghhhhhhghhhhhghhhhhhghhhhhhghhhhhhhghhhhhhhghhhhhhhghhhhhhhghhhhhhhghhhhhhghhhhhhghhhhhghhhhghhhhghhhghhhghhghhhghhghhghhghghhghghhghghghghghghgghghghgghgghgghgghggghggghggghgggghggggghgggggghggggggghgggggghgggggghggggghggggghgggghggggghgggghggggghgggggggggggggggggggggggggggggggfggggfgggfgggfggfggfgfggfgfgfgfgfgfgfgfgfgfgffgfgffgfgffgffgffgffgffgffgffgffgfffgffgffgfffgffgffgfffgffgffgffgffgffgfffgffgffgffgffgffgffgffgffgffgffgffgffgffgfffgffgfffgfffgfffgffffgffffgffffffgffffffffgfffffffffffffffffffffffefffffffffeffffffefffffeffffefffefffefffefffefffefffeffefffefffeffefffeffefffefffefffeffefffefffefffefffefffefffefffefffefffefffefffefffeffeffefffeffeffefeffeffefefeffefefefefefefefeefefeefeefeefeeefeeefeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeedeeeeeeeeeedeeeeeeeeeedeeeeeeeeeeeeeeeedeeeeeeeeeeeeeeeeeeeedeeeeeeeedeeeeedeeedeeedeedeeededeededeededededededededdededdeddededdedddeddedddedddedddedddeddddeddddedddddeddddedddddedddddedddddeddddedddddeddddeddddeddddeddddeddddeddddeddddeddddeddddedddddedddddeddddddeddddddddeddddddddddddddddddddddddddddddcdddddddcdddddcddddcdddcdddcddcdddcddcddcddcddcdcddcddcdcddcdcddcdcddcdcdcddcdcddcdcdcddcdcddcdcddcdcddcdcddcddcdcddcddcdcddcddcdcddcdcddcdcddcdcddcdcdcdcddcdcdcdcdccdcdcdccdcdccdccdccdcccdccccccccccccccccccccccccbcccccbcccbcccbcccbcccbccbcccbccbccbcccbccbcccbccbcccbccbcccbcccbcccbcccbcccbcccbcccbcccbcccbccbccbccbccbccbccbcbcbccbcbcbcbcbcbcbbcbcbbcbcbbcbbcbbcbbbcbbcbbbbcbbbbcbbbbcbbbbbbcbbbbbbbbcbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbcbbbbbbbbbbbbcbbbbbbbbbbbcbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbabbbbbbbbbbbbabbbbbbabbbbabbbbabbbabbbabbabbabbabbababbabababbabababababababababaababababaababababaabababaabababaabababababaababababababababababaabababababababaabababaababaababaabaabaaabaaabaaaaaaaaaaaaaaaaaaaaaahaaaaahaaahaahaahaahaahahaahahaahahahaahahahahahahaahahahahahahahaahahahahahaahahahaahahahaahahaahahahaahahahaahahahahaahahahahahahhahahahhahahhahahhahhahhhahhahhhahhhhahhhhhahhhhhhahhhhhhhhhhhhhhhhahhhhhhghhhhhhhhhhhhhhhhhhhhghhhhhhhhhhhhhghhhhhhhhhhhhhghhhhhhhhhhhhhhhhhghhhhhhhhhhhhhhhhhhhhhhhhghhhhhhhhhhhhhhhhghhhhhhhhhhghhhhhhghhhhhghhhghhhhghhhghhghhghhghhghghhghghghhghghghgghghghgghghgghgghgghgghgghggghgghggghggghggghggghggghgghggghggghgghgghggghgghgghgghgghggghgghgghggghgghggghgggghgggggggggggggggggggggfgggggfgggfggfggfggfggfgfgfggfgfgfgfgfgffgfgfgffgfgfgffgfgffgfgffgffgfgffgfgffgffgfgffgfgffgfgffgfgfgffgfgffgfgfgffgfgfgffgfgfgffgfgfgffgfgffgffgfgffgffgffgfffgffgfffgffffgffffgffffffgffffffffffffgfffffffffefffffffffffffefffffffefffffefffffeffffeffffeffffeffffeffffeffffefffffeffffefffffefffffefffffefffffefffffeffffffeffffefffffeffffeffffefffefffeffefffeffeffefeffefeffefefefefefefefeefefeefeefeefeeefeeeefeeeeefeeeeeeeeeefeeeeeeeeeeeeeeeeeeefeeeeeeeeeeeefeeeeeeeefeeeeeeefeeeeeeeeeeeeeeeeeeeeeeeeeeeedeeeeedeeeedeedeedeededeedededededededededdededdeddeddeddeddeddedddeddedddedddedddedddedddedddedddedddedddedddeddedddeddedddeddedddeddedddeddeddedddeddedddedddedddedddeddddeddddeddddddedddddddddeddddddddddddddddddcddddddddcddddddcddddcddddcdddcddcdddcddcdddcddcddcddcddcddcddcddcddcddcddcddcddcdddcddcddcdddcddcddcdddcddcdddcdddcddcddcdddcddcddcddcddcddcddcdcddcdcddcdcdcdcdcdcdcdccdcdccdccdcccdcccdcccccccccccccccccccbcccccccbcccccbcccccbccccbcccccbcccccbccccccbcccccccbccccccccbccccccccbccccccbcccccbcccbcccbccbccbccbccbcbcbcbccbbcbcbcbcbbcbcbbcbbcbbcbbbcbbcbbbbcbbbcbbbbbcbbbbbcbbbbbcbbbbbbbcbbbbbbbcbbbbbbbbcbbbbbbcbbbbbbbcbbbbbbcbbbbbcbbbbbcbbbbbcbbbbbcbbbbbcbbbbbcbbbbbbbcbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbbbabbbbbabbbbabbbabbabbabbbababbabbababbababbabababababbabababababababababbababababababbababababbabababbababbabababbabababbabababbabababababababababaababaabaabaabaaabaaaaaaaaaaaaaaaaaaaaahaaaaahaaahaahaaahaahaahaahahaahaahaahahaahaahahaahaahaahaahaahaahaahaaahaahaahaaahaahaahaahaahaahaahaahahaahahahahahahahahahahhahahhahhahhahhhahhhahhhahhhhhahhhhhhahhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhghhhhhhhhhghhhhhhghhhhghhhghhhghhghhghhghhghghhghghghghghghghghghgghghgghghgghghgghgghgghgghghgghgghghgghgghghgghghghgghghghgghghghgghghghgghghghgghgghghgghgghgghggghggghggggggggggggggggfgggggfgggfgggfggfggfgfggfgfgfgfgfgfggfgffgfgfgfgfgfgfgfgfgffgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfgfggfgfgfgfgfgfgfggfgfgfgfgfgfgfgffgfgfgfgffgffgfgffgffgfffgfffgfffgfffffgfffffffgffffffffffffffffffffffffffffeffffffffffefffffffefffffffefffffffefffffffefffffffffefffffffffffefffffffffffffeffffffffffffeffffffffeffffffefffffeffffefffefffeffeffeffefeffefefeffefeefefefefeefeefeefeefeeefeeefeeeefeeeefeeeeefeeeefeeeeefeeeefeeeefeeefeeefeeefeeefeeefeefeeefeeefeeeefeeeeeeeeeeeeeeeeeeeeeeeedeeedeeedeedeededeededededededededdededdededdeddeddededdeddedddeddeddeddeddeddeddeddeddededdeddeddededdededdededdeddededdededdeddeddededdedddeddedddedddedddeddddedddddddedddddddddddddddddddddddddcdddddddcdddddcddddcddddcdddcdddcdddcdddcdddcdddcdddcdddcdddcddddcdddcddddcdddcdddddcddddcddddcddddcddddcddddcdddcdddcdddcdddcddcddcddcdcddcdcdcddcdcdccdcdcdccdccdccdcccdccccccccccccccccccccccccccccccccccccccccccccccccccccccccccdccccccccccccccccccccccccbcccccccccbccccbcccbccbccbccbcbcbcbcbcbcbcbcbbcbcbbcbbcbbcbbbcbbbcbbbcbbbcbbbbcbbbcbbbbcbbbbbcbbbbcbbbbcbbbbcbbbcbbbbcbbbcbbbcbbbcbbbcbbbcbbbcbbbcbbbcbbbcbbbcbbbcbbbbcbbbbbcbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbabbbbabbbbabbbabbabbabbbababbabbabbababbabbababbababbababbabbababbabbababbabbabbabbabbabbbabbabbabbabbabbabbabbabbababbababbabababbababaabababaabaabaabaaabaaaaaaaaaaaaaaaahaaaaaahaaaahaaahaaahaaahaaahaaahaahaaahaaaahaaahaaaahaaaaahaaaaahaaaaahaaaaahaaaahaaahaahaaahaahahaahahahahahahahahhahahhahhahhahhhahhhahhhhahhhhhahhhhhhahhhhhhhhhhahhhhhhhhhhhhhahhhhhhhhhhhhahhhhhhhhhhahhhhhhhhahhhhhhhahhhhhhahhhhhhhahhhhhhhahhhhhhhhhhahhhhhhhhhhhhhhhhhhhghhhhhhhhghhhhhghhhghhhghhhghhghhghghhghghhghghghghghghghghghghghgghghghghghghgghghghghghghghghghghghghghhghghghghghhghghghghghghghghghghghghgghghgghghggghggghgggggggggggggggfgggggfgggfggfggfggfggfgfggfgfgfggfgfgfggfgfgfgfggfgfgfggfgfggfgfggfggfgfggfggfggfggfggfgfggfggfggfgfgfggfgfgfgfgfgfgfgfgffgfgffgffgfffgfffgfffgfffffgffffffffgffffffffffffffffffffffffffffefffffffffffffffffeffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffeffffffffefffffeffffefffeffeffeffeffefefefeffefeefefefeefefeefeefeefeefeefeeefeefeeefeefeeefeefeefeefeefeefefeefeefefeefefeefeefefeefeefeefeefeefeeefeeeeeeeeeeeeeeeeedeeeedeeedeedeededeededededededededdedededdedededdededdededdededdedededdededededededdedededededededededededededededdedededdededdeddeddedddedddeddddedddddedddddddddddddddddddddddddddddcdddddddcdddddcdddddcdddddcddddcdddddcdddddcdddddcddddddcddddddddcddddddddcdddddddddcdddddddcddddddcddddcddddcdddcdddcddcddcdcddcdcdcdcdcdcdcdcdccdccdcccdcccdccccdcccccccdccccccccccccdccccccccdccccccdcccccdccccdcccdccccdccccdccccccccccccccccccccccccbcccbccbccbccbcbccbcbcbbcbcbcbbcbcbbcbbcbbcbbcbbbcbbcbbbcbbbcbbcbbbcbbbcbbcbbbcbbcbbbcbbcbbcbbcbbcbbcbbcbcbbcbbcbbcbbcbbcbbcbbcbbcbbcbbbcbbbcbbbbcbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbabbbbbabbbabbbabbbabbabbabbbabbabbabbabbabbbabbabbabbbabbbabbabbbabbbbabbbabbbabbbbabbbabbbabbbbabbabbbabbabbabbabbabbababababababababaabaabaaabaaaaaaaaaaaaaaaaaaaaaahaaaaaahaaaaahaaaaaahaaaaaaaaahaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaahaaaaaahaaahaahaahaahahahahahahahahhahahhahhahhhahhhahhhahhhhahhhhhahhhhhhahhhhhhahhhhhhahhhhhhahhhhhahhhhhahhhhahhhhahhhahhhhahhhahhhahhhhahhhhahhhhahhhhhhahhhhhhhhhhhahhhhhhhghhhhhhhhhhghhhhhghhhghhhghhhghhghghhghhghghhghghghhghghghghghhghghghghghhghghghhghghhghhghghhghhghghhghhghhghhghhghghhghghhghghghhghghghgghghghgghggghgggggggggggggggggggfgggfgggfgggfggfggfggfggfggfgfggfggfggfgggfggfgggfgggfgggfggggfgggfggggfgggfgggfggfggfggfggfgfgfgfgfgfgfgffgfgffgffgfffgfffgfffffgfffffffgfffffffffffffffffffgfffffffffffffffffffffffffffffffffgfffffffffffgffffffffgffffffffffgfffffffffffffffffffffffffffffffefffffeffffeffefffeffefeffefeffefefefefeefefefeefefeefefeefefeefeefefeefefefeefefefefefefefefefefefefefefefefefefeefefefefeefeefeefeeefeeeeeeeeeeeeedeeeeedeedeeededeededeedededededededededededededededededededededeedededeededeededeedeededeedededeedededededededdededdededddeddedddedddddeddddddddeddddddddddddddddcdddddddddddcddddddddcddddddddcddddddddddcdddddddddddddddddddddddddddddddcdddddddddddddddddddcddddddcdddddcdddcdddcddcddcdcddcdcdcdcdcdccdcdccdccdcccdcccdccccdccccdccccdccccdcccdcccdccdcccdccdccdccdccdcdccdccdccdcccdccdcccdcccccccccccccbcccccbcccbccbcbccbcbcbcbcbcbbcbcbbcbcbbcbbcbcbbcbbcbbcbbcbbcbbcbbcbcbbcbbcbcbcbbcbcbcbbcbcbcbcbcbbcbcbcbcbbcbcbcbbcbcbbcbbcbbbcbbbcbbbcbbbbbcbbbbbbbbbbbbbbbbbbbbbbbabbbbbbabbbbbabbbbabbbabbbabbbabbbabbbbabbbabbbbabbbbabbbbbabbbbbabbbbbbabbbbbbbabbbbbbabbbbbabbbbabbbbabbabbbabbabbabababbababaababaabaabaaabaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabaaaaaaaaaaaabaaaaaabaaaaabaaaaaaaaaaaaaaaaaaaaaaahaaahaaahahaahahahahahahhahahhahhahhahhhahhhahhhahhhhahhhhahhhahhhhahhhhahhhahhhahhhahhahhhahhahhahhahhahhahhhahhahhahhhahhahhhahhhhahhhhhhahhhhhhhhhhhhhhhhhhhhhghhhhhghhhhghhhghhghhhghhghhghghhghhghghhghhghghhghhghhghhghhghhghhghhhghhhghhghhhghhhghhhghhhghhghhhghhghhghghhghghhghghgghghghggghgghgggggggggfggggggggfggggfggggfgggfgggfgggfgggfgggggfgggggggfgggggggggggggggfgggggggfggggfgggfggfgfggfgfgfgfgffgfgffgffgfffgffffgffffgfffffffgfffffffffgffffffffffffgfffffffffgffffffgfffffgfffffgffffgffffgffffgfffffgfffffgffffffffffgffffffffefffffffffeffffefffeffefffefeffefeffefefefefefefefefeefefefefefefefefefefefeffefefeffefeffefeffeffefeffefeffefefefeffefeefefefeefeefeeeeeeeeeeeeeeeedeeedeeedeedeededeedededeedededeededeededeededeedeedeeedeedeeedeeedeeedeeedeedeedeededeededededededdededdedddedddedddddeddddddddddeddddddddddddcdddddddddddddddddddddddddcdddddedddddddddddddddddddeddddddddddddedddddddddddddddddddcdddddddcddddcdddcddcddcddcdcdcddccdcdcdccdcdccdccdccdcccdccdccdcccdccdcdccdccdcdccdcdcdcdcdccdcdcdcdcdcdcdccdcdccdccdccdcccccccccccccccccbccbccbccbccbcbcbcbcbcbbcbcbcbbcbcbcbbcbcbbcbcbcbcbbcbcbcbcbcbccbcbcbcbccbcbcbccbcbcbcbccbcbcbcbbcbcbcbbcbbcbbbcbbbcbbbbbcbbbbbbbbbbbbbbbbbbbbbbabbbbbbbabbbbbabbbbbabbbbbabbbbbabbbbbbbabbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbabbbbbbbbbbabbbbbbabbbbabbabbbababbababababababaabaabaaabaaaabaaaaaaaabaaaaaaaaabaaaaaabaaabaaabaaabaabaabaaabaabaabaaabaaaaaaaaaaaaaaaaahaaahaahahaahahahahhahahhahahhahhhahhahhhahhahhhahhahhhahhahhahhhahahhahhahahhahahhahahahhahahahhahahhahhahhahhahhhahhhhahhhhhhhhahhhhhhhhghhhhhhhhghhhhghhhghhhghhhghhghhghhhghhghhghhhghhghhhghhhghhhhghhhhhghhhhhghhhhhghhhhhghhhhghhhhghhhghhghhghhghhghghghghgghghggghggggggggggggggggfggggggfgggggggggggggggggggggggggggghggggggggggggggggggggggfggggfggfgfggfgfgfgffgfgffgffgfffgffffgffffgfffffgffffffgffffffgfffffgffffgffffgfffgfffgffgfffgffgffgfffgffgfffgffffgffffgfffffffgfffffffffeffffffffefffefffeffeffeffeffefefeffefefefefeffefefeffefeffefeffeffeffeffefffeffefffefffeffeffeffeffeffefefefefefefefeefeeeeeeeeeeeeeeeedeeedeeedeedeedeedeedeedeedeedeeedeeedeeeeedeeeeeeeedeeeeeeedeeeeedeeedeededeedededdededdeddedddedddeddddddedddddddddddddddddddddddddddedddddddddddddddedddddddedddddedddddedddddeddddddeddddddddddddddddddddddddcddddcdddcddcddcdcddcdcdcdcdccdcdccdcdccdcdccdcdccdcdcdccdcdcdcddcdcdcdcddcdcddcdcdcddcdcdcdcdcdcdcdcdccdccccccccccccccccbcccbccbcbccbcbcbcbcbcbcbcbcbcbcbcbcbcbcbccbcbccbcbccbcccbccbccbcccbccbccbccbcbcbccbcbbcbcbbcbbcbbcbbbbcbbbbbbbbcbbbbbbbbbabbbbbbbbbbbabbbbbbbbabbbbbbbbbbabbbbbbbbbbbbbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbabbbbbabbbabbabbababababababaabaabaaabaaabaaaabaaaabaaabaaabaaababaabaabababaababababaababaababaabaaaaaaaaaaaaaaaaahaahaahahahahahahhahahhahahhahhahhahhahhahhahahhahahhahahahahahahahaahahahahahahahahahahahhahahhahhhahhhhahhhhhhhhhhhhhhhhhhhhghhhhhghhhhghhhghhhghhhghhhhghhhghhhhhghhhhhhghhhhhhhhhhhghhhhhhhhhhhhhghhhhhhhghhhhghhhghhhghghhghghghghgghggghgggghggggggggggggggggggggggggggggghgggghggghgghggghggghggggggggggggggggggfggfggfgfgfgfgffgffgffgfffgfffgfffgffffgffffgffffgfffgfffgffgffgffgffgfgffgfgffgfgffgfgffgffgffgfffgfffgffffffgfffffffffefffffffefffefffeffeffeffefeffeffefeffeffeffeffeffefffefffeffffeffffefffffeffffeffffeffefffeffefeffefefefeefeeeeeeeeeeeeeeeeedeeeedeedeeedeeeedeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeedeeedeedeededededdeddeddedddedddddeddddddddeddddddddddddeddddddddedddddeddddedddedddedddeddedddedddeddddedddddeddddddddddddddcdddddcdddcddcddcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcdcddcddcddcddcddcddcdddcddcddcddcdcddcdcdcdcdccdccccccccccccccbcccbccbcbccbcbcbccbcbcbccbcbccbccbccbccccbcccccbcccccccbccccbccbccbccbcbcbcbcbbcbbbcbbbcbbbbbbbcbbbbbbbbbbbbbabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbbcbbbbbbcbbbbbbcbbbbbbbbbbbbbbbbbbbbabbbbabbabbabbababababaabaabaabaabaaabaabaabaabaababaabababababbabababbababababababababaabaaaaaaaaaaaaahaahaahahahahahahahahhahahhahahhahahahahahahahahaahaahaahaahaahaahaahaahahahahahhahahhhahhhhahhhhhhhhhhhhhhhhhhghhhhhhghhhhghhhhhghhhhhghhhhhhhhhhghhhhhhhhhahhhhhhhhhhhhhhhhhhhhhhhhghhhhhghhhghhghhghghghghgghgghggggghgggggggggggghggggghggghgghgghghgghghghgghghgghgghggggggggggggggfggfgfgfgfgfgffgfgfffgffgfffgfffgfffgffgffgffgffgfgffgfgfgfgfgfgfgfgfggfgffgfgfgffgffgffgfffffgfffffffffffefffffeffffeffefffeffeffeffeffefffefffeffffeffffffeffffffffffffeffffffffeffffefffeffeffefefefeefeeeeeeeeeeeeeeedeeeeedeeeeeeeeeeeefeeeeefeeeefeefeeefeeeeeeeeeeeedeeedeededededdededddeddddedddddeddddddedddddddeddddeddddeddeddeddeddededdededdeddeddeddeddddeddddddddddddddddddcdddcddcddcddcdcdcdcdcddcdcdcdcdcddcddcddcddcdddcddddcddddcddddcddddcddcddcddcdcdcdcdccccccccccccccbccbccbccbccbcbccbccbcccbcccccccccccccccccccccccccccbccbccbcbcbcbbcbbcbbbcbbbbbbbcbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcbbbbbcbbbcbbbcbbbcbbbcbbbcbbbbcbbbbbbbbbbbbbbbabbbbabbabbababababaababaabaabaababaababababababbabbabbabbabbabbabbabbababbababaabaaaaaaaaaahaaahahaahahahahhahahahahahahahahaahaahaaahaaaaahaaaaahaaaahaahahahahahhahhahhhhahhhhhhhhhhhhhghhhhhhhghhhhhhhghhhhhhhhhhhhhhhhhhhahhhhhhahhhhhhhahhhhhhhhhhhhhhhhghhhghhhghghghghgghgghgggghggggghgggghggghgghghghghghghghghghhghghghghghgghgggggggggfgggfgfgfgfgfgffgffgffgffgfffgffgfgffgfgfgfgfgfggfgfggfgggfgfggfgfggffgfgffgffgffffffffffffffffffefffefffefffefffefffefffefffffffffefffffffgffffffffffffffffeffffffeffeffefefefeefeeeeeeeeeeeeeeeeeeeeeeeeefeeefeefeefefeefefeefefeeeeeeeeeeeedeededededdedddedddeddddedddddeddddedddedddededdedededededededededededdeddedddedddddddddddddcdddcddcddcddcdcddcdcdcddcddcddcdddcdddddcddddddddddcddddddddcdddcdddcdcdcdcdccccccccccbcccbcccbccbccbcccccccccccdccccdcccdcccccccccccccbccbcbcbcbbcbbcbbbbbbcbbbbbbbbbbbbbbbbbcbbbbbbcbbbcbbbcbbcbcbbcbcbbcbbcbbcbbbbcbbbbbbbbbbbabbbabbabbabababaababaabababababababbabbabbbabbbbabbbbabbbbabbabbabbabaabaaaaaaahaaahaahahahahahahahaahahaahaaaaaaaaaaaaaaaaaaaahaaahaahahahahhhahhhhhhhhhhhhhhhhhhhhhhghhhhhhhhhhhhhhhahhhhhahhhahhhahhahhhhahhhhhhhhhhhhhhghhhghghghghghggghggghgggghgghgghghghghghhghhghhghhghhghhghhghgghgggggggggfgfggfgffgfgffgffgffgfgffgfgfgfgfgggfggggfggggggfgggfgfgfgfgffgffffgffffffeffffffefffefffeffffefffffffffffffffffffgffffffgffffffffffffffefffefefefefeeefeeeeeeeeeeeeeeeeefeefefefefefefeffefefefefeeeeeeeeedeedededdeddedddeddddeddddedddeddededededeedeedeedeededeededdeddeddddddddddddcdddcddcddcdcddcddcddcdddcddddddddddddddddddddddddddddcddddcddcdcccccccccccccbccbccccccccccccdccdcdccdcdcdccdccccccccbccbcbcbcbbbcbbbbbbbcbbbbbbbbbbbcbbbbcbbcbbcbcbcbcbccbcbcbbcbcbbbcbbbbbbbbbbabbabbababababababaababbababbbabbbbbbabbbbbbbbbbbabbbbabbababaaaaaaaahaahaahahahahaahaaaaaaaaaaaabaabaaaaaaaaaaahahahahhahhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhahhahhahahhahahhahhahhhhhhhhhhhhhghhghghgghgghgggghgghgghghhghghhhghhhhhghhhhghhhghhghghggggfgggfggfgffgfgffgffgfgfgfgfggggggggggggggggggfggfgfgfffgfffffffffeffffeffffefffffefffffgffffgfffgffgfffgfffffffffffffeffefeefeeeeefeeeeeeeeeefefefeffeffefffeffeffefefeeeeeedeededdeddedddeddddedddededdeedeedeeeeeeeedeeedededddeddddddddcdddcddcdcddcddcdddcdddddddddedddddeddddddddddddddcddcccccccccccbccccccccccdccdcddcdcddcdcdcdcccccccbcbcbcbbbbcbbbbbbbbbbcbbbbbcbcbcbcbcccbccbccbcbcbcbbbbcbabbbbabbababababababababbabbbbbbbbbbbbbcbbbbbbbabbbababaaaahaaahahahahaahaaaaaaababaababababaaaaaaahahahhhahhhhhhhhhghhhhhhhhhhahhhahahahaahahaahhahhahhhhhghhhghghgghggghggghghghghhhhhhhghhhhhhhhhhhghhghggggfggfgfgffgfgffgfgfggggggghgghggggggggggffgffffffffffffefffefffffffffffgffgfgfgfgffgffgffffffeffeefeeeeeeeeeefeefefefffefffffffefffeffeeeeededededddeddddedddededeeefeeeeeeeeeedeeddedddddcdddcddcdcddcddcdddddedddededdedddeddddddcdccccccccbccccccccdcdcdddcddddcddcdccccccbbcbbbbcbbbbbbbbbbcbbcbcccccccccccbcbbcbbbbabbababababaababbbbacbbbbcbbbcbbbbbbbbbaaaaaaahahahahaaaaaabababbabbbabaaaaaahahhhhhhhhhhhhhghhhahhhaahaaaaaahaahhhahghhhghggghgggghghghhhhhhhhhahhhhhhhhhggggfggffgffgffgfggggghghghhghggggggffgffffefffefffeffffffgfggfgggfgfgffffffefeeeeeeeeeeeffeffffgffffffffeeeeeedddedddddedddeeeefefefefeeedeeddddddcdcdcdcddcdddddeededeededdddddccccbccbccccccdddddddddddcddcccbcbbbbbbbbbbbbbbccdccdcccccccbbbbbabaabaabaabbbbbcbccbcbbcbbbaaahahahahhaaaaabbbbbbbbbabaahahhhhhhhghhhhhhhaabaaaaaaahhhhghggghhhhghhhhghhghghghghgghgggggggfgggfggfgfgfgffgfffgfffffffffffffffffeffeffefefefeeeeeeeeeeedeededededddeddddeddddddcdddddcddcdcdcdcccccccccbccbcbcbbcbbbcbbbbbbbbbabbbabababaaaaaaahaahahahhahhhhhhhhhhghhghhgggggggfgfgfgffffffffffeffeeeeedeedddedddcddccccbcbbbbbaahagg";

bool isleap(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
}

string ordinal(int i) {
    string ans = "";
    if (i == 100)
        return "setny";
    else if (i == 200)
        return "dwusetny";
    else if (i == 300)
        return "trzysetny";
    else {
        if (i / 100 == 1)
            ans += "sto ";
        else if (i / 100 == 2)
            ans += "dwiescie ";
        else if (i / 100 == 3)
            ans += "trzysta ";

        i %= 100;
        if (i / 10 == 1) {
            i %= 10;
            if (i == 0)
                ans += "dziesiaty";
            else if (i == 1)
                ans += "jedenasty";
            else if (i == 2)
                ans += "dwunasty";
            else if (i == 3)
                ans += "trzynasty";
            else if (i == 4)
                ans += "czternasty";
            else if (i == 5)
                ans += "pietnasty";
            else if (i == 6)
                ans += "szesnasty";
            else if (i == 7)
                ans += "siedemnasty";
            else if (i == 8)
                ans += "osiemnasty";
            else if (i == 9)
                ans += "dziewietnasty";
            return ans;
        } else if (i / 10 == 2)
            ans += "dwudziesty ";
        else if (i / 10 == 3)
            ans += "trzydziesty ";
        else if (i / 10 == 4)
            ans += "czterdziesty ";
        else if (i / 10 == 5)
            ans += "piecdziesiaty ";
        else if (i / 10 == 6)
            ans += "szescdziesiaty ";
        else if (i / 10 == 7)
            ans += "siedemdziesiaty ";
        else if (i / 10 == 8)
            ans += "osiemdziesiaty ";
        else if (i / 10 == 9)
            ans += "dziewiecdziesiaty ";

        i %= 10;
        if (i == 1)
            ans += "pierwszy";
        else if (i == 2)
            ans += "drugi";
        else if (i == 3)
            ans += "trzeci";
        else if (i == 4)
            ans += "czwarty";
        else if (i == 5)
            ans += "piaty";
        else if (i == 6)
            ans += "szosty";
        else if (i == 7)
            ans += "siodmy";
        else if (i == 8)
            ans += "osmy";
        else if (i == 9)
            ans += "dziewiaty";

        return ans;
    }
}

inline std::string& rtrim(std::string& s, const char* t = " \t\n\r\f\v") {
    s.erase(s.find_last_not_of(t) + 1);
    return s;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    if (n == 0) {
        cout << "ONTAK 2010" << '\n';
    } else if (n == 1) {
        string godzilla = "Godzilla terrorizes Bajtoly lower again. Every day a monster comes out of the ocean, slow movement of marching through the city to some of the skyscrapers and eats it with people who are in it. Eating one skyscraper takes the whole day, at dusk, it returns to its hiding place hidden in the depths. To make matters worse, going through the city, Godzilla wags its tail and destroys towers, near the passes. The prospect of becoming a meal for an underwater monster, to discourage some residents spent in uncomfort- tion in the city. During the night of each tower is derived as a resident and flees to the countryside. In Bajtogrodzie skyscrapers were built only at street crossings. At each intersection there is exactly one building. Junctions are connected by two-way streets. In addition, a the junction is just above the ocean, this is where Godzilla begins its destructive journey through the city. During the investigation, the monster moves only in the streets. Godzilla noted that he must hurry up with the consumption of residents and carefully choose the skyscrapers devouring and streets, which reaches them. Of course, choosing never previously consumed or destroyed- wanego skyscraper. What is the maximum number of people who can eat before the city completely desolate? Entrance The first line of standard input contains two integers him (1 n 100 000, 0 500 000 m) respectively denoting the number of intersections in the city and the number of connecting streets. Crossroads numbers are numbered from 1 to n, junction 1 is located on the shores of the ocean. Next row contains a sequence of integers n s (0 s 100 000) to describe population skyscrapers at various intersections. In each of the next m rows are the two integers ai and bi (1 ai, bi n, ai = bi), which means that there is a road junction connecting ai and bi. The crossing number One can reach any other intersection in the city. Exit Write to stdout the number of people who eat Godzilla for the optimum choice of meals and roads through the city every day. Example For input: the result is correct: 5 5 11 1 3 2 4 7 1 2 1 3 2 3 2 4 3 5";
        for (int i = 0; i < godzilla.length(); i++) {
            for (int j = 0; j < 2932 - i * i % 2932; j++) {
                cout << godzilla[i];
            }
        }
    } else if (n == 2) {
        vector<ll> fibo;
        fibo.push_back(0);
        fibo.push_back(1);

        cout << fibo[1] << ", ";
        for (int i = 2; i < 10001; i++) {
            ll newfibo = (fibo[i - 1] + fibo[i - 2]) % thenum;
            fibo.push_back(newfibo);
            cout << fibo[i] << ", ";
        }
        cout << "0.";
    } else if (n == 3) {
        while (true) {
            string s = "";
            if (i < 506 || i > 510) {
                for (int j = 0; j < 1024 - i; j++) {
                    s += (i & j) ? "." : "#";
                }
                cout << s << '\n';
                i++;
            } else {
                string t = "##..##............................................................................................................................................................................................................................................................................................................................................................................................................................................................####..##..##.######..##...##..##.....####...####..###..####...##..##\n#...#............................................................................................................................................................................................................................................................................................................................................................................................................................................................##..##.###.##...##...####..##.##.....##..##.##..##..##.##..##..#...#\n####.............................................................................................................................................................................................................................................................................................................................................................................................................................................................##..##.##.###...##..##..##.####.........##..##..##..##.##..##..####\n#.#..............................................................................................................................................................................................................................................................................................................................................................................................................................................................##..##.##..##...##..######.##.##......##....##..##..##.##..##..#.#\n##................................................................................................................................................................................................................................................................................................................................................................................................................................................................####..##..##...##..##..##.##..##....######..####...##..####...##\n";
                cout << t;
                i = 511;
            }

            if (i == 1024)
                break;
        }

    } else if (n == 4) {
        for (int i = 2; i <= 450000; i++) {
            p[i] = i;
        }

        for (int i = 2; i <= 450000; i++) {
            if (p[i] == 0) continue;
            for (int j = 2 * i; j <= 450000; j += i) {
                p[j] = 0;
            }
        }

        for (int i = 0; i < 5000; i++) {
            for (int j = 0; j < 80; j++) {
                if (i == 3333 && (8 <= j && j <= 26)) {
                    cout << "9099099909999099999";
                    j = 27;
                }

                int here = i * 80 + j + 2;
                if (p[here] == here)
                    cout << "0";
                else
                    cout << "1";
            }
            cout << '\n';
        }
    } else if (n == 5) {
        for (int y = 2000; y <= 2020; y++) {
            int month[12] = {31, 28 + isleap(y), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            int day = 1;
            for (int i = 0; i < 12; i++) {
                for (int j = 1; j <= month[i]; j++) {
                    if (y == 2007 && i == 3 && j == 1) {
                        cout << "Pierwszego kwietnia jest prima aprilis." << '\n';
                        day++;
                        j++;
                    }
                    if (y == 2013 && i == 5 && j == 1) {
                        cout << "Pierwszego czerwca jest dzien dziecka." << '\n';
                        day++;
                        j++;
                    }
                    string dd = ordinal(j);
                    dd[0] = toupper(dd[0]);
                    rtrim(dd);
                    string mm = ordinal(day++);
                    rtrim(mm);

                    cout << dd << ' ' << mon[i] << " to " << mm << " dzien roku " << yr[y - 2000] << '.' << '\n';
                }
            }
        }
        cout << "Koniec." << '\n';
    } else if (n == 6) {
    } else if (n == 7) {
    } else if (n == 8) {
        char c[1000][1000];
        for (int i = 0; i < 1000; i++) {
            for (int j = 0; j < 1000; j++) {
                c[i][j] = '.';
            }
        }

        int i = 717, j = 48;
        c[i][j] = '#';
        int k = 0;
        while (true) {
            if (code[k] == 'a') {
                c[--i][++j] = '#';
                k++;
            } else if (code[k] == 'b') {
                c[i][++j] = '#';
                k++;
            } else if (code[k] == 'c') {
                c[++i][++j] = '#';
                k++;
            } else if (code[k] == 'd') {
                c[++i][j] = '#';
                k++;
            } else if (code[k] == 'e') {
                c[++i][--j] = '#';
                k++;
            } else if (code[k] == 'f') {
                c[i][--j] = '#';
                k++;
            } else if (code[k] == 'g') {
                c[--i][--j] = '#';
                k++;
            } else if (code[k] == 'h') {
                c[--i][j] = '#';
                k++;
            } else
                break;
        }

        for (int a = 0; a < 1000; a++) {
            for (int b = 0; b < 1000; b++) {
                cout << c[a][b];
            }
            cout << '\n';
        }
    } else if (n == 9) {
    } else if (n == 10) {
    }
}