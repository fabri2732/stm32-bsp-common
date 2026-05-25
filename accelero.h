#ifndef __ACCELERO_H
#define __ACCELERO_H

#ifdef __cplusplus
 extern "C" {
#endif

#include <stdint.h>

// --- AÑADE ESTO ---
typedef struct
{
  uint8_t Power_Mode;
  uint8_t AccOutput_DataRate;
  uint8_t Axes_Enable;
  uint8_t High_Resolution;
  uint8_t BlockData_Update;
  uint8_t Endianness;
  uint8_t AccFull_Scale;
  uint8_t Communication_Mode;
} ACCELERO_InitTypeDef;

typedef struct {
  void      (*Init)(uint16_t);
  void      (*DeInit)(void);
  uint8_t   (*ReadID)(void);
  void      (*Reset)(void);
  void      (*LowPower)(void);
  void      (*ConfigIT)(void);
  void      (*EnableIT)(uint8_t);
  void      (*DisableIT)(uint8_t);
  uint8_t   (*ITStatus)(uint16_t);
  void      (*ClearIT)(void);
  void      (*FilterConfig)(uint8_t);
  void      (*FilterCmd)(uint8_t);
  void      (*GetXYZ)(int16_t *);
} ACCELERO_DrvTypeDef;

#ifdef __cplusplus
}
#endif

#endif /* __ACCELERO_H */