import matplotlib.pyplot as grp
x=[2,4,6,8,10,12,14,16,18]
y=[131,17,15,114,118,119,112,117,119]
rainbow=['blue','green','red','yellow','purple','pink','skyblue','black','gray']
grp.title('Bar graph')
grp.bar(x,y,color=rainbow)
grp.show()