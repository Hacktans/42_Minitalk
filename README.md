# Minitalk - Inter-Process Communication via Signals

A client-server communication program using UNIX signals to transmit messages bit by bit.

## 🎯 About

Minitalk is a 42 School project that demonstrates inter-process communication (IPC) using UNIX signals. The project consists of a server that can receive messages from multiple clients through signal handling, where each character is transmitted bit by bit using only `SIGUSR1` and `SIGUSR2` signals.

## 🚀 Features

- **Signal-based communication**: Uses only `SIGUSR1` and `SIGUSR2` for data transmission
- **Bit-by-bit transmission**: Each character is sent as 8 individual bits
- **Multi-client support**: Server can handle messages from multiple clients
- **Error handling**: Validates PID and handles signal errors
- **Acknowledgment system**: Server confirms receipt of each bit
- **Unicode support**: Can transmit any printable characters including emojis



## 🔧 Installation

1. Clone the repository:
```bash
git clone [repository-url]
cd minitalk
```

2. Compile the project:
```bash
make
```

This creates two executables: `server` and `client`

3. For bonus version:
```bash
make bonus
```

This creates: `server_bonus` and `client_bonus`

## 💻 Usage

### Starting the Server

1. Run the server:
```bash
./server
```

2. The server will display its PID:
```
PID: 12345
```

3. Keep the server running to receive messages.

### Sending Messages

1. Use the client to send a message:
```bash
./client [SERVER_PID] "Your message here"
```

Example:
```bash
./client 12345 "Hello, 42!"
```

### Example Session

Terminal 1 (Server):
```bash
$ ./server
PID: 12345
Hello, 42!
Message received from PID: 67890
```

Terminal 2 (Client):
```bash
$ ./client 12345 "Hello, 42!"
```



## 👨‍💻 Developer

**Haktan Dalıcı**

---

*This project demonstrates fundamental concepts of UNIX signals, inter-process communication, and bit manipulation in C programming.*
