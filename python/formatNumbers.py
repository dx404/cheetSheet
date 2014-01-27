# decimal integers to binary and hex strings
>>> '{:b}, {:x}'.format(255, 65535)
'11111111, ffff'

# hex strings to numbers
>>> int("ff", 16)
255
>>> int("0xff", 16)
255
>>> int("0xff", 0)
255
