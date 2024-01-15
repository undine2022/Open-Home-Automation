///////////////////////////////////////////////////////////////////////////////////////////////
// WIFI
///////////////////////////////////////////////////////////////////////////////////////////////

#define WIFI_SSID     ""
#define WIFI_PASSWORD ""


///////////////////////////////////////////////////////////////////////////////////////////////
// DEVICE
///////////////////////////////////////////////////////////////////////////////////////////////

#define DEVICE_LOCATION "bedroom"
#define DEVICE_NAME     "arilux" // also used as MQTT ID


///////////////////////////////////////////////////////////////////////////////////////////////
// MQTT
///////////////////////////////////////////////////////////////////////////////////////////////

#define MQTT_USERNAME     ""
#define MQTT_PASSWORD     ""
#define MQTT_SERVER       ""
#define MQTT_SERVER_PORT  1883

// MQTT topics
//   - status state
//       < DEVICE_LOCATION >/< DEVICE_NAME >/state
//   - command 
//       < DEVICE_LOCATION >/< DEVICE_NAME >/set
//   ...
#define MQTT_AVAILABILITY_TOPIC   DEVICE_LOCATION "/" DEVICE_NAME
#define MQTT_STATE_TOPIC          DEVICE_LOCATION "/" DEVICE_NAME "/state"
#define MQTT_CMD_TOPIC            DEVICE_LOCATION "/" DEVICE_NAME "/set"

#define MQTT_STATE_ON_PAYLOAD   "ON"
#define MQTT_STATE_OFF_PAYLOAD  "OFF"

#define MQTT_AVAILABLE_PAYLOAD      "online"
#define MQTT_NOT_AVAILABLE_PAYLOAD  "offline"


///////////////////////////////////////////////////////////////////////////////////////////////
// ARILUX
///////////////////////////////////////////////////////////////////////////////////////////////

#define RED_PIN       5
#define GREEN_PIN     14
#define BLUE_PIN      12
#define WHITE_PIN     13

#define PWM_MAX       255
#define PWM_MIN       0
#define PWM_FREQUENCY 500