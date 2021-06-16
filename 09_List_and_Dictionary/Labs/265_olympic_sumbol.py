import turtle

def draw_olympic_sumbol() :
    positions = [[0, 0, 'blue'], [-120, 0, 'purple'], [60, 60, 'red'], [-60, 60, 'yellow'], [-180, 60, 'green']]

    for x, y, color in positions :
        t.up()
        t.goto(x, y)
        t.down()
        t.color(color, color)
        t.begin_fill()
        t.circle(30)
        t.end_fill()

t = turtle.Turtle()
draw_olympic_sumbol()