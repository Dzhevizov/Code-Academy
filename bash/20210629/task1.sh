#Да се сменят имената на картинките от
#2007-09-24-picturename.jpg
#на
#24-09-2007-picturename.jpg

#!/bin/bash

for fn in *.jpg
do
        mv $fn 'echo $fn |\
        sed 's/[0-9]-[0-9]-[0-9]/\3-\2-\1/''
done
