#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>
#include <IcelinSdk.PvZGW2/Core/AudioCurve.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835020
   RuntimeId:        028C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10DE
   VfTable:          00000001421EC700
   Address (Base):   000000014311A730
*/
#pragma pack(push, 8)
class FloatProvider_Utility : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) UtilityValue; /* 0x0010 */
  AudioCurve UtilityCurve; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_Utility) == 40);

}
