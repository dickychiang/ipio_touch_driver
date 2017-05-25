/*
 * Relative Driver with Touch IC
 */
// The macro allows users to change the supprot of driver in differnet chips.
// If developers'd like to add a new chip used in the driver, they must also add 
// the type of chip they want to support in core/sup_chip.c.
//#define ON_BOARD_IC		CHIP_TYPE_ILI2121
#define ON_BOARD_IC		CHIP_TYPE_ILI7807

// shows the version of driver
#define DRIVER_VERSION	"1.0.0.0"

// sets the level of debug message
#define DBG_LEVEL

#define DBG_INFO(fmt, arg...) \
			printk(KERN_INFO "ILITEK: (%s): " fmt "\n", __func__, ##arg);

#define DBG_ERR(fmt, arg...) \
			printk(KERN_ERR "ILITEK: (%s): " fmt "\n", __func__, ##arg);

/*
 * Relative Firmware Upgrade
 */

#define MAX_HEX_FILE_SIZE			160*1024
#define MAX_FLASH_FIRMWARE_SIZE		256*1024
#define MAX_IRAM_FIRMWARE_SIZE		60*1024

#define UPDATE_FIRMWARE_PAGE_LENGTH		256

/*
 * Protocol commands 
 */
#define ILITEK_PROTOCOL_V3_2			0x302
#define PCMD_3_2_GET_TP_INFORMATION		0x20
#define PCMD_3_2_GET_KEY_INFORMATION	0x22
#define PCMD_3_2_GET_FIRMWARE_VERSION	0x40
#define PCMD_3_2_GET_PROTOCOL_VERSION	0x42

#define ILITEK_PROTOCOL_V5_0			0x50
#define PCMD_5_0_GET_TP_INFORMATION		0x20
#define PCMD_5_0_GET_KEY_INFORMATION	0x27
#define PCMD_5_0_GET_FIRMWARE_VERSION	0x21
#define PCMD_5_0_GET_PROTOCOL_VERSION	0x22
#define PCMD_5_0_GET_CORE_VERSION		0x23

/*
 *  ILI2121
 */
#define CHIP_TYPE_ILI2121		0x2121
#define ILI2121_SLAVE_ADDR		0x41
#define ILI2121_ICE_MODE_ADDR	0x181062
#define ILI2121_PID_ADDR		0x4009C

// firmware mode
#define ILI2121_FIRMWARE_UNKNOWN_MODE		0xFF
#define ILI2121_FIRMWARE_DEMO_MODE			0x00
#define ILI2121_FIRMWARE_DEBUG_MODE			0x01

// length of finger touch packet
#define ILI2121_DEMO_MODE_PACKET_LENGTH		53
#define ILI2121_MAX_TOUCH_NUM           	5

// i2c command
#define ILI2121_TP_CMD_READ_DATA			0x10
#define ILI2121_TP_CMD_READ_SUB_DATA		0x11

/*
 * ILI7807
 */
#define CHIP_TYPE_ILI7807		0x7807
#define ILI7807_SLAVE_ADDR		0x41
#define ILI7807_ICE_MODE_ADDR	0x181062
#define ILI7807_PID_ADDR		0x4009C

// firmware mode
#define ILI7807_FIRMWARE_UNKNOWN_MODE		0xFF
#define ILI7807_FIRMWARE_DEMO_MODE			0x00
#define ILI7807_FIRMWARE_DEBUG_MODE			0x01

// length of finger touch packet
#define ILI7807_DEMO_MODE_PACKET_LENGTH  	43
#define ILI7807_DEBUG_MODE_PACKET_LENGTH   	1280
#define ILI7807_MAX_TOUCH_NUM           	5
