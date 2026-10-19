int Add(int num1, int num2) {
    return num1 + num2;
}

int main(void) {
    int result;
    result = Add(3, 4);
    printf("The result is: %d\n", result);
    result = Add(5, 8);
    printf("The result is: %d\n", result);
    return 0;
}