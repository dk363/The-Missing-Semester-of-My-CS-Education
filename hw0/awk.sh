awk '$2 > 100{ {tmp = $1; $1 = $3; $3 = tmp} print $0}' test.txt
