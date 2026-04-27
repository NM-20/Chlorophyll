#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/TransformProvider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428351E0
   RuntimeId:        02A8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1098
   VfTable:          00000001421EC5B0
   Address (Base):   000000014311A1F0
*/
#pragma pack(push, 8)
class TransformProvider_Blend : public TransformProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TransformProvider) TransformA; /* 0x0010 */
  FB_HANDLE(class TransformProvider) TransformB; /* 0x0018 */
  FB_FLOAT32 BlendFactor; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TransformProvider_Blend) == 40);

}
