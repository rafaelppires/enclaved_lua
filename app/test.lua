codecipher   = sgxencrypt("function (x) print(x) return 'result' end")
datacipher   = sgxencrypt("voila")
resultcipher = sgxprocess(codecipher,datacipher)
print(sgxdecrypt(resultcipher))
