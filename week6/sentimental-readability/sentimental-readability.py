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
    l = count_letters(text)
    print("Letters: " + l)





def count_letters(text):
    l = 0
    n = 0
    while (text[n] != " "):
        if (text[n] >=65 and text[n]) <=90:
            l += 1
        n += 1
    return l









def count_words():
    w = 0

def count_sentences():
    s = 0

main()


