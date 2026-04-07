\# Mappi32 Custom Meshtastic Firmware



Firmware custom untuk board \*\*Mappi32\*\* (ESP32 + LoRa RFM95 923 MHz) + OLED SSD1306 (opsional).



\### Pinout

\- LoRa RFM95: SCK=14, MISO=12, MOSI=13, CS=15, RST=0, DIO0=27

\- OLED SSD1306: SDA=21, SCL=22



\### Cara Compile \& Flash

1\. Clone repo ini

2\. Buka di VSCode + PlatformIO

3\. Pilih environment `mappi32`

4\. Build: `pio run -e mappi32`

5\. Upload: `pio run -e mappi32 -t upload --upload-port COMxx`



Region yang direkomendasikan: \*\*AS\_923\*\*



Dibuat berdasarkan Meshtastic firmware v2.7.22

