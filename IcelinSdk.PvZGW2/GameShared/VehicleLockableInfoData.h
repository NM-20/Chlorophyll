#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CF50
   RuntimeId:        10C8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAE40
   Default Value:    000000014284CF68
*/
#pragma pack(push, 4)
struct VehicleLockableInfoData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 HeatSignature; /* 0x0000 */
  FB_FLOAT32 RadarSignature; /* 0x0004 */
  FB_FLOAT32 LowAltitudeHeight; /* 0x0008 */
  FB_FLOAT32 LowAltitudeHeatSignature; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(VehicleLockableInfoData) == 16);

}
