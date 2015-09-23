
#ifndef _NETCON_UTILITIES_H
#define _NETCON_UTILITIES_H

namespace ZeroTier
{
  ip_addr_t ip_addr_sin(register struct sockaddr_in *sin);
  ssize_t sock_fd_write(int sock, int fd);
  ssize_t sock_fd_read(int sock, void *buf, ssize_t bufsize, int *fd);
}
#endif
