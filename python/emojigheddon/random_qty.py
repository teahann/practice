from emojis import EMOJI_CODES
import random

mojis = ''
for _ in range(500): mojis = mojis + random.choice(EMOJI_CODES)

print(mojis)
