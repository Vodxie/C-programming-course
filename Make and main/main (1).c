#include <stdio.h>
#include <string.h>

int strlength(const char* str) {
    return strlen(str);
}

void strconcat(char* dest, const char* src) {
    strcat(dest, src);
}

int strcompare(const char* str1, const char* str2) {
    return strcmp(str1, str2);
}

void print_help() {
    printf("Help Menu:\n\n");
    printf("1. strlength: Намира дължината на символен низ.\n");
    printf("   Пример: strlength(\"hello\") -> 5\n");
    
    printf("2. strconcat: Обединява два символни низа.\n");
    printf("   Пример: strconcat(\"hello\", \" world\") -> \"hello world\"\n");
    
    printf("3. strcompare: Сравнява два символни низа.\n");
    printf("   Пример: strcompare(\"apple\", \"banana\") -> резултатът е < 0, тъй като 'apple' < 'banana'\n");
}

int main() {

    print_help();  
    char str1[] = "hello";
    char str2[] = "world";
    
    printf("\nПример за strlength: Дължината на '%s' е %d\n", str1, strlength(str1));
    
    strconcat(str1, str2);
    printf("Пример за strconcat: '%s' след обединение е '%s'\n", "hello", str1);
    
    int comparison_result = strcompare("apple", "banana");
    printf("Пример за strcompare: Резултат от сравнение на 'apple' и 'banana' е: %d\n", comparison_result);

    return 0;
}
