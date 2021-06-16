plain_text = "Love will find a wat."
encrypted_text = ""

for c in plain_text :
    x = ord(c)
    x += 1
    cc = chr(x)
    encrypted_text += cc

print(plain_text)
print(encrypted_text)

decryption_text = ""

for c in encrypted_text :
    x = ord(c)
    x -= 1
    cc = chr(x)
    decryption_text += cc

print(encrypted_text)
print(decryption_text)