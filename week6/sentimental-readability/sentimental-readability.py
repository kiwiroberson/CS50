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





def count_letters(text):
    n = 0
    for a in text:
        if a.islower():
            n += 1
    return n








def count_words():
    w = 0

def count_sentences():
    s = 0

main()


