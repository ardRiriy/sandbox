from Crypto.Util.number import *

# | 素数
p = 168458521109511478174816033367699
q = 299681192390656691733849646142066664329

# | 公開鍵(n, e)
n = p * q
e = 65537

# | 秘密鍵(d)
phi = (p - 1) * (q - 1)
d = inverse(e, phi)

# | 平文
m = bytes_to_long(b"nya-n")

# | 暗号化
# | c = m^e mod n
c = pow(m, e, n)
print('暗号文: ', c)

# | 復号
m2 = pow(c, d, n)
print(long_to_bytes(m2))
