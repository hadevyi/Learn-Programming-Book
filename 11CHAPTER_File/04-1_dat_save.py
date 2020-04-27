import pickle

data = [
    12,
    3.14,
    [1, 2, 3, 4, 5]
]

outfile = open("test.dat", "wb")
pickle.dump(data, outfile)
outfile.close()