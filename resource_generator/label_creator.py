# Create multiple variables of the same name at once (i.e. cards1, cards2 etc..)
# to use with Qt Widgets

label_name = str(input("Label Name: "))
label_quantity = int(input("Label Quantity: "))
labels_list = []
counter = 0

while len(labels_list) != label_quantity:
	if counter == 0:
		labels_list.append("*{}_{}".format(label_name,str(counter+1)))
	else:
		labels_list.append("*{}_{}".format(label_name, str(counter+1)))
	counter += 1

with open('created_variables','+w') as variables:
	for index in range(len(labels_list)):
		if index == len(labels_list)-1:
			variables.write(labels_list[index])
		else:
			variables.write(labels_list[index] +", ")

variables.close()
