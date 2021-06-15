What is port?
- Virtual point where the network connections start or end. 
- They are software based managed by the OS
- Ports enable the computers to identify different network traffics/protocols/processes like SMTP, FTP, SSH, HTTP, etc as each port is associated with each of them
- These port numbers are standardized for all network connected devices

- Ports are a transport layer concept, thus only a transport protocol like TCP and UDP can specify the port number


TCP Ports-
-For devices to communicate via TCP, they use TCP ports.
-A TCP port is a 16-bit, unsigned value, so there's a finite number of TCP ports available in the world. Specifically, there are 65,535 available TCP ports.
-The first 1,024 TCP ports are called well-known port numbers, and they're agreed upon among technology vendors.
- ss to display all tcp and udp ports in linux
