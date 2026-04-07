#pragma once

// =============================================
// Konfigurasi Mappi32 + LoRa RFM95 + OLED SSD1306
// =============================================

// === LoRa RFM95 ===
#define LORA_SCK          14
#define LORA_MISO         12
#define LORA_MOSI         13
#define LORA_CS           15
#define LORA_RST          0
#define LORA_RESET        0
#define LORA_DIO0         27
#define LORA_DIO1         -1
#define LORA_DIO2         -1

// Alias RF95 (penting)
#define RF95_SCK          LORA_SCK
#define RF95_MISO         LORA_MISO
#define RF95_MOSI         LORA_MOSI
#define RF95_NSS          LORA_CS
#define RF95_RESET        LORA_RESET
#define RF95_DIO0         LORA_DIO0
#define RF95_DIO1         LORA_DIO1
#define RF95_DIO2         LORA_DIO2

// === OLED SSD1306 ===
#define HAS_SCREEN        1
#define USE_SSD1306       1
#define SCREEN_WIDTH      128
#define SCREEN_HEIGHT     64

#define I2C_SDA           21
#define I2C_SCL           22
#define PIN_WIRE_SDA      I2C_SDA
#define PIN_WIRE_SCL      I2C_SCL
#define RESET_OLED        -1

// Paksa menggunakan RFM95
#define USE_RF95          1
#undef USE_SX1262
#undef USE_SX1268
#undef USE_LLCC68

// Matikan fitur yang tidak ada di board Anda
#define HAS_GPS           0
#define HAS_BATTERY       0
#define HAS_TELEMETRY     0
#define HAS_MOTION        0      // ← Ini yang memperbaiki error MotionSensor
#define HAS_IMU           0
#define HAS_BLUETOOTH     1      // Biarkan Bluetooth tetap aktif

// Opsional: Matikan wake on motion agar tidak konflik dengan OLED
#define WAKE_ON_MOTION    0