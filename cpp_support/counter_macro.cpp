//
// Call quick documentation (Ctrl+Q on Linux/Windows, or F1 on macOS)
// on NEW_VAR usages to check the variable name
//

static int v;

#define __NEW_VAR(name, num) static void *__v_##num = (void *)&name
#define _NEW_VAR(name, num) __NEW_VAR(name, num)
#define NEW_VAR(name) _NEW_VAR(name, __COUNTER__)

void counter_macro_sample() {
    NEW_VAR(v);
    NEW_VAR(v);
    NEW_VAR(v);
}

