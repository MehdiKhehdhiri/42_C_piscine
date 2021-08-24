ifconfig -a | grep ether | awk -F ' ' '{print $2}'
