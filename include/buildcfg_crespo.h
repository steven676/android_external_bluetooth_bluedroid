#ifndef BUILDCFG_H
#define BUILDCFG_H
#define AVCT_INCLUDED   FALSE
#define AVRC_INCLUDED   FALSE
//#define AVRC_METADATA_INCLUDED   TRUE
//#define AVRC_ADV_CTRL_INCLUDED   FALSE
#define AVDT_INCLUDED   FALSE
#define AT91_MAIN_INCLUDED   FALSE
#define AT91_DRV_INCLUDED   FALSE
#define AT91_LIB_INCLUDED   FALSE
#define AT91_GKI_INCLUDED   FALSE
#define UNV_INCLUDED   FALSE
#define BBY_MAIN_INCLUDED   FALSE
#define A2D_INCLUDED   FALSE
#define A2D_SBC_INCLUDED   FALSE
#define A2D_M12_INCLUDED   FALSE
#define A2D_M24_INCLUDED   FALSE
#define VDP_INCLUDED       FALSE
#define VDP_H263_INCLUDED   FALSE
#define VDP_MPEG_INCLUDED   FALSE
#define VDP_VEND_INCLUDED   FALSE
#define BIP_INCLUDED   FALSE
#define BIP_INITR_INCLUDED   FALSE
#define BIP_RSPDR_INCLUDED   FALSE
#define BIP_PUSH_INCLUDED   FALSE
#define BIP_PULL_INCLUDED   FALSE
#define BIP_PRINTING_INCLUDED   FALSE
#define BIP_ARCHIVE_INCLUDED   FALSE
#define BIP_CAMERA_INCLUDED   FALSE
#define BIP_DISPLAY_INCLUDED   FALSE
#define BPP_INCLUDED   FALSE
#define BPP_SND_INCLUDED   FALSE
#define DUN_INCLUDED   FALSE
#define GAP_INCLUDED   FALSE
#define GOEP_INCLUDED   FALSE
#define GOEP_FS_INCLUDED   FALSE
#define GATT_PTS   FALSE
#define HCITHIN_INCLUDED   FALSE
#define BTM_SEC_MAX_SERVICE_RECORDS   32
#define L2CAP_INCLUDED   TRUE
#define L2CAP_LINK_INACTIVITY_TOUT   4
#define L2CAP_FCR_INCLUDED   TRUE
#define L2CAP_EXTFEA_SUPPORTED_MASK   (L2CAP_EXTFEA_ENH_RETRANS | L2CAP_EXTFEA_STREAM_MODE | L2CAP_EXTFEA_NO_CRC | L2CAP_EXTFEA_FIXED_CHNLS)
#define OBX_INCLUDED   TRUE
#define OBX_SERVER_INCLUDED   TRUE
#define OBX_CLIENT_INCLUDED   TRUE
#define OBX_MD5_INCLUDED      FALSE
#define OBX_MD5_TEST_INCLUDED   FALSE
#define OBX_14_INCLUDED   FALSE
#define BTUI_OPS_FORMATS   (BTA_OP_VCARD21_MASK | BTA_OP_VCAL_MASK | BTA_OP_VNOTE_MASK | BTA_OP_ANY_MASK)
#define BTA_OPC_SENDING_ABORT   TRUE
#define RFCOMM_INCLUDED   TRUE
#define MAX_RFC_PORTS   30
#define MAX_BD_CONNECTIONS   7
#define BTA_RFC_MTU_SIZE   (L2CAP_MTU_SIZE-L2CAP_MIN_OFFSET-RFCOMM_DATA_OVERHEAD)
#define BTA_JV_DEF_RFC_MTU   BTA_RFC_MTU_SIZE
#define PORT_TX_BUF_HIGH_WM   15
#define PORT_RX_BUF_HIGH_WM   10
#define PORT_RX_BUF_LOW_WM   4
#define PORT_RX_BUF_CRITICAL_WM   15
#define PORT_TX_BUF_CRITICAL_WM   25
#define PORT_RX_LOW_WM   (BTA_RFC_MTU_SIZE * PORT_RX_BUF_LOW_WM)
#define PORT_RX_HIGH_WM   (BTA_RFC_MTU_SIZE * PORT_RX_BUF_HIGH_WM)
#define PORT_RX_CRITICAL_WM   (BTA_RFC_MTU_SIZE * PORT_RX_BUF_CRITICAL_WM)
#define PORT_TX_HIGH_WM   (BTA_RFC_MTU_SIZE * PORT_TX_BUF_HIGH_WM)
#define PORT_TX_CRITICAL_WM   (BTA_RFC_MTU_SIZE * PORT_TX_BUF_CRITICAL_WM)
#define BTA_DUN_MTU   BTA_RFC_MTU_SIZE
#define BTA_SPP_MTU   BTA_RFC_MTU_SIZE
#define BTA_FAX_MTU   BTA_RFC_MTU_SIZE
#define SDP_DI_INCLUDED   TRUE
#define SDP_RAW_DATA_INCLUDED   TRUE
#define SDP_RAW_PDU_INCLUDED   TRUE
#define SDP_POOL_ID   3
#define BNEP_INCLUDED   FALSE
#define PAN_INCLUDED   FALSE
#define SAP_SERVER_INCLUDED   FALSE
#define HID_DEV_INCLUDED   FALSE
#define HID_HOST_INCLUDED   FALSE
#define BLE_INCLUDED   FALSE
#define BTM_BLE_CONFORMANCE_TESTING   FALSE
#define ATT_INCLUDED   FALSE
#define ATT_DEBUG   FALSE
#define GATTS_APPU_USE_GATT_TRACE   FALSE
#define GATT_CLIENT_ENABLED   FALSE
#define GATT_SERVER_ENABLED   FALSE
#define SMP_INCLUDED   FALSE
#define SMP_HOST_ENCRYPT_INCLUDED   FALSE
#define CE_TEST_INCLUDED   FALSE
#define SER_INCLUDED   FALSE
#define RPC_INCLUDED   FALSE
#define MMI_INCLUDED   FALSE
#define SAP_INCLUDED   FALSE
#define SBC_NO_PCM_CPY_OPTION   FALSE
#define SBC_IPAQ_OPT   FALSE
#define SBC_IS_64_MULT_IN_QUANTIZER   FALSE
//#define MCA_INCLUDED   TRUE
#define BTE_HCIUTILS_HOOK_INCLUDED   FALSE
#define BTA_INCLUDED   TRUE
#define BTA_AG_INCLUDED   TRUE
#define BTA_CT_INCLUDED   FALSE
#define BTA_CG_INCLUDED   FALSE
#define BTA_DG_INCLUDED   FALSE
#define BTA_FT_INCLUDED   FALSE
#define BTA_OP_INCLUDED   FALSE
#define BTA_PR_INCLUDED   FALSE
#define BTA_SS_INCLUDED   FALSE
#define BTA_DM_INCLUDED   TRUE
#define BTA_DI_INCLUDED   FALSE
#define BTA_BI_INCLUDED   FALSE
#define BTA_SC_INCLUDED   FALSE
#define BTA_PAN_INCLUDED   FALSE
#define BTA_FS_INCLUDED   TRUE
#define BTA_AC_INCLUDED   FALSE
#define BTA_HD_INCLUDED   FALSE
#define BTA_HH_INCLUDED   FALSE
#define HH_USE_BTHID   FALSE
#define BTA_AR_INCLUDED   FALSE
#define BTA_AV_INCLUDED   FALSE
#define BTA_AV_VDP_INCLUDED   FALSE
#define BTA_AVK_INCLUDED   FALSE
#define BTA_PBS_INCLUDED   FALSE
#define BTA_PBC_INCLUDED   FALSE
#define BTA_FM_INCLUDED   FALSE
#define BTA_FM_DEBUG   FALSE
#define BTA_FMTX_INCLUDED   FALSE
#define BTA_FMTX_DEBUG   FALSE
#define BTA_FMTX_FMRX_SWITCH_WORKAROUND   FALSE
#define BTA_FMTX_US_FCC_RULES   FALSE
#define BTA_HS_INCLUDED   FALSE
#define BTA_MSE_INCLUDED   FALSE
#define BTA_MCE_INCLUDED   FALSE
#define BTA_PLAYBACK_INCLUDED   FALSE
#define BTA_SSR_INCLUDED   FALSE
#define BTA_JV_INCLUDED   FALSE
#define BTA_EIR_CANNED_UUID_LIST   FALSE
#define BTA_GATT_INCLUDED   FALSE
#define BTA_HL_INCLUDED   TRUE
#define BTA_HL_DEBUG    TRUE
#define RSI_INCLUDED   TRUE
#define RPC_TRACE_ONLY   FALSE
#define ANDROID_APP_INCLUDED   TRUE
#define ANDROID_USE_LOGCAT   TRUE
#define LINUX_GKI_INCLUDED   TRUE
#define TICKS_PER_SEC   10
#define QUICK_TIMER_TICKS_PER_SEC   10
#define BTA_SYS_TIMER_PERIOD   100
#define GKI_BUF1_SIZE   288
#define GKI_BUF3_MAX   100
#define GKI_BUF3_SIZE   (4096+16)
#define GKI_BUF4_SIZE   (8080+26)
#define GKI_SHUTDOWN_EVT   APPL_EVT_7
#define GKI_PTHREAD_JOINABLE   TRUE
#define LINUX_DRV_INCLUDED   TRUE
#define LINUX_OS   TRUE
#define BTU_TASK           0
#define BTIF_TASK          1
#define GKI_MAX_TASKS      2
//#define BTE_APPL_TASK      2
//#define SBC_ENCODE_TASK   3
//#define AV_SRC_READ_TASK   4
//#define PBS_SQL_TASK   5
#define BTM_APP_DEV_INIT   bte_main_post_reset_init
#define BTE_RESET_BAUD_ON_BT_DISABLE   FALSE
#define BTE_IDLE_TASK_INCLUDED   FALSE
#define APPL_INCLUDED   TRUE
#define USE_UART_HCI   TRUE
#define BTU_BTA_INCLUDED   TRUE
#define BTUI_DEFAULT_LOCAL_NAME   "BRCM Bluetooth"
#define SBC_FOR_EMBEDDED_LINUX   TRUE
#define UPIO_INCLUDED   TRUE
#define BTA_DM_REMOTE_DEVICE_NAME_LENGTH 248
#define BTM_MAX_REM_BD_NAME_LEN 248
#define BTM_MAX_LOC_BD_NAME_LEN 248
#define BTM_USE_DEF_LOCAL_NAME TRUE
#define BTM_DEF_LOCAL_NAME "Galaxy Nexus BlueDroid"
#define BTM_INQ_DB_SIZE   40
#define BTM_SEC_MAX_DEVICE_RECORDS   100
#define BTM_SEC_FORCE_RNR_FOR_DBOND   FALSE
#define BTM_AUTOMATIC_HCI_RESET   FALSE
#define AVDT_VERSION   0x0102
#define BTA_SIMUL_AV_HFP_NOT_SUPPORTED   TRUE
#define BTA_AG_AT_MAX_LEN   512
#define BTA_AVRCP_FF_RW_SUPPORT   TRUE
#define BTM_MAX_SCO_LINKS   2
#define BTA_AG_SCO_PKT_TYPES    (BTM_SCO_LINK_ONLY_MASK | BTM_SCO_PKT_TYPES_MASK_EV3 |  BTM_SCO_PKT_TYPES_MASK_NO_3_EV3 | BTM_SCO_PKT_TYPES_MASK_NO_2_EV5 | BTM_SCO_PKT_TYPES_MASK_NO_3_EV5)
#define BTAPP_AV_SECMASK   (BTA_SEC_AUTHENTICATE | BTA_SEC_AUTHORIZE)
#define BTA_AV_MAX_A2DP_MTU   668
#define BTA_AV_RET_TOUT   15
#define PORCHE_PAIRING_CONFLICT   TRUE
#define BTA_AV_CO_CP_SCMS_T   FALSE
#define AVDT_CONNECT_CP_ONLY   FALSE
#define BTL_CFG_USE_CONF_FILE   FALSE
#define BTAPP_AHF_API_SUPPORT   TRUE
#define BTAPP_TESTMODE_INCLUDED   TRUE
#define HCILP_INCLUDED   TRUE
#define HCISU_H4_INCLUDED   TRUE
#define BT_PCM_DEF_CLK   0
#define BT_PCM_DEF_ROLE   0
#define BT_USE_TRACES       TRUE
#define BT_TRACE_BTIF       TRUE
#define BTTRC_INCLUDED      FALSE
#define BT_TRACE_VERBOSE    FALSE
#define BTTRC_PARSER_INCLUDED   FALSE
#define MAX_TRACE_RAM_SIZE   10000
#define OBX_INITIAL_TRACE_LEVEL   BT_TRACE_LEVEL_ERROR
//#define LOG_NDEBUG    1
//#define LOG_NDDEBUG   1
//#define LOG_NIDEBUG   1
#define BTSNOOPDISP_INCLUDED   TRUE
#define BTSNOOP_FILENAME   "/data/misc/bluedroid/btsnoop_hci.log" 
#define SNOOP_CONFIG_PATH "/data/misc/bluedroid/btsnoop_enabled"
#define BTM_ALLOW_CONN_IF_NONDISCOVER TRUE
#define BTLA_REL_2_X   TRUE
#define BTAPP_FM_USE_HW_POKE_VOLUME   FALSE
#define BTAPP_FM_AUDIO_PATH   BTA_FM_AUDIO_DAC
#define BTAPP_DM_SUPPORTED_SERVICES   (BTA_HSP_SERVICE_MASK | BTA_HFP_SERVICE_MASK | BTA_A2DP_SERVICE_MASK | BTA_HID_SERVICE_MASK | BTA_OPP_SERVICE_MASK | BTA_BPP_SERVICE_MASK | BTA_NAP_SERVICE_MASK | BTA_PANU_SERVICE_MASK | BTA_HL_SERVICE_MASK)
#define PBAP_ZERO_VCARD_IN_DB   FALSE
#define BTA_DM_SDP_DB_SIZE   4096
#define BTA_BUSAPP_INCLUDED   TRUE
#define MAX_L2CAP_CLIENTS   15
#define FTS_REJECT_INVALID_OBEX_SET_PATH_REQ   TRUE
#define HID_HOST_MAX_CONN_RETRY   (3)
#define BTAPP_TEST_OOB_INCLUDED   TRUE
#define ENABLE_PCM_LOGGER   FALSE
#define BTM_DISC_DURING_RS   TRUE
#define PAN_DTUN   TRUE
#define BT_UART_PORT   "/dev/s3c2410_serial0"
#define BTM_WBS_INCLUDED   FALSE

#define NO_GKI_RUN_RETURN TRUE

#define BTE_MAIN_CFG_DEFAULT_PATCHFILE_NAME     ("/vendor/firmware/bcm4329.hcd")

#define AG_VOICE_SETTINGS HCI_DEFAULT_VOICE_SETTINGS
#endif
