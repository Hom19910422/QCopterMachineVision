/* #include "module_mt9v022.h" */

#ifndef __MODULE_MT9V022_H
#define __MODULE_MT9V022_H

#include "stm32f4xx.h"
/*=====================================================================================================*/
/*=====================================================================================================*/
#define DCMI_DR_ADDRESS                           ((u32)0x50050028)

#define MT9V022_ID                                ((u16)0x1313)
#define MT9V022_I2C_ADDR                          ((u8)0x90)

#define MT9V022_Version                           ((u8)0x00)
#define MT9V022_ColumnStart                       ((u8)0x01)
#define MT9V022_RowStart                          ((u8)0x02)
#define MT9V022_WindowHeight                      ((u8)0x03)
#define MT9V022_WindowWidth                       ((u8)0x04)
#define MT9V022_HorizontalBlanking                ((u8)0x05)
#define MT9V022_VerticalBlanking                  ((u8)0x06)
#define MT9V022_ChipControl                       ((u8)0x07)
#define MT9V022_ShutterWidth_1                    ((u8)0x08)
#define MT9V022_ShutterWidth_2                    ((u8)0x09)
#define MT9V022_ShutterWidthCtrl                  ((u8)0x0A)
#define MT9V022_TotalShutterWidth                 ((u8)0x0B)
#define MT9V022_ChipReset                         ((u8)0x0C)
#define MT9V022_ReadMode                          ((u8)0x0D)
#define MT9V022_MonitorMode                       ((u8)0x0E)
#define MT9V022_PixelOperationMode                ((u8)0x0F)
#define MT9V022_LED_OutCtrl                       ((u8)0x1B)
#define MT9V022_ADC_ModeControl                   ((u8)0x1C)
#define MT9V022_VREF_ADCControl                   ((u8)0x2C)
#define MT9V022_V1_Control                        ((u8)0x31)
#define MT9V022_V2_Control                        ((u8)0x32)
#define MT9V022_V3_Control                        ((u8)0x33)
#define MT9V022_V4_Control                        ((u8)0x34)
#define MT9V022_AnalogGain                        ((u8)0x35)
#define MT9V022_MaxAnalogGain                     ((u8)0x36)
#define MT9V022_FrameDarkAverage                  ((u8)0x42)
#define MT9V022_DarkAvgThresholds                 ((u8)0x46)
#define MT9V022_BL_CalibControl                   ((u8)0x47)
#define MT9V022_BL_CalibrationValue               ((u8)0x48)
#define MT9V022_BL_CalibStepSize                  ((u8)0x4C)
#define MT9V022_Row_NoiseCorrCtrl_1               ((u8)0x70)
#define MT9V022_Row_NoiseConstant                 ((u8)0x72)
#define MT9V022_Row_NoiseCorrCtrl_2               ((u8)0x73)
#define MT9V022_Pixclk_FV_LV                      ((u8)0x74)
#define MT9V022_DigitalTestPattern                ((u8)0x7F)
#define MT9V022_Tile_WeightGain_X0_Y0             ((u8)0x80)
#define MT9V022_Tile_WeightGain_X1_Y0             ((u8)0x81)
#define MT9V022_Tile_WeightGain_X2_Y0             ((u8)0x82)
#define MT9V022_Tile_WeightGain_X3_Y0             ((u8)0x83)
#define MT9V022_Tile_WeightGain_X4_Y0             ((u8)0x84)
#define MT9V022_Tile_WeightGain_X0_Y1             ((u8)0x85)
#define MT9V022_Tile_WeightGain_X1_Y1             ((u8)0x86)
#define MT9V022_Tile_WeightGain_X2_Y1             ((u8)0x87)
#define MT9V022_Tile_WeightGain_X3_Y1             ((u8)0x88)
#define MT9V022_Tile_WeightGain_X4_Y1             ((u8)0x89)
#define MT9V022_Tile_WeightGain_X0_Y2             ((u8)0x8A)
#define MT9V022_Tile_WeightGain_X1_Y2             ((u8)0x8B)
#define MT9V022_Tile_WeightGain_X2_Y2             ((u8)0x8C)
#define MT9V022_Tile_WeightGain_X3_Y2             ((u8)0x8D)
#define MT9V022_Tile_WeightGain_X4_Y2             ((u8)0x8E)
#define MT9V022_Tile_WeightGain_X0_Y3             ((u8)0x8F)
#define MT9V022_Tile_WeightGain_X1_Y3             ((u8)0x90)
#define MT9V022_Tile_WeightGain_X2_Y3             ((u8)0x91)
#define MT9V022_Tile_WeightGain_X3_Y3             ((u8)0x92)
#define MT9V022_Tile_WeightGain_X4_Y3             ((u8)0x93)
#define MT9V022_Tile_WeightGain_X0_Y4             ((u8)0x94)
#define MT9V022_Tile_WeightGain_X1_Y4             ((u8)0x95)
#define MT9V022_Tile_WeightGain_X2_Y4             ((u8)0x96)
#define MT9V022_Tile_WeightGain_X3_Y4             ((u8)0x97)
#define MT9V022_Tile_WeightGain_X4_Y4             ((u8)0x98)
#define MT9V022_Tile_Coord_X_0_5                  ((u8)0x99)
#define MT9V022_Tile_Coord_X_1_5                  ((u8)0x9A)
#define MT9V022_Tile_Coord_X_2_5                  ((u8)0x9B)
#define MT9V022_Tile_Coord_X_3_5                  ((u8)0x9C)
#define MT9V022_Tile_Coord_X_4_5                  ((u8)0x9D)
#define MT9V022_Tile_Coord_X_5_5                  ((u8)0x9E)
#define MT9V022_Tile_Coord_Y_0_5                  ((u8)0x9F)
#define MT9V022_Tile_Coord_Y_1_5                  ((u8)0xA0)
#define MT9V022_Tile_Coord_Y_2_5                  ((u8)0xA1)
#define MT9V022_Tile_Coord_Y_3_5                  ((u8)0xA2)
#define MT9V022_Tile_Coord_Y_4_5                  ((u8)0xA3)
#define MT9V022_Tile_Coord_Y_5_5                  ((u8)0xA4)
#define MT9V022_AEC_AGC_DesiredBin                ((u8)0xA5)
#define MT9V022_AEC_UpdateFrequency               ((u8)0xA6)
#define MT9V022_AEC_LPF                           ((u8)0xA8)
#define MT9V022_AGC_UpdateFrequency               ((u8)0xA9)
#define MT9V022_AGC_LPF                           ((u8)0xAB)
#define MT9V022_AEC_AGC_Enable                    ((u8)0xAF)
#define MT9V022_AEC_AGC_PixCount                  ((u8)0xB0)
#define MT9V022_LVDS_MasterCtrl                   ((u8)0xB1)
#define MT9V022_LVDS_ShiftClkCtrl                 ((u8)0xB2)
#define MT9V022_LVDS_DataCtrl                     ((u8)0xB3)
#define MT9V022_DataStreamLatency                 ((u8)0xB4)
#define MT9V022_LVDS_InternalSync                 ((u8)0xB5)
#define MT9V022_LVDS_PayloadControl               ((u8)0xB6)
#define MT9V022_StereoscopErrorCtrl               ((u8)0xB7)
#define MT9V022_StereoscopErrorFlag               ((u8)0xB8)
#define MT9V022_LVDS_DataOutput                   ((u8)0xB9)
#define MT9V022_AGC_GainOutput                    ((u8)0xBA)
#define MT9V022_AEC_GainOutput                    ((u8)0xBB)
#define MT9V022_AGC_AEC_CurrentBin                ((u8)0xBC)
#define MT9V022_MaximumShutterWidth               ((u8)0xBD)
#define MT9V022_AGC_AEC_BinDifferenceThreshold    ((u8)0xBE)
#define MT9V022_FieldBlank                        ((u8)0xBF)
#define MT9V022_MonModeCaptureCtrl                ((u8)0xC0)
#define MT9V022_Temperature                       ((u8)0xC1)
#define MT9V022_AnalogControls                    ((u8)0xC2)
#define MT9V022_NTSC_FV_LV_Ctrl                   ((u8)0xC3)
#define MT9V022_NTSC_HorizBlankCtrl               ((u8)0xC4)
#define MT9V022_NTSC_VertBlankCtrl                ((u8)0xC5)
#define MT9V022_BtyewiseAddr                      ((u8)0xF1)
#define MT9V022_RegisterLock                      ((u8)0xFE)
#define MT9V022_ChipVersion                       ((u8)0xFF)
/*=====================================================================================================*/
/*=====================================================================================================*/
#define MAX_IMAGE_WIDTH         (752)
#define MAX_IMAGE_HEIGHT        (480)

#define FULL_IMAGE_SIZE         (90240) // FULL_IMAGE_ROW_SIZE*FULL_IMAGE_COLUMN_SIZE
#define FULL_IMAGE_ROW_SIZE     (376)
#define FULL_IMAGE_COLUMN_SIZE  (240)

#define CAM_OE        PBO(4)
#define CAM_STANDBY   PBO(3)
#define CAM_EXPOSURE  PBO(5)
/*=====================================================================================================*/
/*=====================================================================================================*/
extern u8 ImageBuf[FULL_IMAGE_SIZE];
/*=====================================================================================================*/
/*=====================================================================================================*/
static void SCCB_Read( u8, u8, u16* );
static void SCCB_Write( u8, u8, u16 );

void MT9V022_Config( void );
u8 MT9V022_Init( void );
/*=====================================================================================================*/
/*=====================================================================================================*/
#endif