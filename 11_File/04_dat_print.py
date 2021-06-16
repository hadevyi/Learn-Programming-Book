import pickle

infile = open("test.dat", "rb")
obj = pickle.load(infile)

for data in obj :
    print(data)