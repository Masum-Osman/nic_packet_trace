// packet_processor.c
#include <pcap.h>
#include <stdio.h>

void packetHandler(u_char *userData, const struct pcap_pkthdr* pkthdr, const u_char* packet) {
    printf("Packet captured: length %d\n", pkthdr->len);
    for (int i = 0; i < pkthdr->len; i++) {
        printf("%02x ", packet[i]);
        if ((i + 1) % 16 == 0) {
            printf("\n");
        }
    }
    printf("\n\n");
}

void startCapture(const char *device) {
    char errbuf[PCAP_ERRBUF_SIZE];
    pcap_t *handle = pcap_open_live(device, BUFSIZ, 1, 1000, errbuf);

    if (handle == NULL) {
        fprintf(stderr, "Could not open device %s: %s\n", device, errbuf);
        return;
    }

    pcap_loop(handle, 10, packetHandler, NULL);
    pcap_close(handle);
}
