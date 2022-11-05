def charVal(x):
  if str(x).isalpha():
    return ord(x.upper()) - ord('A') + 1
  else:
    return 1

ipt = input().split()
enc_type = ipt[0]
n = int(ipt[1])

msg = input()

print("msg", msg)
arr = ['0'] * n
arr[0] = msg[0]

if enc_type == "E":
  i = 0
  for letter in range(0, n -1):
    incr = charVal(msg[letter])
    print(msg[letter], incr)
    i = (i + incr) % n
    while arr[i] != '0':
      i = (i + 1) % n
    arr[i] = msg[letter + 1]
else:
  pass

print("".join(arr))

# E 12
# DECODE THIS!