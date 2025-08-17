# infected_word = input()

# collected_word = ''
# for c in infected_word:
#     if not c.isspace():
#         collected_word +=c.lower()
# print(collected_word)

infectd_word = input()

#collected_word = "".join(c.lower() for c in infectd_word if not c.isspace())
collected_word = infectd_word.replace(' ','').lower()

print(collected_word)