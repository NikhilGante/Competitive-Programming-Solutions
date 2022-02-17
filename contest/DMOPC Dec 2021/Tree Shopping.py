import sys
input = sys.stdin.readline

class Tree:
    def __init__(self, lst):
        self.x1 = lst[0]
        self.y1 = lst[1]
        self.x2 = lst[2]
        self.y2 = lst[3]
        self.x3 = lst[4]
        self.y3 = lst[5]
        get_centre(self)

def get_centre(tree):
    tree.left = min(tree.x1, tree.x2, tree.x3)
    tree.right = max(tree.x1, tree.x2, tree.x3)
    tree.bottom = min(tree.y1, tree.y2, tree.y3)
    tree.top = max(tree.y1, tree.y2, tree.y3)

    if tree.x1 == tree.x2:
        if tree.y1 == tree.y3:
            tree.centre = tree.x1, tree.y1
        else:
            tree.centre = tree.y2, tree.y2
    elif tree.x1 == tree.x3:
        if tree.y1 == tree.y2:
            tree.centre = tree.y1, tree.y1
        else:
            tree.centre = tree.y3, tree.y3
    else:
        if tree.y1 == tree.y2:
            tree.centre = tree.x2, tree.y2
        else:
            tree.centre = tree.x3, tree.y3

    tree.type = tree.centre[1] == tree.top  # true if centre is aligned with bottom
    tree.slope = (tree.top - tree.bottom) / (tree.right - tree.left)
    if tree.centre[0] == tree.left:
        if tree.centre[1] == tree.bottom:
            tree.type = 1
            tree.slope = -tree.slope
            tree.b = -tree.slope * tree.right + tree.bottom
        else:
            tree.type = 3
            tree.b = -tree.slope * tree.right + tree.top

    else:
        if tree.centre[1] == tree.bottom:
            tree.type = 2
            tree.b = -tree.slope * tree.left + tree.bottom
        else:
            tree.type = 4
            tree.slope = -tree.slope
            tree.b = -tree.slope * tree.right + tree.bottom
    tree.func = lambda x: tree.slope * x + tree.b
    print("YOO", tree.slope, tree.b)


def is_in_tree(x, y, tree):
    if x < tree.left or x > tree.right or y < tree.bottom or y > tree.top:
        return False
    if tree.type == 1:
        return y <= tree.func(x)
    elif tree.type == 2:
        return y <= tree.func(x)
    elif tree.type == 3:
        return y >= tree.func(x)
    else:
        return y >= tree.func(x)


# m = (y - y1)/(x - x1)
# m(x - x1) = (y - y1)
# m(x - x1) + y1 = y
# mx - mx1 + y1 = y
# b = -mx1 + y1
# y = mx + b

n, q = map(int, input().split())
trees = []


for i in range(n):
    trees.append(Tree(list(map(float, input().split()))))
    # print(y.x1, y.y1, y.x2, y.y2, y.x3, y.y3)
    # get_centre(y)
    # print(y.centre, y.left, y.right, y.bottom, y.top, y.type, y.slope)
    # print("is in tree: ", is_in_tree(2, 2, y))
    # print("NEXT TREE")

for i in range(q):
    x, y = map(int, input().split())
    count = 0
    for j in range(n):
        if is_in_tree(x, y, trees[j]):
            count += 1
        print("j:", j, count)
    print(i, "total:", count)
    

# for i in range(n):
#     y = Tree(list(map(int, input().split())))
#     print(y.x1, y.y1, y.x2, y.y2, y.x3, y.y3)
#     get_centre(y)
#     print(y.centre, y.left, y.right, y.bottom, y.top, y.type, y.slope)
#     print("is in tree: ", is_in_tree(2, 2, y))
#     print("NEXT TREE")

# 2 3
# -3 7 8 3 8 7
# 1 1 2.25 5 2.25 1
# 2 4
# 3 6
# 2 10

# 1 3
# 1 1 2.25 5 2.25 1
# 2 4
# 3 6
# 2 10

# x1, y1 = map(int, input.split)