str1="dkte"
str2="college"
print(str1+str2)
print(str1 +' '+str2)


str1="dkte"
print(len(str1))
str2="dkte college"
print(len(str2))

str1="rajdeep"
print(str1[1])
print(str1[0])
print(str1[4])

str1="dkte"
print(str1[1:3])
print(str1[ :2])
print(str1[1: ])
print(str1[ : ])

str1="rajdeep"
print(str1[-3:-1])
print(str1[ :-2])
print(str1[-2: ])

str1="I am a coder."
print(str1.startswith("I"))
print(str1.endswith("er."))

str1="dkte"
print(str1.upper())
str2="DKTE"
print(str2.lower())

str1="dkte college"
print(str1.title())

str1="DKTE"
print(str1.isupper())
str2="dkte"
print(str2.islower())
print(str1.isalpha())
print(str1.isnumeric())
print(str1.isdigit())
print(str1.istitle())

city = "malage"
print(city.find("a"))
print(city.count("a"))

print(city.replace("a","r"))


str1=(input("name"))
print(str1.upper())

str1=(input("name"))
print(str1.lower())
