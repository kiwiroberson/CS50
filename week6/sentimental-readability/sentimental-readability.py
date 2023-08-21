import cs50

def main():
    # Get text for analysis
    text = cs50.get_string("Text: ")

    # Run analysis
    L = count_letters(text) / count_words(text) * 100
    S = count_sentences(text) / count_words(text) * 100

    # Calculate score
    CLi = 0.0588 * L - 0.296 * S - 15.8
    CLi -= round(CLi)

    # Print score
    if CLi < 1:
        print("Before Grade 1")
    elif CLi > 16:
        print("Grade 16+")
    else:
        print("Grade:", int(CLi))

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

if __name__ == "__main__":
    main()
