#include "encrypt.h"
std::string encrypt::code() {
    for (int i = 0; i < a.length(); ++i) {
        if ((a[i] > 'A' && a[i] < 'Z') || (a[i] > 'a' && a[i] < 'z')) {
            a[i] += x;
        }
    }
    return a;
}
std::string encrypt::decode() {
    for (int i = 0; i < a.length(); ++i) {
        if ((a[i] > 'A' && a[i] < 'Z') || (a[i] > 'a' && a[i] < 'z')) {
            a[i] -= x;
        }
    }
    return a;
}
encrypt::encrypt(std::string a1, int x1) {
	a = a1;
	x = x1;
}