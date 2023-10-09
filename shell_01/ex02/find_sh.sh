find . -name "*.sh" -printf "%f " | sed 's/\.sh//g' | tr ' ' '\n'
