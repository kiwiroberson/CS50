import cs50
import math

def main():
    ##get text for analysis
    text = cs50.get_string("Text: ")

    ##calculate score

    ##round score

    ##print score
    print("Grade " )

    ##Test
    ##lcount = count_letters(text)

    print(count_letters(text))
    print(count_words(text))
    print(count_sentences(text))


def count_letters(text):
    n = 0
    for a in text:
        if a.isalpha():
            n += 1
    return n


def count_words(text):
    n = 0
    for a in text:
        if a.isspace():
            n += 1


def count_sentences(text):
    n = 0
    for a in text:
        if a == '.' or a == '?' or a == '?':
            n += 1


main()


