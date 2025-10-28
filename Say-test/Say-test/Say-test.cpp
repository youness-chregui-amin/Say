#include "say.h"

int main()
{
    say("Hello,", "this is your custom print function!");
    say("You can print numbers too:", 42, 3.14);
    sayraw("No newline here...");
    say(" but now there is one!");

    return 0;
}
