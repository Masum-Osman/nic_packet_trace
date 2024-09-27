# NIC Packet Trace

## Overview

NIC Packet Trace is a lightweight application that captures and displays network packets on a specified network interface. The project integrates Go and C using cgo to handle packet processing, providing an efficient solution for monitoring network traffic.

## Features

- **Packet Capture**: Traces all incoming and outgoing packets on the specified network interface.
- **Lightweight**: Minimal resource usage, designed for quick and efficient packet analysis.

## Installation

### Prerequisites

- Go: Download from [golang.org](https://golang.org/)
- libpcap: Make sure you have the libpcap library installed. Installation commands may vary based on your OS.

### Clone the Repository

```bash
git clone https://github.com/Masum-Osman/nic_packet_trace.git
cd nic_packet_trace
```

### Build the Application

Compile the application using the following command:

```bash
go build
```

### Run the Application

To start packet capturing, run the application with the desired network interface:

```bash
./nic_packet_trace <network-interface>
```

## Usage

The application captures packets for a specified interface and displays their lengths and hexadecimal representations in the terminal.

## Contributing

Contributions are welcome! Feel free to open issues or submit pull requests.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contact

For any inquiries, please reach out to [Masum Osman](mailto:osmanmasum.cs@gmail.com).
