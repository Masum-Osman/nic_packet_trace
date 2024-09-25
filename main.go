package main

/*
#cgo LDFLAGS: -lpcap
#include "packet_processor.c"
*/
import "C"
import (
	"fmt"
	"os"
)

func main() {
	if len(os.Args) != 2 {
		fmt.Printf("Usage: %s <network-interface>\n", os.Args[0])
		os.Exit(1)
	}

	device := C.CString(os.Args[1])
	fmt.Println("Starting packet capture on device", C.GoString(device))
	C.startCapture(device)
}
