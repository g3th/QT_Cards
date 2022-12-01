# Generates a .qrc file which contains Qt project resources (i.e. images)
# parsed into xml format. 
# The resulting file is .qrc, which can be compiled via qmake by adding a
# "RESOURCES += filename.qrc" variable in your project (*.pro) file.

import os
from pathlib import Path

file_list = []
assets_path = "/cards" #change to own path
directory = str(Path(__file__).parent) + assets_path

files = os.listdir(directory)

for file_ in files:
	file_list.append(file_)

with open('cards.qrc','+w') as resources:
	resources.write('\t <RCC>\n \t\t<qresource prefix="/"> \n')
	for f in file_list:
		resources.write("\t\t\t" + "<file>cards/" + f + "</file>\n")
	resources.write('\t\t </qresource>\n')
	resources.write('\t </RCC>')


