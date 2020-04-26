import turtle

coor_list = []

coor_list.append(int(input("x1 : ")))
coor_list.append(int(input("y1 : ")))
coor_list.append(int(input("x2 : ")))
coor_list.append(int(input("y2 : ")))
coor_list.append(int(input("x3 : ")))
coor_list.append(int(input("y3 : ")))

t = turtle.Turtle()
t.shape('turtle')

t.up()
t.goto(coor_list[0], coor_list[1])
t.down()
t.goto(coor_list[2], coor_list[3])
t.goto(coor_list[4], coor_list[5])