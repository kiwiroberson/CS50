from cs50 import get_string

def main():
    ##get text for analysis
    text = get_string("Text: ")

    ##Run analysis
    L = count_letters(text) / count_words(text) * 100
    S = count_sentences(text) / count_words(text) * 100

    ##calculate score
    CLi = round(0.0588 * L - 0.296 * S - 15.8, 0)
    CLi - round(CLi, 0)

    ##print score
    if CLi < 1:
        print("Before Grade 1" )
        return
    elif CLi > 16:
        print("Grade 16+")
        return
    print("Grade: " + str(int(CLi)))

def count_letters(text):
    n = 0
    for a in text:
        if a.isalpha():
            n += 1
    return n


def count_words(text):
    n = 1
    for a in text:
        if a.isspace():
            n += 1
    return n


def count_sentences(text):
    n = 0
    for a in text:
        if a == '.' or a == '?' or a == '!':
            n += 1
    return n


main()
