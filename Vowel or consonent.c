int main() {
    char alphabet;

    // Input alphabet
    printf("Enter an alphabet: ");
    scanf(" %c", &alphabet);

    // Check if input is an alphabet
    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')) {
        // Convert to lowercase
        alphabet = tolower(alphabet);

        // Check if vowel
        if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u') {
            printf("%c is a vowel.", alphabet);
        } else {
            printf("%c is a consonant.", alphabet);
        }
    } else {
        printf("Invalid input. Please enter an alphabet.");
    }

    return 0;
}
