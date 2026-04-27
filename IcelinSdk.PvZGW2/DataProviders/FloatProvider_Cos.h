#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834E80
   RuntimeId:        0272
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10E1
   VfTable:          00000001421EC820
   Address (Base):   000000014311ABB0
*/
#pragma pack(push, 8)
class FloatProvider_Cos : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FloatProvider) Value; /* 0x0010 */
  FB_HANDLE(class FloatProvider) PhaseOffset; /* 0x0018 */
  FB_HANDLE(class FloatProvider) Frequency; /* 0x0020 */
  FB_HANDLE(class FloatProvider) Magnitude; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_Cos) == 48);

}
