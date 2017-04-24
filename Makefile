server client:server.c client.c
	gcc server.c -levent -o server
	gcc client.c -levent -o client
