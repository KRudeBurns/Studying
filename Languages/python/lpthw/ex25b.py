import ex25
sentence = "All good things come to an end that is unexpected."

words = ex25.break_words(sentence)
print(words)

sorted_words = ex25.sort_words(words)
print(sorted_words)

ex25.print_first_word(sorted_words)
ex25.print_last_word(sorted_words)
print(sorted_words)

sorted_words = ex25.sort_sentence(sentence)
print(sorted_words)

ex25.print_first_and_last(sentence)
ex25.print_first_and_last_sorted(sentence)

ex25.print_last_word_and_sentence(sentence)
