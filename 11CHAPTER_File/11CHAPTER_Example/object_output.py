import pickle

gameOption = {
    "Sound" : 8,
    "VideoQuality" : "HIGH",
    "Money" : 1000000,
    "WeaponList" : ["gun", "missile", "knife"]
}

out_file = open("save.p", "wb")
pickle.dump(gameOption, out_file)
out_file.close()