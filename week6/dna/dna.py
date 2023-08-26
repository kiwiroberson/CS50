import csv
import sys
import argparse
import pandas as pd


def main():

    # TODO: Check for command-line usage
    if len(sys.argv) == 1:
        print(f"Incorrect number of files")
        return 1

  # TODO: Read DNA sequence file into a variable
    with open(sys.argv[2]) as sequence:
        seq = sequence.read()

    # TODO: Read database file into a variable
    data = pd.read_csv(sys.argv[1])

    tnr = []

    for col in data.columns[1:]:
       tnr.append(col)






    # TODO: Find longest match of each STR in DNA sequence
    counter = {}
    countern = []

    for n in range (3):
        countern.append(longest_match(seq, tnr[n]))


    # TODO: Check database for matching profiles
    while(True):
        for i in range(1,(len(data.index))):
            comp = []
            for j in range(1,(len(tnr) + 1)):
                comp.append(data.loc[i][j])

            if(comp == countern):
                print (data.loc[i][0])
                return
        print(f'No match')
        return
    return


def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        # If a match, move substring to next potential match in sequence
        # Continue moving substring and checking for matches until out of consecutive matches
        while True:

            # Adjust substring start and end
            start = i + count * subsequence_length
            end = start + subsequence_length

            # If there is a match in the substring
            if sequence[start:end] == subsequence:
                count += 1

            # If there is no match in the substring
            else:
                break

        # Update most consecutive matches found
        longest_run = max(longest_run, count)

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
