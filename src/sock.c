#include "syshead.h"
#include "sock.h"
#include "socket.h"

struct sock *sk_alloc(struct net_ops *ops)
{
    struct sock *sk;

    sk = malloc(sizeof (struct sock));
    sk->ops = ops;

    return sk;
}

void sock_init_data(struct socket *sock, struct sock *sk)
{

}
