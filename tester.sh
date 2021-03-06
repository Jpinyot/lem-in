# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    tester.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpinyot <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/26 16:55:25 by jpinyot           #+#    #+#              #
#    Updated: 2018/11/12 19:46:43 by jpinyot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

for n in {1..2}
do
#	ants=$(jot -r 1 1 10);
	ants=1;
	nodes=$(jot -r 1 2 50);
	echo "$ants $nodes"
	./valid_map/lem-in_gen $ants $nodes > tester_map.map
	echo "=============================inicio================================="
	cat tester_map.map
	echo "=============================fin================================="
	./lem-in < tester_map.map
	if [ $? -ne 0 ]; then
    	echo "It stop!"
    	exit 1
	fi
done
