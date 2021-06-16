import pickle

infile = open("save.p", "rb")
obj = pickle.load(infile)
print(obj)