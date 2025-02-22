# **ESP8266 Dual DHT22 Sensor Monitoring**  

## **📌 Overview**  
This project reads temperature and humidity data from two **DHT22 sensors** connected to an **ESP8266** and displays the data via the **Serial Monitor**.  

## **📜 Features**  
✅ Reads temperature & humidity from **two DHT22 sensors**  
✅ Displays data on the **Serial Monitor**  
✅ Includes **error handling** for sensor failures  
✅ **Lightweight & efficient**  

---

## **🛠 Hardware Requirements**  
- **ESP8266** (e.g., NodeMCU, Wemos D1 Mini)  
- **2 x DHT22 Sensors**  
- **Jumper wires**  

---

## **🔌 Wiring Diagram**  
| **DHT22 Sensor** | **ESP8266 Pin** |  
|------------------|----------------|  
| **VCC**         | 3.3V            |  
| **GND**         | GND             |  
| **Data (Sensor 1)** | D5 (GPIO 14)  |  
| **Data (Sensor 2)** | D7 (GPIO 13)  |  

⚠ **Note:** Use a **10KΩ pull-up resistor** between **VCC** and **Data** pin for each DHT22 sensor.  

---

## **📜 Code**  
### **Installation**  
1. **Install Arduino IDE** (if not already installed).  
2. **Install ESP8266 Board:**  
   - Open **Arduino IDE** → **Preferences** → Add this URL to "Additional Board Manager URLs":  
     ```
     http://arduino.esp8266.com/stable/package_esp8266com_index.json
     ```
   - Go to **Boards Manager** → Search for **ESP8266** → Install.  
3. **Install Required Libraries:**  
   - Open **Library Manager** → Install **DHT sensor library by Adafruit**.  
   - Install **Adafruit Unified Sensor library**.  

### **Code Upload**  
Upload the following code to your **ESP8266** using **Arduino IDE**:  
👉 **[Click here for the source code](./your_code_file.ino)**  

---

## **📋 Usage**  
1. **Connect the ESP8266** to your computer and open **Arduino IDE**.  
2. Select **Board: NodeMCU 1.0 (ESP-12E Module)** (or your ESP8266 variant).  
3. Select **Port** (Tools → Port → Select ESP8266).  
4. Click **Upload** and wait for it to finish.  
5. Open **Serial Monitor** (9600 baud) to view sensor data.  

---

## **💡 Expected Output**  
Example Serial Monitor output:  
```
Initializing two DHT22 sensors...
Sensor 1:
Humidity: 45.2 %	Temperature: 27.3 °C
Sensor 2:
Humidity: 48.1 %	Temperature: 28.1 °C
```

If a sensor fails:  
```
Failed to read from DHT1 sensor!
```

---

## **🛠 Troubleshooting**  
🚨 **No Data or Failed Readings?**  
✔ **Check wiring** (ensure correct GPIO pins).  
✔ **Ensure pull-up resistors** (10KΩ) are used on Data pins.  
✔ **Verify sensor power** (3.3V).  
✔ **Increase delay** to 3-5 seconds if needed.  

---

## **📄 Credits**  
🔹 **Author:** Yodha Ardiansyah  
🔹 **Website:** [arunovasi.my.id](https://arunovasi.my.id)  
🔹 **License:** MIT  

---

🚀 Enjoy your IoT project! Let me know if you need further modifications. 😃
